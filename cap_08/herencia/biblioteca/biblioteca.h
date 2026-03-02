#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "material.h"
#include "libro.h"
#include "revista.h"
#include "usuario.h"
#include "estudiante.h"
#include <vector>
#include <algorithm>  // para std::find_if
#include <memory>     // para std::unique_ptr (punteros inteligentes)


class Biblioteca {

  private:
    // Vector de punteros inteligentes a la clase BASE Material
    // Esto es  POLIMORFISMO: podemos guardar cualquier tipo derivado de material
    std::vector<std::unique_ptr<Material>> catalogo;

    // Vector de punteros inteligentes a la clase BASE Usuario
    std::vector<std::unique_ptr<Usuario>> usuarios;

  public:
    Biblioteca() {
      std::cout << "\n**** BIBLIOTECA UNIVERSITARIA INICIADA ****\n" << std::endl;
    }

    // Template method para agregar cualquier tipo de Material
    template<typename T, typename... Args>
    void agregarMaterial(Args&&... args) {
      auto material = std::make_unique<T>(std::forward<Args>(args)...);
      std::cout << "📌 Añadido al catálogo: ";
      material->mostrarInfo();
      catalogo.push_back(std::move(material));
    }

    // Template method para agregar cualquier tipo de usuario
    template<typename U, typename... Args>
      void agregarUsuario(Args&&... args) {
        auto usuario = std::make_unique<U>(std::forward<Args>(args)...);
        std::cout << "📌 Registrado: ";
        usuario->mostrarInfo();
        usuarios.push_back(std::move(usuario));
      }

    // Bsucar material por código (devuelve raw pointer - no transfiere propiedad)
    Material* buscarMaterial(const std::string& codigo) {
      for (const auto& material : catalogo) {
        if (material->getCodigo() == codigo) {
          return material.get();
        }
      }
      return nullptr;
    }

    // Buscar usuario por id
    Usuario* buscarUsuario(const int id) {
      for (const auto& usuario : usuarios) {
        if (usuario->getId() == id) {
          return usuario.get();
        }
      }
      return nullptr;
    }

    // Prestar material a usuario (¡TODO EL PODER DEL POLIMORFISMO AQUI!)
    bool prestarMaterial(const std::string& cod_material, int id_usuario) {
      Material* material = buscarMaterial(cod_material);
      Usuario* usuario = buscarUsuario(id_usuario);

      if (!material) {
        std::cout << "❌ Material con código " << cod_material << " no encontrado\n";
        return false;
      }

      if (!usuario) {
        std::cout << "❌ Usuario con ID " << id_usuario << " no encontrado\n";
        return false;
      }

      std::cout << "\n--- PRocesando préstamo ---\n";
      usuario->mostrarInfo();
      material->mostrarInfo();

      // Verificar si el usuario puede prestar más materiales
      if (!usuario->puedePrestar()) {
         std::cout << "❌ " << usuario->getNombre() << " no puede tomar más préstamos\n";
         return false;
      }

      if (material->prestar()) {
        usuario->registrarPrestamo(cod_material);

        // Mostrar información especifica del préstamo
        std::cout << "✅ PRÉSTAMO EXITOSO\n";
        std::cout << "  Material: " << material->getTitulo() << "\n";
        std::cout << "  Usuario: " << usuario->getNombre() << "\n";
        std::cout << "  Plazo: " << usuario->getDiasPrestamoPermitido() << " días (límite del usuario)\n";
        std::cout << "  Política del material: " << material->getDiasPrestamo() << " días\n";
        return true;
      }

      std::cout << "❌ No se puede realizar el préstamo\n";
      return false;
    }

    // Devolver material
    bool devolverMaterial(const std::string& cod_material, int id_usuario) {
      Material* material = buscarMaterial(cod_material);
      Usuario* usuario = buscarUsuario(id_usuario);

      if (!material || !usuario) {
        std::cout << "❌ Material o usuario no encontrado\n";
        return false;
      }

      material->devolver();
      usuario->devolverMaterial(cod_material);
      return true;
    }
    
    // Listar todo el catálogo (demostración de polimorfismo)
    void listarCatalogo() const {
        std::cout << "\n📚 === CATÁLOGO COMPLETO ===\n";
        for (const auto& material : catalogo) {
            material->mostrarInfo();  // ¡Llamada polimórfica!
        }
        std::cout << "===========================\n";
    }

    // Listar todos los usuarios
    void listarUsuarios() const {
        std::cout << "\n👥 === USUARIOS REGISTRADOS ===\n";
        for (const auto& usuario : usuarios) {
            usuario->mostrarInfo();  // ¡Llamada polimórfica!
        }
        std::cout << "===============================\n";
    }

    // Mostrar estadísticas
    void mostrarEstadisticas() const {
        std::cout << "\n📊 === ESTADÍSTICAS ===\n";
        std::cout << "Materiales en catálogo: " << catalogo.size() << "\n";
        std::cout << "Usuarios registrados: " << usuarios.size() << "\n";

        int prestados = 0;
        for (const auto& m : catalogo) {
            if (!m->getDisponible()) prestados++;
        }
        std::cout << "Materiales prestados: " << prestados << "\n";
        std::cout << "======================\n";
    }

};

#endif // BIBLIOTECA_H

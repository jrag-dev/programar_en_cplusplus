import matplotlib.pyplot as plt
import numpy as np

t_data, x_data, v_data = [], [], []

with open('motion.txt', 'r') as file:
    for line in file:
        parts = line.strip().split()
        if parts:
            t_data.append(float(parts[0]))
            x_data.append(float(parts[1]))
            v_data.append(float(parts[2]))

# Convertir a arrays de numpy para facilitar cálculos
t = np.array(t_data)
x = np.array(x_data)
v = np.array(v_data)

plt.figure(figsize=(8, 6))

# Graficar líneas analíticas (continuas)
t_fine = np.linspace(0, 2*np.pi, 500)
plt.plot(t_fine, np.sin(t_fine), 'k-', linewidth=1, label='Analítica x(t)')
plt.plot(t_fine, np.cos(t_fine), 'k:', linewidth=1, label='Analítica v(t)')

# Graficar datos numéricos con marcadores (estilo Gould)
# Usamos [::N] para no saturar el gráfico con 100,000 puntos
step = 1 # Ajusta según cuántos puntos quieras ver
plt.plot(t[::step], x[::step], 'k+', markersize=8, markeredgewidth=1, label='Numérica x', linestyle='None')
plt.plot(t[::step], v[::step], 'ks', markersize=6, markerfacecolor='none', markeredgewidth=1, label='Numérica v', linestyle='None')

# Formatear el eje X para mostrar múltiplos de PI
plt.xticks([0, 0.5*np.pi, 1.0*np.pi, 1.5*np.pi, 2.0*np.pi], 
           ['0.0$\pi$', '0.5$\pi$', '1.0$\pi$', '1.5$\pi$', '2.0$\pi$'])

# Estética general
plt.xlabel('$t$')
plt.ylabel('$x(t), v(t)$')
plt.axhline(0, color='black', linewidth=0.5)
plt.xlim(0, 2*np.pi)
plt.ylim(-1.1, 1.1)

# Quitar colores y usar estilo blanco y negro
plt.gca().set_facecolor('white')
plt.show()
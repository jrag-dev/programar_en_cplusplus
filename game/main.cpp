#include <raylib.h>


int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Game");

    float rotation = 0.0f;

    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        // ----------------------------------------------------------------------------------------
        rotation += 0.2f;
        // ----------------------------------------------------------------------------------------

        // Draw
        // ----------------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("Some basic shapes available on raylib", 20, 20, 20, DARKGRAY);

            // Cicle shapes and lines
            DrawCircle(screenWidth/5, 120, 60, DARKBLUE);
            DrawCircleGradient(screenWidth/5, 220, 80, GREEN, RED);
            DrawCircleLines(320, 200, 40, ORANGE);
            DrawEllipse(screenWidth/2, screenHeight/10, 40, 50, DARKPURPLE);
            DrawEllipseLines(screenWidth/3, screenHeight/6, 80, 60, DARKGREEN);

            // Rectangle shapes and lines
            DrawRectangle(screenWidth/5, 400, 100, 20, RED);
            DrawRectangleGradientH(screenWidth/5, 450, 100, 30, ORANGE, DARKBLUE);
            DrawRectangleLines(screenWidth/5, 500, 150, 40, DARKPURPLE);

            // Triangle shapes and lines
            DrawTriangle(
                (Vector2) {screenWidth/4.0f *3.0f, 80.0f},
                (Vector2) {screenWidth/4.0f *3.0f - 60.0f, 150.0f},
                (Vector2) {screenWidth/4.0f *3.0f+ 60.0f, 150.0f},
                VIOLET
            );

            DrawTriangleLines(
                (Vector2) {screenWidth/4.0f*3.0f, 160.0f},
                (Vector2) {screenWidth/4.0f*3.0f - 20.0f, 230.0f},
                (Vector2) {screenWidth/4.0f*3.0f + 20.0f, 230.0f},
                DARKBLUE
            );

            // Polygon shapes and lines
            DrawPoly((Vector2) { screenWidth/4.0f*3.0, 330}, 6, 80, rotation, BROWN);
            DrawPolyLines((Vector2) { screenWidth/4.0f*3.0, 330}, 9, 90, rotation, DARKBROWN);
            DrawPolyLinesEx((Vector2) { screenWidth/4.0f*3.0, 330}, 12, 120, rotation, 6, BEIGE);
            
            DrawLine(18, 42, screenWidth - 18, 42, BLACK);

        EndDrawing();

    }

    // De-Initialization
    // ----------------------------------------------------------------------------------------
    CloseWindow();
    // ----------------------------------------------------------------------------------------

    return 0;
}
#include <iostream>
#include <raylib.h>

int main() {
    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenWidth();

    std::cout << "w:" << screenWidth << " h: " << screenHeight << std::endl;

    InitWindow(screenWidth, screenHeight, "Test Window");

    SetTargetFPS(60);
    // ToggleBorderlessWindowed();

    while (!WindowShouldClose()) {
        BeginDrawing();

        {
            ClearBackground(BLACK);

            DrawText("Congrats! You created your first window! " + screenWidth, (GetScreenWidth() / 2) - 40, GetScreenHeight() / 2, 20, LIGHTGRAY);
        }

        EndDrawing();
    }

    CloseWindow();

    return EXIT_SUCCESS;
}
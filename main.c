#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>
#include <raymath.h>
#include <math.h>

int main() 
{
    int screenWidth = 1920;
    int screenHeight = 1080;
    InitWindow(screenWidth, screenHeight, "Hi Nida");
    SetTargetFPS(60);
    int measuredText = MeasureText("I love you!", 48);

    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);
        BeginDrawing();

        DrawText("I love you!", (screenWidth/2) - measuredText/2, screenHeight/2, 48, GREEN);
               
        EndDrawing();
    }
    
    printf("Hello, World!\n");
    return 0;
}
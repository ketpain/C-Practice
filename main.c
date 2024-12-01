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
    int direction = 1;
    int calculatedTextX = (screenWidth/2) - measuredText/2;
    int calculatedTextY = screenHeight/2;
    int textSize = 48;
    int textScaleDirection = 1;
    int rotation = 0;
    int rotationDirection = 1;

    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);
        BeginDrawing();

        DrawTextPro(GetFontDefault(), "I love you!", (Vector2){calculatedTextX, calculatedTextY}, (Vector2){0, 0}, rotation, textSize, 3, GREEN);
        calculatedTextX += direction;
        if (calculatedTextX <= 0) 
        {
            direction = 1;
        } 
        else if (calculatedTextX >= screenWidth - measuredText) 
        {
            direction = -1;
        }
        textSize += textScaleDirection;
        if (textSize >= 108)
        {
            textScaleDirection = -1;
        }
        else if (textSize <= 24)
        {
            textScaleDirection = 1;
        }
        rotation += rotationDirection;
        if (rotation >= 360)
        {
            rotationDirection = -1;
        }
        else if (rotation <= 0)
        {
            rotationDirection = 1;
        }

        DrawFPS(10, 10);
        EndDrawing();
    }

    printf("Size of Bool: %d\n", sizeof(bool));

    return 0;
}
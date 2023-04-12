#include "raylib.h"

struct Player {
    int xPos;
    int yPos; 
    char image; 
};

int main(void)
{

    const int screenWidth = 800;
    const int screenHeight = 600; 


    int gridWidth = 10;
    int gridHeight = 5; 
    int padingX = 15;
    int padingY = 15; 
    struct Player player= {0, 0,'@'}; 
        
        
    InitWindow(screenWidth, screenHeight, "TRPG");

    SetTargetFPS(60 ); 



    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        for(int xPos = 0; xPos < gridWidth; xPos++)
        {
            for(int yPos = 0; yPos < gridHeight; yPos++)
            {
              DrawText(&player.image, player.xPos, player.yPos, 20, RED); 
             DrawText("\"", xPos * padingX, yPos * padingY,20,GREEN);
            }
        }

        EndDrawing();
    }  

    CloseWindow();
    return 0; 
}
/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press Shift+F10 for Android Studio.
*
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2023 Ramon Santamaria (@raysan5) and reviewed by Victor Le Juez
*
********************************************************************************************/

#include "raymob.h" // This header can replace 'raylib.h' and includes additional functions related to Android.
#include <math.h>

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 0;
    const int screenHeight = 0;

    InitWindow(screenWidth, screenHeight, "SushiEngine");

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    int dataSize = 0;
    unsigned char* mapData = LoadFileData("test.tmj", &dataSize);

    //cute_tiled_map_t* map = cute_tiled_load_map_from_memory(mapData, dataSize, 0);
    //TraceLog(LOG_INFO, "%d  %d\n", map->width, map->height);

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //---------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        //DrawTexture(texture, screenWidth/2 - texture.width/2, screenHeight/2 - texture.height/2, WHITE);

        DrawText("HELLO", 360, 370, 10, GRAY);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    //cute_tiled_free_map(map);
    UnloadFileData(mapData);

    CloseWindow();                // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
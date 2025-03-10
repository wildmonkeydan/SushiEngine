//
// Created by Laurence on 10/03/2025.
//

#ifndef SUSHIENGINE_SPRITE_H
#define SUSHIENGINE_SPRITE_H

#include "../deps/raylib/raylib.h"

typedef struct{
    Vector2 position;
    Vector2 scale;
    float rotation;
    Vector2 origin;

    Texture2D* atlas;
    Rectangle uv;

    Color color;
    bool visible;
} Sprite;

Sprite Sprite_Create(Vector2 pos, Texture2D* tex, Rectangle uv);
Sprite Sprite_CreateEx(Vector2 pos, Vector2 size, float rot, Vector2 pivot, Texture2D* tex, Rectangle uv, Color col);
void Sprite_Render(Sprite* sprt);

#endif //SUSHIENGINE_SPRITE_H
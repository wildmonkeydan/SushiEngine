//
// Created by Laurence on 10/03/2025.
//

#include "sprite.h"

Sprite Sprite_Create(Vector2 pos, Texture2D* tex, Rectangle uv){
    Sprite sprt = { 0 };

    sprt.position = pos;
    sprt.atlas = tex;
    sprt.uv = uv;
    sprt.origin = (Vector2){ uv.width / 2.f, uv.height / 2.f };
    sprt.rotation = 0.f;
    sprt.scale = (Vector2){1.f,1.f};
    sprt.color = RAYWHITE;
    sprt.visible = true;

    return sprt;
}

Sprite Sprite_CreateEx(Vector2 pos, Vector2 size, float rot, Vector2 pivot, Texture2D* tex, Rectangle uv, Color col){
    Sprite sprt = { 0 };

    sprt.position = pos;
    sprt.atlas = tex;
    sprt.uv = uv;
    sprt.origin = pivot;
    sprt.rotation = rot;
    sprt.scale = size;
    sprt.color = col;
    sprt.visible = true;

    return sprt;
}

void Sprite_Render(Sprite* sprt){
    if(sprt->visible)
        DrawTexturePro(*sprt->atlas, (Rectangle){ sprt->uv.x, sprt->uv.y, sprt->uv.width, sprt->uv.height }, (Rectangle){ sprt->position.x, sprt->position.y, sprt->uv.width, sprt->uv.height }, sprt->origin, sprt->rotation, sprt->color);
}
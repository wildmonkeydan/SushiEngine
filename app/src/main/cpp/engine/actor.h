//
// Created by Laurence on 10/03/2025.
//

#ifndef SUSHIENGINE_ACTOR_H
#define SUSHIENGINE_ACTOR_H

#include "sprite.h"
#include "../cute_tiled.h"

typedef struct{
    Sprite sprt;

    bool useGravity;
    Vector2 velocity;

    //Script* script;
} Actor;

Actor* Actor_Create(cute_tiled_object_t* obj, Texture2D* actorAtlas, cute_tiled_tile_descriptor_t* objTile);
void Actor_Destroy(Actor* actor);

#endif //SUSHIENGINE_ACTOR_H

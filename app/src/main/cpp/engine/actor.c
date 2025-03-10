//
// Created by Laurence on 10/03/2025.
//

#include <string.h>
#include "actor.h"

Actor* Actor_Create(cute_tiled_object_t* obj, Texture2D* actorAtlas, cute_tiled_tile_descriptor_t* objTile){
    Actor* actor = MemAlloc(sizeof(Actor));

    actor->sprt = Sprite_CreateEx((Vector2){ obj->x, obj->y }, (Vector2) { 1.f, 1.f }, obj->rotation, (Vector2) { obj->width / 2.f, obj->height / 2.f }, actorAtlas, (Rectangle) { 0.f, 0.f, obj->width, obj->height }, RAYWHITE);
    actor->sprt.visible = obj->visible;

    // Look at properties
    for(int i = 0; i < obj->property_count; i++){
        const char* name = obj->properties[i].name.ptr;

        if(!strcmp(name, "gravity"))
            actor->useGravity = obj->properties[i].data.boolean;
    }

    return actor;
}

void Actor_Destroy(Actor* actor){
    MemFree(actor);
}
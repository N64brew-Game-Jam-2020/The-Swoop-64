#ifdef _cplusplus
extern "C"{
#endif

#ifndef INCLUDE_SCENEDATA_H
#define INCLUDE_SCENEDATA_H

#include <ultra64.h>

typedef struct TSceneEntry
{
    s32 id;

    float positionX;
    float positionY;
    float positionZ;

    float rotationX;
    float rotationY;
    float rotationZ;

    float scaleX;
    float scaleY;
    float scaleZ;
};

enum EObject
{
    OBJECT_NULL = 0,
    OBJECT_CUBE,
    OBJECT_BALLOON,
    OBJECT_LUNCHTABLE,
    OBJECT_CHAIR,
    OBJECT_BASKET,
    OBJECT_BEER,
    OBJECT_NOODLE,
    OBJECT_MELON,
    OBJECT_APPLE,
    OBJECT_BALLOON_DEFLATED,
    OBJECT_BEEHIVE,
    OBJECT_BILLS,
    OBJECT_CARD,
    OBJECT_FLOWER,
    OBJECT_NECKLACE,
    OBJECT_RING,
    OBJECT_SOCCER,
    OBJECT_STICK,
    OBJECT_TABLE,
    OBJECT_CAT,
    OBJECT_CHICKEN,
    OBJECT_CRITIC,
    OBJECT_LOGO,
    
};

#endif

#ifdef _cplusplus
}
#endif
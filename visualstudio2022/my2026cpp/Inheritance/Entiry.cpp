#include "Entity.h"

Entity::Entity() : x(0), y(0) {}

Entity::~Entity() {}

void Entity::Move(float deltaX, float deltaY)
{
    x += deltaX;
    y += deltaY;
}
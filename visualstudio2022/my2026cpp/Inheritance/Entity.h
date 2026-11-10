#include "../common/header.h"

class Entity
{
  public:
    Entity();
    virtual ~Entity();

    virtual void PrintPosition() { std::cout << "Entity Position: (" << x << ", " << y << ")" << std::endl; } //虚函数 允许子类重写父类的函数 运行时多态
    virtual void PrintName() = 0;//纯虚函数 没有实现的函数 一种特殊类型的虚函数 也叫接口


    float x;
    float y;

    void Move(float deltaX, float deltaY);
};
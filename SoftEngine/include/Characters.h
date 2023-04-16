#ifndef CHARACTERS_H
#define CHARACTERS_H

#include "GameObject.h"
class Characters: public GameObject
{
    public:
        Characters(Properties* props): GameObject(props) {}

        virtual void Draw()=0;
        virtual void Clean()=0;
        virtual void Update(float dt)=0;

    protected:
    std::string m_Name;

};

#endif // CHARACTERS_H

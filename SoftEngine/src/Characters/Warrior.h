#ifndef WARRIOR_H
#define WARRIOR_H
#include "Characters.h"

class Warrior: public Characters
{
    public:
        Warrior (Properties* props);


        virtual void Draw() override;
        virtual void Clean() override;
        virtual void Update(float dt) override;

    public:
        int m_Row, m_Frame, m_FrameCount;
        int m_AnimSpeed;
};

#endif // WARRIOR_H

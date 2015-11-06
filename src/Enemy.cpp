#include "Enemy.h"
#include "SDL2/SDL.h"

Enemy::Enemy()
{
  m_velocity.setY(2);
  m_velocity.setX(-0.001);
}

void Enemy::draw()
{
  SDLGameObject::draw(); // we now use SDLGameObject
}
void Enemy::update()
{
  m_currentFrame = int(((SDL_GetTicks() / 100) % m_numFrames));
  if(m_position.getY() < 0)
    {
      m_velocity.setY(2);
    }
  else if(m_position.getY() > 400)
    {
      m_velocity.setY(-2);
    }
  SDLGameObject::update();
  //m_position.setX(m_position.getX() + 1);
  //m_position.setY(m_position.getY() + 1);
  //m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}
void Enemy::clean()
{
}

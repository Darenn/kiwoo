#ifndef __MENUSTATE__
#define __MENUSTATE__

#include "GameState.h"
#include <string>
#include <vector>


class MenuState : public GameState
{
protected:
	typedef void(*Callback)();
	virtual void setCallbacks(const std::vector<Callback>& callbacks) = 0;
	virtual void update() = 0;
	virtual void render() = 0;
	virtual bool onEnter() = 0;
	virtual bool onExit() = 0;
	virtual std::string getStateID() const = 0;
	std::vector<Callback> m_callbacks;
};

#endif

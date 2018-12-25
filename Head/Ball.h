#pragma once
#include "GameObject.h"
class Ball :
	public GameObject
{
public:
	Ball();
	Ball(glm::vec4 color);
	void SetColor(glm::vec4 color);
	~Ball();
private:
	glm::vec4 color;
};

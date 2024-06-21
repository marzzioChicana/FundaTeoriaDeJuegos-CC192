#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void Zombie::init(float speed, glm::vec2 position)
{
	this->speed = speed;
	this->position = position;
	color.set(0, 255, 0, 255);
	direction = glm::vec2(0.0f, -1.0f);
}

void Zombie::update(vector<string>& levelData, vector<Human*>& humans, vector<Zombie*>& zombies)
{
	position += direction * speed;

	if (collideWithLevel(levelData)) {

		if (direction.y > 0) {
			direction = glm::vec2(0.0f, -1.0f);
		}
		else {

			direction = glm::vec2(0.0f, 1.0f);
		}
	}

}
#pragma once
#include <GL/glew.h>
using namespace std;
class Sprite
{
private:
	float x, y;
	float width, height;
	float vertexData;
	GLuint vboID;
public:
	Sprite();
	~Sprite();
	void init(float x, float y, float width, float height);
	void draw();
};


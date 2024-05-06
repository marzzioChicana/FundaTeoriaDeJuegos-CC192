#pragma once
#include <SDL/SDL.h>
#include<GL/eglew.h>
#include <iostream>
#include<vector>
#include <cmath>
#include<memory>
#include "Sprite.h"
#include "GLS_Program.h"
#include "Window.h"
using namespace std;

enum class GameState {

	PLAY, EXIT

};

class MainGame {

private:
	Sprite sprite;
	Uint32 initTime;
	bool spriteInitialized[20];
	Sprite sprites[20];
	int width;
	int height;
	Window* window;
	void init();
	void processInput();
	GLS_Program program;
	void initShaders();
	float time = 0;
	int cont = 1;
public:
	MainGame();
	~MainGame();
	GameState gameState;
	void run();
	void draw();
	void update();
	float randomCoordinated();
};

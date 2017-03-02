#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include<SFML\Graphics.hpp>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>

#include <Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

using namespace std;
using namespace sf;
using namespace glm;

class Game
{
public:
	Game(sf::Font font);
	Game(sf::ContextSettings settings);
	~Game();
	void run();
private:
	Window window;
	double offset1 = 0;
	double offset2 = 0;
	double offset3 = 0;
	double offset4 = 0;
	double offset5 = 0;

	double lives = 3;
	double blockSpeed = 0.01;

	sf::Font m_comicSans;
	sf::Text m_lives;

	bool isRunning = false;
	void initialize();
	void update();
	void renderCubes(mat4 &modelRef);
	void renderPlayer(mat4 &modelRef);
	void render(mat4 &modelRef);
	void unload();

};

#endif
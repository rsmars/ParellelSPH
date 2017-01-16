#pragma once
#include<gl/glut.h>
#include <string>
#include <unordered_map>

#include <glm.hpp>
class GLApp {
public:
	struct Settings {
		std::string windowName;
		int posX, posY;
		int sizeX, sizeY;
	};
	void Init(int argc, char **argv);
	void Run();
	GLApp(const Settings& settings) :m_param(settings) {};
	~GLApp() {};
protected:
	Settings m_param;
};
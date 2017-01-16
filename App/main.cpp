// rsmars@2017-1-16 15:35:26
// Main Entry
#include<iostream>
#include"GLApp.h"

using namespace std;

int main(int argc, char **argv)
{
	GLApp::Settings settings;

	settings.windowName = "Fluid Application";
	settings.posX = 100;	settings.posY = 100;
	settings.sizeX = 600;	settings.sizeY = 800;

	GLApp app(settings);
	app.Init(argc, argv);
	app.Run();
	return 0;
}
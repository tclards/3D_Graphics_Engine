#include "olcConsoleGameEngine.h"
using namespace std;

class olcEngine3D : public olcConsoleGameEngine
{
public:
	olcEngine3D()
	{
		m_sAppName = L"3D_Graphics_Engine";
	}

private:

public:
	bool OnUserCreate() override
	{

	}

	bool OnUserUpdate(float fElapsedTime) override
	{

		return true;
	}
};

int main()
{
	olcEngine3D graphicsEngine;
	if (graphicsEngine.ConstructConsole(256, 240, 4, 4))
	{
		graphicsEngine.Start();
	}
	return 0;
}
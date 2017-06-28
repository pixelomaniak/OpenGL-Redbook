#include "RenderSystem.h"

namespace byhj
{


void RenderSystem::v_InitInfo()
{
	windowInfo.title += "ch01-01-Triangle";
	glfwWindowHint(GLFW_SAMPLES, 4);
}

void RenderSystem::v_Init()
{
	m_Triangle.Init();
}

void RenderSystem::v_Render()
{
	static const glm::vec4 bgColor(0.2f, 0.4f, 0.5f, 1.0f);
	glClearBufferfv(GL_COLOR, 0, &bgColor[0]);

	m_Triangle.Render();
}

void RenderSystem::v_Shutdown()
{
	m_Triangle.Shutdown();
}

void RenderSystem::v_KeyCallback(GLFWwindow* Triangle, int key, int scancode, int action, int mode)
{
	App::v_KeyCallback(Triangle, key, scancode, action, mode);
	if (key == GLFW_KEY_E && action == GLFW_PRESS)
	{
		m_Triangle.SetAAEnabled(true);
		std::cout << "Enabled AA\n";
	}
	if (key == GLFW_KEY_D && action == GLFW_PRESS)
	{
		m_Triangle.SetAAEnabled(false);
		std::cout << "Disabled AA\n";
	}
}

}
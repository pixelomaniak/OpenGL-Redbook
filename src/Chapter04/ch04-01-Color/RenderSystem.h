#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

#include "ogl/App.h"
#include "triangle.h"

namespace byhj
{


class RenderSystem : public byhj::ogl::App
{
public:
	RenderSystem()  {}
	~RenderSystem() {}


public:
	void v_InitInfo() override;
	void v_Init()     override;
	void v_Render()   override;
	void v_Shutdown() override;
	virtual void v_KeyCallback(GLFWwindow* Triangle, int key, int scancode, int action, int mode) override;

private:

	byhj::Triangle m_Triangle;
};


}
#endif
#pragma once

#ifdef CL_PLATFORM_WINDOWS

extern Clover::Application* Clover::CreateApplication();

int main(int argc,char** argv)
{
	auto app = Clover::CreateApplication();
	app->Run();
	delete app;
}

#endif
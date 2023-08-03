#pragma once

#ifdef CL_PLATFORM_WINDOWS

extern Clover::Application* Clover::CreateApplication();

int main(int argc,char** argv)
{
	printf("Clover Engine");
	auto app = Clover::CreateApplication();
	app->Run();
	delete app;
}

#endif
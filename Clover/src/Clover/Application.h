#pragma once

#include "Core.h"

namespace Clover {
	class CLOVER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	/* To be defined in CLIENT */
	Application* CreateApplication();
}

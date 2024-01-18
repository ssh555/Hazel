#pragma once

#include "Core.h"

namespace Hazel
{
	// dll µ¼³ö
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

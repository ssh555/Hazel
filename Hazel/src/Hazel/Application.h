#pragma once

#include "Core.h"

namespace Hazel
{
	// dll ����
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

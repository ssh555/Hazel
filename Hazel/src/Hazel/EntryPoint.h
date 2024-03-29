#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	const char* str = "ssh";
	HZ_INFO("Hello, {0}!", str);
	
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#else
#error Hazel only supports Windows!

#endif
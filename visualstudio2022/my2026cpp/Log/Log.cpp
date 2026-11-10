#include "Log.h"

Log::Log()
{
}

Log::~Log()
{
}

void Log::SetLevel(int level)
{
	m_LogLevel = level;
}

void Log::Debug(const char* message)
{
	if (m_LogLevel <= LOG_LEVEL_DEBUG)
	{
		std::cout << "[DEBUG] " << message << std::endl;
	}
}
void Log::Info(const char* message)
{
	if (m_LogLevel <= LOG_LEVEL_INFO)
	{
		std::cout << "[INFO] " << message << std::endl;
	}
}
void Log::Warn(const char* message)
{
	if (m_LogLevel <= LOG_LEVEL_WARN)
	{
		std::cout << "[WARN] " << message << std::endl;
	}
}
void Log::Error(const char* message)
{
	if (m_LogLevel <= LOG_LEVEL_ERROR)
	{
		std::cout << "[ERROR] " << message << std::endl;
	}
}
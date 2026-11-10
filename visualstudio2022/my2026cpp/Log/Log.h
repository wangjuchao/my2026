#include "../common/header.h"

class Log
{
public:
	Log();
	~Log();

public:
	const int LOG_LEVEL_DEBUG = 0;
	const int LOG_LEVEL_INFO = 1;
	const int LOG_LEVEL_WARN = 2;
	const int LOG_LEVEL_ERROR = 3;

private:
	int m_LogLevel = LOG_LEVEL_INFO;

public:
	void SetLevel(int level);
	void Debug(const char* message);
	void Info(const char* message);
	void Warn(const char* message);
	void Error(const char* message);
};



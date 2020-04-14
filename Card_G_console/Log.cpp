#include "Log.h"


void Log::add(const string& entry)
{
	static int count = 1;
	entries.push_back(entry);
}

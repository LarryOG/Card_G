#pragma once
#include "Observer.h"
#include "Player.h"
#include <vector>
#include <string>

class Log 
{
public:
	string title;
	vector<string> entries{};

	explicit Log(const string& title) : title(title){}
	void add(const string& entry);

};


#pragma once
#include <vector>
#include "Screen.h"
using std::vector;


class Window_mgr{
public:
	using ScreenIndex = vector<Screen>::size_type;
	ScreenIndex addScreen(const Screen&);
	void clear(ScreenIndex);
private:
	vector<Screen> screens{ Screen(24,80, ' ') };
};




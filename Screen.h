#pragma once

#include <string>

using std::string;
using std::ostream;
using std::istream;



class Screen {
	friend class Window_mgr;
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {};
	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd) const;
	Screen &set(char c);
	Screen &set(pos r, pos col, char ch);
	Screen &move(pos r, pos c);
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os) const { do_display(os); return *this; }
private:
	void do_display(ostream &os) const { os << contents; }
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	


};


inline Screen &Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}


inline Screen &Screen::set(char c) {
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch) {
	contents[r*width + col] = ch;
	return *this;

}
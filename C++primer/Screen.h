#pragma once
#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>
#include"Window_mgr.h"
class Screen
{
	//friend class Window_mgr;
	friend void Window_mgr::clear(ScreenIndex i);
		
public:
	void some_member() const;
	typedef std::string::size_type pos;//using pos=std::string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
	char get() const { return contents[cursor]; }
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os)const
	{
		do_display(os);
		return *this;
	}
	Screen &clear(char =bkground );
private:
	mutable size_t access_ctr;
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os)const
	{
		os << contents;
	}
	static const char bkground;
};

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

inline Screen &Screen::move(pos r, pos c)
{
	pos row = r*width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c)const
{
	pos row = r*width;
	return contents[row + c];
}

void Screen::some_member()const
{
	++access_ctr;
	//access_ctr为mutable 可变数据成员，const函数也能改变它的值
}

















#endif // !SCREEN_H

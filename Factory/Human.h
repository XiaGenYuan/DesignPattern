#pragma once
enum HumanType {
	WHITE = 0,
	YELLOW = 1,
	BLACK = 2
};

class Human
{
public:
	Human();
	virtual ~Human();
	virtual void laugh() = 0;
	virtual void cry() = 0;
	virtual void talk() = 0;
};


#pragma once
enum HumanType {
	WHITE_FEMALE,
	WHITE_MALE,
	YELLOW_FEMALE,
	YELLOW_MALE,
	BLACK_FEMALE,
	BLACK_MALE
};
class Human
{
public:
	Human();
	virtual ~Human();
	virtual void laugh() = 0;
	virtual void cry() = 0;
	virtual void talk() = 0;
	virtual void sex() = 0;
};


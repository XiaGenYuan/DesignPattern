#pragma once
class Strategy
{
public:
	Strategy();
	virtual ~Strategy();
	virtual void operate() = 0;
};


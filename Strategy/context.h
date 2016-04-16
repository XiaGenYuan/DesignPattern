#pragma once
class Strategy;

class Context
{
public:
	Context();
	virtual ~Context();
	void SetStrategy(Strategy *strategy);
	void operate();

private:
	Strategy *strategy_;
};


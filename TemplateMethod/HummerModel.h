#pragma once
class HummerModel
{
public:
	HummerModel();
	virtual ~HummerModel();

protected:
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void alarm() = 0;
	virtual void engineBoom() = 0;

public:
	void run();
};


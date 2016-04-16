#pragma once
class Emperor
{
public:
	virtual ~Emperor();
	static Emperor *GetInstance();
	static void DeleteInstance();
	void EmperorInfo();

private:
	static Emperor *instance_;
	Emperor();
};


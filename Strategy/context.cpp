#include "context.h"
#include "strategy.h"


Context::Context()
{
	
}


Context::~Context()
{
}


void Context::SetStrategy(Strategy *strategy) {
	this->strategy_ = strategy;
}

void Context::operate() {
	this->strategy_->operate();
}
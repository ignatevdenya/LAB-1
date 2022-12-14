#pragma once
#include <fstream>
#include "factory.h"
#include "keeper.h"
using namespace std;
class Factory 
{
public:
	Factory();
	virtual ~Factory();
	virtual void setVal() = 0;
};


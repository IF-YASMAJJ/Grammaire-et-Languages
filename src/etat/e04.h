#ifndef E04_H
#define E04_H
#include "etat.h"

class E04 : public Etat
{
public:
	E04();
	virtual void transition(); //goNext()
	virtual ~E04(){}
};

#endif
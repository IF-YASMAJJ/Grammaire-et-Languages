#ifndef E02_H
#define E02_H
#include "etat.h"

class E02 : public Etat
{
public:
	E02();
	virtual void transition(Automate* automate);
	virtual void transition(Automate* automate, Symbole *s);
	virtual ~E02(){}
};

#endif

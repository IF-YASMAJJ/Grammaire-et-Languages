#include "e35.h"

#include "../Automate.h"
#include "../symbole/Symbole.h"
#include "e36.h"

E35::E35()
{

}

void E35::transition(Automate* automate)
{
	Symbole *s = automate->getNextLexer();
	switch(*s){
	case IDENTIFICATEUR:
        automate->decalage(s, new E36());
        break;
	}
}

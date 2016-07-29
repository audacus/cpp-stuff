#include "Man.h"

Man::Man(string name): Person(name, "man") {}

void Man::doSomething(string intro)
{
    cout << intro << this->getName() << endl;
}

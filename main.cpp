#include <iostream>
#include <Man.h>

using namespace std;

int main()
{
    Man hans("Hans");
    cout << Man() << " & " << hans << " are friends..." << endl << endl;
    hans.doSomething();
    return 0;
}

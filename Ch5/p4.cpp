//illustrates diff b/w call by value and call by ref parameter.
#include <iostream>

void do_stuff(int par1_value, int& par2_ref);
//par1_value is a call by value formal parameter and
//par 2_ref is a call by reference formal parameter.
int main()
{
    using namespace std;
    int n1, n2;

    n1 = 1;
    n2 = 2;
    do_stuff(n1, n2);//function call
    cout << "n1 after function call = " << n1 << endl;
    cout << "n2 after function call = " << n2 << endl;
    return 0;
}

void do_stuff(int par1_value, int& par2_ref)
{
    using namespace std;
    par1_value = 111;
    cout << "par1_value in function call = "
         << par1_value << endl;
    par2_ref = 222;
    cout << "par2_ref in function call = "
         << par2_ref << endl;
}

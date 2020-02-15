#include <iostream>
using namespace std;
void duplica(int *x) 
{
 *x = *x * 4;
}

int main() 
{
 int n = 5;
 cout<< "n vale "<<n;
 duplica(&n);
 cout<< "n vale "<<n;
 return 0;
}

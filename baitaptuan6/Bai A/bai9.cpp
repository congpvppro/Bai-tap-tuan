#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    srand(time(NULL));
    cout<<rand()%n;
}
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i =0;i<n;i++)
    {
        cin>>vec[i];
    }
    int min = vec[0];
    int max = vec[0];
    double sum = 0;
    for (int i = 0;i<n;i++)
    {
      sum+=vec[i];
      if (max<vec[i])
      {max=vec[i];}
      if (min>vec[i])
      {
        min = vec[i];
      }
    }
   cout<<sum/n<<endl;
   cout<<max<<endl;
   cout<<min;
}
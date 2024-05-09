#include <iostream>
#include <vector>
#include <string>
using namespace std;
void swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}
int pivotr(vector<double>& vec, int start, int end)
{
    int pivot = vec[end];
    int j = start - 1;
    for (int i = start; i < end;i++)
    {
        if (vec[i] < pivot)
        {
            j++;
            swap(vec[i], vec[j]);
        }
    }
    j++;
    swap(vec[end], vec[j]);
    return j;
}
void quicksort(vector<double>& vec, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = pivotr(vec, start, end);
    quicksort(vec, pivot + 1, end);
    quicksort(vec, start, pivot - 1);
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    bool already = true;
    vector <double> boy(n);
    vector<double> girl(n);
    for (int i = 0;i < n;i++)
    {
        string s;
        getline(cin, s);
        int j = 0;
        while (s[j] != ' ' && j < s.length())
        {
            j++;
        }
        boy[i] = stod(s.substr(0, j));
        girl[i] = stod(s.substr(j + 1));
        if (boy[i] < girl[i])
        {
            already = false;
        }

    }
    quicksort(boy, 0, n - 1);
    quicksort(girl, 0, n - 1);
    
    if (already)
    {
        cout << "yes";
    }
    else {
        already = true;
        for (int i = 0;i < n;i++)
        {
            if (boy[i] <= girl[i])
            {
                already = false;
            }
        }
        if (already)
        {
            cout << "yes";
        }
        else { cout << "no"; }
    }

}


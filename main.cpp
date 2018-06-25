#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string arr[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
    cin>>n;
    int p=0;
    while(n>(5*(int)pow(2,p))){
        n-=(5*(int)pow(2,p));
        p++;
    }
    int t=(int)((n-1)/(int)pow(2,p));
    cout<<arr[t]<<endl;
    return 0;
}

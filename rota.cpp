#include<bits/stdc++.h>

using namespace std;

int main()
{
    int d;
    int n;
    cin >> n;
    cin >> d;
    int a[n] = {0};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    d = d%n;
    int newarr[n] = {0};
    for(int i=d; i<n; i++){
        newarr[i-d] = a[i];
    }
    for(int i=n - d; i<n; i++){
        newarr[i] = a[i - n + d];
    }

    for(int i=0; i<n; i++){
        cout << newarr[i] << " ";
    }
    
}
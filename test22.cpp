#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int n,h;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i = 0;
    int day = 0;
    int count = 0;
    int new_height = 0;
    int new_goal = 0;
    for(int i=0; i<n; i++){
        day = (i-1)%n;
        new_height = arr[day];
        new_goal = h - ((i*(i+1))/2);
        if(new_height<new_goal){
            count = count+1;
        }
    }
    cout << count << endl;
}

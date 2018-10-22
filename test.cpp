#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h> 
using namespace std;


int main()
{
	
	int T;
	cin >> T;
	float x,y,k,j,v;
	int arr[T];
	for(int i=0; i<T; i++){
		cin >> x;
		cin >> y;
		if (y>= 0.75*x ){
			k = 0;
			//cout << k;
			arr[i] = k;
		}else if (y<0.75*x){
			k = (0.75*x-y)/0.25;
			
			//j = ceil(k);
			//cout << k;
			arr[i] = k;
		}
		
		
		
	}
	for(int i=0; i<T; i++){
		printf("%d\n", arr[i]);
	
}
}

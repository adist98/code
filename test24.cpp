#include <bits/stdc++.h>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,d;
	cin >> n;
	cin >> d;
	int arr[n];
	int temp;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	for(int j=0; j<d; j++){
		temp = arr[0];
		
		for(int l=1; l<n; l++){
			arr[l-1]=arr[l];
		}
		
		arr[n-1] = temp;
		
	}
	
	for(int k=0; k<n; k++){
		cout << arr[k] << " ";
	}
}

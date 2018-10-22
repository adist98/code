//spoj 
//feynman
//sum of squares = n(n+1)(2n+1)/6. apply the formula to get the answer. 
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
	int c;
	int sum = 0;
	while(c!=0){
		std::cin >> c;	
		sum = c*(c+1)*(2*c+1)/6;
		if (c!=0){
		
			cout << sum << endl;		
		}else{
			return 0;
		}
	}
	
}	 

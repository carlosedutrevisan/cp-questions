#include <bits/stdc++.h>
using namespace std;

int main(void){
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	for(int i = 0; i < str.size(); i++){
		if(str[i] != '+'){
			if(i != str.size() - 1){
				cout << str[i] << "+";
				} else cout << str[i];
			} 
		}
	return 0;
	}

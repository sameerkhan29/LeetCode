#include<iostream>
#include<string>
#include<vector>

using namespace std;

string LongestComPre(vector<string> s){
	int pref_length= s[0].size();
	string pref = s[0];

	for(int i =1 ;i < s.size() ;i++){

		while(pref_length > s[i].length() || s[i].substr(0,pref_length) != pref){
			pref_length--;
			if(pref_length == 0){
				return "";
			}
			pref = pref.substr(0,pref_length);
		}
	}
	return pref;
}

int main(){
	vector<string> a = {"sameer","samheer","samdeer"};
	cout<<LongestComPre(a);
	cout<<endl;
}

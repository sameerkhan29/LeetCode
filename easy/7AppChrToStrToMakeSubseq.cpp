#include<iostream>
#include<string>



using namespace std;

int appendChar(string s,string t){
	int sindex  = 0,tindex = 0;
	//First Character of both string
	int slength = s.size() , tlength = t.length();
	while(sindex < slength && tindex < tlength){
		if(s[sindex] == t[tindex]){
			tindex++;
		}
		sindex++;
	}
	return tlength - tindex;
}

int main(){
	cout<<appendChar("sameer","sarrrrrr");
}

#include<iostream>



using namespace std;

int scoreOfString(string s) {
        int i =0,j=0;
        int tot = 0;
        for(int k = 0;k < s.length()-1;k++){
            i = (int)s[k];
            j = (int)s[k+1];
            int ll = abs(i - j);
            tot+=ll;
        }
        return tot;
}


int main(){
	cout<<scoreOfString("hello")<<endl;
	cout<<scoreOfString("Khan")<<endl;
}

#include<iostream>

using namespace std;

bool isPalindrome(int x) {
        int  reverse = 0 ;
        int xcopy = x;
        while(x > 0){
            reverse = ((reverse * 10) + (x % 10));
            x /= 10;
        }
	//cout<<reverse<<endl;
        return (int)reverse == xcopy;
}

int main(){
	int k = 251;
	cout<<isPalindrome(k)<<endl;
	cout<<isPalindrome(121)<<endl;
}

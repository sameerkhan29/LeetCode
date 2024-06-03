#include<iostream>
#include<string>
#include<vector>
using namespace std;


void swap(char *a , char *b){
	char temp = *a;
	*a = *b;
	*b = temp;
}
void reverse(string &a){
	int i = 0;
	int j = a.size()-1;
	while(i < a.size()/2){
		swap(a[i],a[j]);
		i++;
		j--;
	}

}
int main(){
	string a = "sameer";
	reverse(a);
	cout<<a<<endl;
}

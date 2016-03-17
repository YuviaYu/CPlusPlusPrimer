#include <iostream>
using namespace std;
int main(){
	int sum1 = 0;
	for(int i=50; i<=100; i++){
		sum1 = sum1 + i;
	}
	cout<<"(FOR)Sum of 50 to 100 is "<<sum1<<endl;
	
	int i = 50,sum2 = 0;
	while(i<=100){
		sum2 = sum2 + i;
		i++;
	}
	cout<<"(WHILE)Sum of 50 to 100 is "<<sum2<<endl;
	for(int i=10; i>=0; i--){
		cout<<"(FOR) "<<i<<endl;
	}
	
	i = 10;
	while(i>=0){
		cout<<"(WHILE) "<<i<<endl;
		i--;
	}
}
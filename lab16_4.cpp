#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &num1,int &num2,int &num3,int &num4){
	int arr[4] = {num1, num2, num3, num4};

	for(int i = 0; i < 4; i++){
		int rng = rand()%4;
		int a = arr[i];
		arr[i]= arr[rng];
		arr[rng]= a;
	}
	
	num1 = arr[0]; num2 = arr[1]; num3 = arr[2]; num4 = arr[3];
}
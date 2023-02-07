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

void shuffle(int &a,int &b,int &c,int &d){
	int x;
	int n = rand()%4;
	int o[] = {a,b,c,d};
	for(int i=0;i<4;i++){
		x = o[i];
		o[i] = o[n];
		o[n] = x;
	}

	a = o[0];
	b = o[1];
	c = o[2];
	d = o[3];
}
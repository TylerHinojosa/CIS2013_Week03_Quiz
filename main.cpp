#include <iostream>
using namespace std;

int main(){
	
	for(int b=99; b>1; b--){
		cout << b << " bottles of beer on the wall," << endl;
		cout << "take one down and pass it around, " << endl;
		cout << b - 1 << " bottles of beer on the wall." << endl;		
	}

	cout << "No more bottles of beer on the wall, no more bottles of beer. " << endl;
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;
	
	return 0;
}

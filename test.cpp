#include <iostream>

using namespace std;

int quick_math(int a, int b){
	return a + b;
}

int main(){
	int a = 2;
	int b = 3;
	cout << a * b << '\n';
	cout << quick_math(a, b) << endl;

}

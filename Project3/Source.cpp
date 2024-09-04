#include<iostream>

using namespace std;
int Sum(int a, int b) {
	return a + b;
}
int Sum(int a, int b, int c) {
	return a + b + c;
}
int main() {
	cout << "Hello world!";
	cout << Sum(5, 5);
}
#include <iostream>

using namespace std;

namespace myNS1 {int n =10}
namespace myNS2 {int n =20}
int n = 30;

int main(int argc, char* atgv[]) {
	int n = 40;

	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << endl;
	cout << n << endl;

	float myFloat = 3.114f;


}
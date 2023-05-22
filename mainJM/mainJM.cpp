#include <iostream>
#include <string>
#include "jantung.h"
#include "manusia.h"
using namespace std;


int main() {
	manusia* varManusia = new manusia("Jono");
	delete varManusia;
	return 0;
}
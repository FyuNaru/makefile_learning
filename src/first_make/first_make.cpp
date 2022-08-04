#include <iostream>
#include <thread>
#include "xdata.h"

using namespace std;

void thread_main(){
	cout << "this is a thread" << endl;
}

int main(int argc, char * argv[]){
	thread th(thread_main);
	cout << "hello" << endl;
	th.join();
	Xdata x;
	return 0;
}

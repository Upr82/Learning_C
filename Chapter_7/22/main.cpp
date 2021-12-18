#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
 using namespace std;
 long long sam = LLONG_MAX;
 unsigned long long sue = sam;
 cout << "Sam has " << sam << "dollars and Sue has " << sue;
 cout << " dollars deposited." << endl;
 cout << "Add 1$ to each account." << endl;
 sam = sam + 1;
 sue = sue + 1;
 cout << "Sam has " << sam << " dollars an Sue has " << sue;
 cout << " dollars deposited.\nPoor Sam!" << endl;
 sam = ZERO;
 sue = ZERO;
 cout << "Take 1$ from each account.\nNow,";
 sam = sam - 1;
 sue = sue - 1;
 cout << " Sam has " << sam << " dollars deposited and Sue has " << sue;
 cout << " dollars deposited.\nLucky Sue!" << endl;
 return 0;
}

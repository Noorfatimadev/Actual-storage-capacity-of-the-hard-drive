#include <iostream>

using namespace std;

int main()
{
    double x, actualSize;
    
    cout << "Please enter the size of the Hard drive: ";
    cin >> x;
   actualSize = (x * 1000000000) / (1024 * 1024 * 1024);
          
    
    cout << "The actual size of the hard drive is: " << harddriveRealSize << "GB" << endl;
    
    return 0;
}


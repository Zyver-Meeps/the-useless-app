/* The useless app */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Are you sure u want to do this?" << endl;

    system("shutdown -P now"); // For Linux.
    system("c:\\windows\\system32\\shutdown /i"); // For Windows

    return 0;
}

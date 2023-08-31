// Hello world app
//

#include <stdio.h>
#include <iostream>

using std::cout;
int main()
{

    cout << "Hello World \n";

    cout << "gcc " << __GNUC__ << '.' 
    << __GNUC_MINOR__ << '.' << __GNUC_PATCHLEVEL__ << '\n';

    cout << "c++ " << __cplusplus << '\n';
    
    return 0;

}

While Loop
#include "stdafx.h"
#include <iostream>
#include "Windows.h"

using namespace std;

int main()
{
    // Local variable
    int Variable = 0;

    // while loop 
    while (Variable < 10) {
        cout << "value of Variable is: " << Variable << endl;
        Variable++;
    }

    system("PAUSE");
    return 0;
}


For Loop
#include "stdafx.h"
#include <iostream>
#include "Windows.h"

using namespace std;

int main()
{

    for (int Variable = 0; Variable < 10; Variable = Variable + 1) {
        cout << "value of Variable is: " << Variable << endl;
    }


    system("PAUSE");
    return 0;
}
Do While
#include "stdafx.h"
#include <iostream>
#include "Windows.h"

using namespace std;

int main()
{

    int Variable = 10;

    // do loop 
    do {
        cout << "value of a: " << Variable << endl;
        Variable = Variable + 1;
    } while (Variable < 20);


    system("PAUSE");
    return 0;
}



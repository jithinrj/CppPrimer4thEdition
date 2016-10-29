#include "myscreen.h"
#include <iostream>

int main()
{
    Screen s1;
    s1.move(1,1).set('#').display(std::cout);

    return 0;
}

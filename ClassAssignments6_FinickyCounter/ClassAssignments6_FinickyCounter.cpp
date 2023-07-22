#include <iostream>

int main()
{
    int count = 0;


    while (true) {
        count += 1;

        //end loop if count = 10
        if (count > 10) {
            break;
        }
        //if count = 5, skip it (continue)
        if (count == 5) {
            std::cout << "\n";
            continue;                   //continue tells program to jump to start of loop. as 4 is stored in "count" at this point, the loop starts over at 4.
        }
        std::cout << count<<"\n";
    }
    return 0;
}
#include "termfuncs.h"
#include "puzzle.h"
#include <cstdlib>

int main()
{
    Puzzle p;

    screen_clear();
    screen_home();
    p.print();

    char c;
    while (!p.won)
    {
        do
        {
            c = getachar();
        } while (!p.move(c));
        screen_clear();
        screen_home();
        p.print();
    }

    screen_clear();
    screen_home();
    cout << "Congrats!" << endl;
    return EXIT_SUCCESS;
}

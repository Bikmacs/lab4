#include <iostream>
#include<stdio.h>
#include<cmath>

// #define x (6t2-(ctgz+1)/y2)
// #define y 2
// #define z 4
// #define t sin(2+z)
// #define ctg_z (cos(4) / sin(4))
// #define x 6*pow(t,2)-(ctg_z+1)/y*pow(2,y)
//
// int main() {
//
//     printf("%f\n",x);
//     return 0;
// }


// #define x -2.75
// #define y -1.42
// #define wf(x,y) 1/(x*pow(x+y, 2))
// #define z wf(x,y)
// #define f(x,y,z) pow(cos(z), 2) + pow(abs(x), 3) + pow(y,2)
// #define b f(x,y,z)
//
// int main() {
//     printf("%f\n", b);
//     return 0;
// }


int main() {
        int a;
        std::cout << "Значение альфы ";
        std::cin >> a;
        const double y = sin(M_PI / 2 + 3 * a) / (1 - sin(3 * a - M_PI/2));

        std::cout << y << std::endl;
        return 0;
}

//the original design of union intention is to efficiently reuse memory, allowing the same piece of memory to be interpreted as different data types in different scenarios.
#include <iostream>
using namespace std;
union Data {
    int i;
    float f;
};
/*
int main() {
    Data data;

    data.i = 10;
    cout << "data.i : " << data.i << std::endl;
    cout << "data.f : " << data.f << std::endl;
    //This operation can be completed, but the output is messy,the output of this is 1.4013e-044.
    //Maybe it can be use with menu.

    data.f = 220.5;
    cout << "data.f : " << data.f << std::endl;

    return 0;
}
*/
enum color{
	A,B,C,D,E,F,G,H,I,J,K,L,M,N
};
union Data2{
    int i;
    color j;
};
int main() {
    Data2 data;

    data.i = 10;
    cout << "data.i : " << data.i << std::endl;
    cout << "data.color : " <<( data.j==J )<<" "<<(data.j==K )<< std::endl;
}


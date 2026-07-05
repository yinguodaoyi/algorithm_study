//struct is a combination of member elements
#include <iostream>
using namespace std;
struct Data {
    int i;
    float f;
};

int main() {
    Data data;

    data.i = 10;
    cout << "data.i : " << data.i << std::endl;
    cout << "data.f : " << data.f << std::endl;
    data.f = 220.5;
    cout << "data.f : " << data.f << std::endl;

    return 0;
}

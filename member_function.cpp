#include <iostream>
#include <boost/signals2.hpp>
#include <boost/bind.hpp>


boost::signals2::signal<void (float, float)> sig;


class MyClass {
public:
    MyClass() {
        sig.connect(boost::bind(&MyClass::print_args, this, _1, _2, 10));
    }
    void print_args(float x, float y, int z) {
        std::cout << "The arguments are " << x << " and " << y << " and " << z << std::endl;
    }
};


int main() {
    MyClass m;

    sig(5., 3.);
    return 0;
}

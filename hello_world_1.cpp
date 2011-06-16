#include <iostream>
#include <boost/signals2.hpp>
using namespace std;
using namespace boost::signals2;

struct Hello {
    void operator()() const {
        std::cout << "Hello";
    }
};


struct World {
    void operator()() const {
        std::cout << ", World!" << std::endl;
    }
};


int main() {
    // Signal with no arguments and a void return value
    boost::signals2::signal<void ()> sig;

    // Connect a HelloWorld slot
    Hello hello;
    World world;
    sig.connect(hello);
    sig.connect(world);

    // Call all of the slots
    sig();
    return 0;
}

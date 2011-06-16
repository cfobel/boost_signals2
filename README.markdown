Introduction
------------

Here are some examples taken from the boost::signals2 tutorial at: [http://www.boost.org/doc/libs/1_46_1/doc/html/signals2/tutorial.html]


`hello_world_0.cpp`
-------------------

Demonstrates connecting a `struct` with the `()` operator overloaded.  The signal signature has no arguments (i.e., `void(void)`).


`hello_world_1.cpp`
-------------------

Demonstrates connecting multiple `struct` objects with the `()` operator overloaded.  The signal signature has no arguments (i.e., `void(void)`).


`args.cpp`
-------------------

Demonstrates connecting several `void(float, float)` functions to a signal.

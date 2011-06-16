Introduction
============

Here are some examples taken from the boost::signals2 tutorial at: [http://www.boost.org/doc/libs/1_46_1/doc/html/signals2/tutorial.html]


`hello_world_0.cpp`
-------------------

Demonstrates connecting a `struct` with the `()` operator overloaded.  The signal signature has no arguments (i.e., `void(void)`).


`hello_world_1.cpp`
-------------------

Demonstrates connecting multiple `struct` objects with the `()` operator overloaded.  The signal signature has no arguments (i.e., `void(void)`).


`signal_args.cpp`
-------------------

Demonstrates connecting several `void(float, float)` functions to a signal.


Recommended reading
===================

Here are some resources regarding `boost::signals` and `boost::signals2`:
    -Performance comparison of [Boost signals (1.36.0) vs. sigc++ (2.0.18)](http://silvermace.com/2008/08/boost-signals-1360-vs-sigc-2018/)
    -[Switching from sigc++ to boost::signals2](http://ardour.org/development/signals)

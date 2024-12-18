/*
The diamond problem occurs when two superclasses of a class have a common base class.
    For example, the copier class gets two copies of all attributes of PoweredDevice class, this causes ambiguities.

To solve the ambigiuty, c++ offers virtual keyword
    1: You define both Scanner and printer to be: virtual public PoweredDevice
    2: Default constructor will only be called in PoweredDevice

    In general if class can be visible from more than direction, use virtual public CLASS not just public CLASS

Generally speaking, avoiding multiple inheritance is highly recommended. Otherwise, strongly defend your choices
    Most of the time you really don't need it. It causes a lot of problems.
    Stick to tree structure
    Better idea to depend on Interfaces (later)


Further readings: What is Diamond Problem
    https://www.geeksforgeeks.org/multiple-inheritance-in-c/
    https://www.freecodecamp.org/news/multiple-inheritance-in-c-and-the-diamond-problem-7c12a9ddbbec/

*/
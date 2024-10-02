## OO Programming Paradigm

- OOP `Concepts`: very `centralized` around `object` concepts.
- `class`: single entity
- `object`: instance from class
- `encapsulation`: encapsulate data & function members within single capsule
- `data-hidding`: access modifiers (private/public)
- `abstraction`: hidden unwanted details through serveral forms.

  - setters & getters
  - header files (WHAT & HOW)

- next

- `inheritance`
- `polymorphism`
- `operator overloading`: Not OOP concept but makes code good.

- OO `Principles`
  - we met some of them in homework
  - SRP/open-closed principle
  - DRY, YAGNI
- `Design Patterns`
  - the best practices for some reptitive design sub-tasks (we met singleton & iterator)
- OOA , OOD, OOP

---

### C++ classes features

- `constructor`
  - think in adequate set of constructors
  - Avoid default initialization
  - use initializer list
  - constructors called based on class data members args orders NOT member list initializtion order
- `Destructor`
  - when object goes out of scope
  - critical for deallocating memory
- Destructor called in the reverse order for constructions

  - but static objects are there in reverse order after all normal objects

- Remember class by default has own normal(default) construtor, copy constructor, operator overloading constrctor.
- `copy constructor`
  - very careful with internal pointers
  - shallow copy vs Deep copy
- Be careful about memory leaks
  - Remember who creates`new` a pointer should delete it
    - inside class, use destructor
    - Outside class, delete it in right location
  - Set with `nullptr` after `delete`
  - Be carefull from `Dangling pointers` (delete twice) = RTE
- create as much as `const function`: least privilege principle
- const member variables

  - must be init in definition or using initializer list / Avoid them
  - in function parameters use as possible:const someclass &name
    - saves time & memory + share intension: that shouldn't be changed
  - static variables
    - Declared once - in memory till program ends / share among different access to its block
  - static functions
    - shared amon all objects / can't access non-static data members

- Friend class: can access my private data based on my permission
  - one usage scebario: White box testing
- friend member function: only access my private section / others can't
- Friend global function: can access my private section

---

#### Misc

- Temporary objects: an object that doesn't have a name .think as a (visitor must enter to const and reference room)
  - Main Rule: cann't be bound to a non-const reference
- Good class is responsible for one concern (SRP)
  - JUST One REASON to change it
  - (WRONG) An email service class with retrial, logging, caching features = 4 reasons
- Avoid duplication (DRY)
  - Move to common functions
  - Use templates
- Use context to decide relevant features
- Use availiable functionalilties (e.g. STL/use Date class,...)
- Use Open source code but with caution
  - Do we need to wrap it? maintenance ? Bug fixing
- If a feature has getters/ setters, use them
  - avoid using the data section directly (remember time class 2 representions)
- correctness: verify your parameters, but don't duplicate code
  - E.g. a constructor call a setters that verifies
- Delegation: give another object/function the task to do it if he can (give the bread to baker)
- Proper testing to discover bugs! create blackBox testers
- For a clean and maintainable code, avoid local variabl names with same as data members
- Singleton Design patterns: Private constructor + static function to get static instance
- Iterator Design pattern: hasNExt / GetNext / Reset Iterator

- When coding: Do printing in all constructors / Destructors
- Prevent Copy constructor and assignment operator
  - The purpose here just to catch the code that calls them and you don’t notice
  - But you support them later if needed
  - You can move the copy constructor to private. Easier in C++11 use following lines:
    - User(const User&) = delete;
    - void operator=(const User&) = delete;
    - This one doesn’t allow assigning: e.g. y = xObj

### Practice makes Perfect

- I hope by the end of this unit you realize how hard to build a proper design and follow the best practice for developing

- skill: takes time -> practice + gradual

---

### `Building OO Projects`

- `understand` the `requirements` very well
  - undertanding the problem Is half the solution
- Think `MVP`(minimum viable product): by doing Major/ Mandatory system use cases or requiremnts
- Identify `Key Objects`
  - A parking lot: vehicles, parking spots, parking garages, entrances, exits, garage operators
- Identify `object operations`
  - E.g. car should be able to move, park in a given slot, and hold a license plate.
- Identify `Relationships` between objects
  - E.g. car should be able to park in a parking spot
  - Parking garages should be able to fit multiple parking spots
  -

##### GRUD Operations

- `C`REATE , `R`ead, `U`pdate and `D`elete
- these are the 4 basics functions of persistent storage
- similar one in user-interfaces (e.g. view, search and modifying information)
- Let's say we have a book manager
  - then we need model functionalilites; create/load/update/delete a book
  - Also admin needs these 4 functionalilites
- So Always think when you should provide CRUD

#### strcturing the code

- Try to structure your code such that
  - Model: for database/business logic
    - E.g. User and UserManager Classes
    - Don’t do printing here (View)
- View: What you print on the console
  - Don’t do logic here
  - Ask UserManager to get/update things for you
- Now this separates viewing code from logic code
  - This makes code less coupling / Easy dev
- It is close idea to MVC architectural pattern
  - Future readings: reading reading reading reading
- In practice: Complex Projects give people hard time

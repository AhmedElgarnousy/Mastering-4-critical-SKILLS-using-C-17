## Move Semantic and Perfect Forwarding

- Section goal: To `speed` the processing by `avoid` extra `copies`.
- Next section dependencies
  - Minor on std::move
- overloaded concepts.

  - Iterative learning
  - Extra Readings.

#### Lvalue and Prvalue

- Classify Expressions
  - Every var name is lvalue
  - Every literal is a temp value
- simple `rule`(informal but for easier understanding)

  - Do you have a `name`?
    - `Yes`, so it lvalue`(e.g. salary)`
      - It has identifiable address/identity
    - `No`, it is rvalue `(e.g. 100, 2\*a+b)`
      - temporary
      - No identifiable address
      - it might be destoryed after the expression

- till now prvalue = rvalue

- `rule`
- if you are return

  - by value, so it prvalue
  - by reference, so it lvalue reference

- note: Same expression on primaitives might be different from operator overloading for objects

```cpp
// example
- a * 4 = j; // CE for primitives
// but By operators overloading it could be lvalue and compiles.
```

- `*(astric or dereference) vs &`
  - `*` operator converts prvalue to lvalue
  - `&` operator converts lvalue to prvalue

```cpp
// int *a = 10; // CE 10 is prvalue

/* The only literal expression is c string literals, as they are arrays*/
char * str = "ahmed"; // because "ahmed" is an array

// string &ref2 = "ahmed"; // CE cannot bind non-const lvalue to an prvalue.

const string &ref2 = "ahmed"; //we can assign lvalue or prvalue to const lvalue reference.
```

#### Rvalue Reference

-
- variable type != value category

- we match func implementation with with function call based on value category not value type

#### Move Semantics

- whenever you have a class that wraps a pointer it creates.
  - You must:
    - Provide copy constructor
    - Provide assignment operator
    - Provide destructor
  - For efficiency you should
    - Provide move constructor
    - Provide move assignment operator
- STL is now supporting move semantics. Provide them
- I tried to code move semantics but i don't even see copy constructor calls?
  - Due to Return Value Optimization (RVO)
    - It only about the returned values NOT passing arguments.

#### std::move

#### xvalue

![xvalue](/01_Move_semantics/more_reading/xvalue.png)

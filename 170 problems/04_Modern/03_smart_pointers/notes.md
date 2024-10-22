## Smart Pointers

### A nightmare - Raw Pointers

**issues**

- c++ pointers
  - direct management for your memory: Allocate/Deallocate
  - very strong, but very dangerous!
- Critical Issues
  - Uninitialized memory
  - memory leaks
  - Dangling pointers
- `Rule`: Who creates memory deletes it.
  - inside class: use destructor
  - outside class: free it by yourself
  - still problematic: what if a function returns a pointer? Exception?
  - More Lines to manage the memory.

###### **smart pointers**

- languages like java, c# , python has Garbage `collector mechanism`.
  - so programmers completely don't care about memory leaks & dangling pointers.
- Modern C++ tries to reduce this pain through `smart pointers`.
  - provide automatic memory management.
    - Is pointer not in use(out of scope)? `Auto` delete it.
  - You create but you don't delete.
  - Alot of debates for future readings
- `3 Types` of smart pointers:

  - `Shared` pointers [c++11]
  - `weak` pointers [c++11]
  - `unique` pointers [c++14-double check your compiler]
  - Auto pointers [Removed in c++17]

- A smart pointer is NOT a pointer, it an object has a pointer data member.
- `Usage`: close to the raw pointers. `*` , `->`

##### unique pointers

```cpp
class unique_ptr {
    private:
        int * data;
    ~unique_ptr(){
        // destroy data
    }
}
```

- `Unique`
  - `ONE` owner for what it points to (e.g. internal iny\* data)
  - `No` other smart pointers can point to its internal data
    - It can't be assigned or copied
      - No implicit constructor
      - No Copy constructor
      - No operator =
    - But alias allowed still ONE owner
- Implemented in an efficient way: use as much as possible.
- when object goes out of scope: Destructor called
  - Properly clean the raw data
  - This techique is called Resource Acquistion Is Initialization(`RAII`).
- Implement this with some basic functionality.

---

##### shared pointers

##### week pointers

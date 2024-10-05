## Exceptions

- Exceptions is a common way for handling RTE
- another common way : error codes

- lib: #include <stdexcept>

-

#### STL Exceptions Hierarchy

- `exception`: An exception and parent class of all the standard c++ exceptions.
- `bad_alloc`: this can be throw by `new`.
- `bad_cast`: This can be thrown by `dynamic_cast`.
- `bad_exception`: This is useful device to handle unexcepted exceptions in a c++ program.
- `bad_typeid`: This can be thrown by `typeid`.
- `logic_error`: An exception that theorettically can be detected by reading the code.
  - `domain_error`: This is an exception thrown when a mathematically invalid domain is used.
  - `invalid_argument`: This is thrown due to invalid arguments
  - `length_error`: This is thrown when a too big string is created.
  - `out_of_range`: This can be thrown by the `at` method, for example a vector and bitset<>::operator[]().
- `runtime_error`: An exception that theoretically cann' t detected by reading the code.
  - `overflow_error`: This is thrown if a mathematical overflow occurs.
  - `range_error`: This is occured when you try to store a value which is ouy_of_range
  - `underflow_error`: This is thrown if a mathematical underflow occurs.

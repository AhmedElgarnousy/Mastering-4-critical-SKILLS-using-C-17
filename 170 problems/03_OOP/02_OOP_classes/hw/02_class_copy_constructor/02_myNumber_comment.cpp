/*
// Answer
The first destructor to execute would delete the dynamically allocated memory,
and the other object’s ptr would point to memory that’s no longer allocated, a situation called a dangling pointer.
This would likely result in a serious runtime error (such as early program termination) when the pointer was used.

*/
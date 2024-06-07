# Requirements and dependencies:
cmake_minimum_required(VERSION 3.27.0)
project(STL)

set(source_dir
  "${CMAKE_SOURCE_DIR}/.")

add_executable(
  2D_vector
  ${source_dir}/2D_vector.cpp
)
add_executable(
  3D_vector
  ${source_dir}/3D_vector.cpp
)
add_executable(
  Deque
  ${source_dir}/Deque.cpp
)
add_executable(
  iterator
  ${source_dir}/iterator.cpp
)
add_executable(
  multiSet
  ${source_dir}/multiSet.cpp
)
add_executable(
  pair
  ${source_dir}/pair.cpp
)
add_executable(
  priority_queue
  ${source_dir}/priority_queue.cpp
)
add_executable(
  Queue
  ${source_dir}/Queue.cpp
)
add_executable(
  Range_based_For
  ${source_dir}/Range_based_For.cpp
)
add_executable(
  Sett
  ${source_dir}/Set.cpp
)
add_executable(
  stack
  ${source_dir}/stack.cpp
)
add_executable(
  string_cpp
  ${source_dir}/string_cpp.cpp
)
add_executable(
  tuple
  ${source_dir}/tuple.cpp
)
add_executable(
  unorderedSet
  ${source_dir}/unorderedSet.cpp
)
add_executable(
  vector
  ${source_dir}/vector.cpp
)

# add_executable(
#   iterator
#   ${source_dir}/iterator.cpp
# )

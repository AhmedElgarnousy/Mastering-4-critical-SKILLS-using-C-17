# Requirements and dependencies:
cmake_minimum_required(VERSION 3.27.0)
project(files_streams)

set(source_dir
  "${CMAKE_SOURCE_DIR}/.")

add_executable(
  files_streams1
  ${source_dir}/Files_Streams1.cpp
)

add_executable(
  files_streams2
  ${source_dir}/Files_Streams2.cpp
)

add_executable(
  sstreams
  ${source_dir}/sstreams.cpp
)



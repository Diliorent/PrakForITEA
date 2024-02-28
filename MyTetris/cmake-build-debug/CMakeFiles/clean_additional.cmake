# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MyTetris_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MyTetris_autogen.dir\\ParseCache.txt"
  "MyTetris_autogen"
  )
endif()

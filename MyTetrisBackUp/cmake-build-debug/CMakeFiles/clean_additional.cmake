# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\scgsdf_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\scgsdf_autogen.dir\\ParseCache.txt"
  "scgsdf_autogen"
  )
endif()

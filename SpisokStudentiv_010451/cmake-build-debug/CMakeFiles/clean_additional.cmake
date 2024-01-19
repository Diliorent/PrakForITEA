# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SpisokStudentiv_010451_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SpisokStudentiv_010451_autogen.dir\\ParseCache.txt"
  "SpisokStudentiv_010451_autogen"
  )
endif()

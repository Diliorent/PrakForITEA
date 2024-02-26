# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "010423_AnalogClock_autogen"
  "CMakeFiles\\010423_AnalogClock_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\010423_AnalogClock_autogen.dir\\ParseCache.txt"
  )
endif()

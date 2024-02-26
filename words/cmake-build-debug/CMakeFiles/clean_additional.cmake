# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\words_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\words_autogen.dir\\ParseCache.txt"
  "words_autogen"
  )
endif()

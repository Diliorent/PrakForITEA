# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RockPaperScissorsGame_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RockPaperScissorsGame_autogen.dir\\ParseCache.txt"
  "RockPaperScissorsGame_autogen"
  )
endif()

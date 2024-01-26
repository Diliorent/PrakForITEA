# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ChitannyaZTextovogoPolya_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ChitannyaZTextovogoPolya_autogen.dir\\ParseCache.txt"
  "ChitannyaZTextovogoPolya_autogen"
  )
endif()

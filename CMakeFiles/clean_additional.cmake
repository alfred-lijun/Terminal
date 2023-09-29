# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Terminal_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Terminal_autogen.dir\\ParseCache.txt"
  "Terminal_autogen"
  )
endif()

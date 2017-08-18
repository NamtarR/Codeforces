project(problems)

set(HEADER_FILES problem1.h)
set(SOURCE_FILES problem1.cpp)

add_library(problems STATIC ${SOURCE_FILES} ${HEADER_FILES})
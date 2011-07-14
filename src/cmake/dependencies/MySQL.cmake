set(MySQL_FIND_QUIETLY TRUE)

find_package(MySQL)

boost_external_report(MySQL INCLUDE_DIR LIBRARIES)

# TODO: find a better way to have SOCI follow the "buried headers" policy for MySQL
add_definitions(-DSOCI_MYSQL_HEADERS_BURIED=1)

#if(MYSQL_FOUND)
#  include_directories(${MYSQL_INCLUDE_DIR})
#  add_definitions(-DHAVE_MYSQL)
#endif()

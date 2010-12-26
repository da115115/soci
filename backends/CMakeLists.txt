message(STATUS "")
colormsg(_HIBLUE_ "Configuring SOCI database backends:")

##############################################################
# TODO: Scan and add directories automatically --mloskot
set ( _SUBDIRS_ empty mysql odbc oracle postgresql sqlite3 )

foreach ( subd ${_SUBDIRS_} )
  add_subdirectory( ${subd} )
endforeach ()


message(STATUS "")

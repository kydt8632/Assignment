add_library (lib
  Vectors.h
  Vectors.cpp
  )

install (TARGETS lib DESTINATION bin)
install (FILES Vectors.h DESTINATION include)

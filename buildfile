libs =
#import libs += libhello%lib{hello}

./: exe{myapp} doc{README.md} manifest

exe{myapp}: {hxx ixx txx cxx}{**} $libs testscript

cxx.poptions =+ "-I$out_root" "-I$src_root"

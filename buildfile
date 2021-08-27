libs =
import libs += libboost-array%lib{boost_array} \
               libboost-variant2%lib{boost_variant2} \
               libboost-chrono%lib{boost_chrono} \
               libboost-container%lib{boost_container} \
               fmt%lib{fmt}

./: exe{myapp} doc{README.md} manifest

exe{myapp}: {hxx ixx txx cxx}{**} $libs testscript

cxx.poptions =+ "-I$out_root" "-I$src_root"

#include <iostream>
#include <string>

#include <boost/array.hpp>
#include <boost/variant2/variant.hpp>
#include <boost/chrono.hpp>
#include <boost/container/flat_map.hpp>
#include <fmt/core.h>

struct kikoo {};

int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name" << endl;
    return 1;
  }

  boost::array<int, 42> values;
  boost::variant2::variant<int, kikoo> value;

  const auto now = boost::chrono::high_resolution_clock::now();

  boost::container::flat_map<std::string, kikoo> my_map;

  fmt::print("Hello, {}!\n", argv[1]);
}

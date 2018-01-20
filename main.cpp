#include <iostream>
#include <boost/program_options.hpp>

using namespace std;

int main()
{
    boost::program_options::options_description desc("ololosh");
    desc.add_options()
    ("Help", "Show help");
    return 0;
}

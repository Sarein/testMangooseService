#include <iostream>
#include <boost/program_options.hpp>

using namespace std;

int main(int argc, char* args[])
{
    boost::program_options::options_description desc("Mongoose server");
    desc.add_options()
    ("Help", "Show help");

    boost::program_options::variables_map vm;
    boost::program_options::store(boost::program_options::parse_command_line(argc, args, desc), vm);
    boost::program_options::notify(vm);

    if(vm.count("Help"))
    {
        std::cout << desc << std::endl;
        return 1;
    }
    return 0;
}

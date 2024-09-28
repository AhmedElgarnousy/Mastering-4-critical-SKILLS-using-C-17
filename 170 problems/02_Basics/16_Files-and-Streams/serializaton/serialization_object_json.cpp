#include <iostream>


using namespace std;
using namespace restc_cpp;

// Our configuration object
struct Config {
    int max_something = {};
    string name;
    string url;
};

// Declare Config to boost::fusion, so we can serialize it
BOOST_FUSION_ADAPT_STRUCT(
    Config,
    (int, max_something)
    (string, name)
    (string, url)
)

main() {

    // Instatiate the config object
    Config config;

    {
        // Create an istream for the json file
        ifstream ifs("config.json");

        // Read the config file into the config object.
        SerializeFromJson(config, ifs);
    }

    // Do something with config...

    {
        // Create an ostream for the json file
        ofstream ofs("config.json");

        // Serialize Config to the file
        SerializeToJson(config, ofs);
    }
}
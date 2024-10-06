#include <iostream>
#include "json/json.hpp"

/*
funtion name: Description
json_escape: added escape character `\` to the string that contain special character such `\n`.
*/

using namespace std;
int main()
{
    /*
    string test_str = "ahmed\tis";
    cout << "output without lib: " << test_str << "\n";
    cout << "output with lib: " << json::json_escape(test_str) << "\n";
    */
    json::JSON jsonObject;
    // create a new array as a field of an object
    jsonObject["f1_array"] = json::Array(true, "two", 3, 4.0);
    // create a new array as a field of an object
    jsonObject["f2_array"] = json::Array(false, "three", 30, 4.3);

    // create a new object as a field of another object
    jsonObject["f3_object"] = json::Object();
    // Assign to one of the inner object's fields
    jsonObject["f2_object"]["inner1"] = "Inside field of object";
    // we don't need to specify the type of the Json Object
    jsonObject["new"]["some"]["deep"]["key"] = "value";

    jsonObject["arrayy2"].append(false, "three");
    // cout << jsonObject << "\n";

    json::JSON obj2;
    obj2["parsed"] = json::JSON::Load("[ { \"key\" : \"value\"}, false]");
    cout << obj2 << "\n";

    return 0;
}
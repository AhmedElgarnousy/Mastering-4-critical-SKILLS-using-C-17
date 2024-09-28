#include <iostream>
#include<vector>
using namespace std;


//  data hiding also reduces system complexity
// increase code readablility
class Result 
{
    // LInk, short, summary, Rank

};
class Setting
{
    // E.g. start-End Date + TYpe (text/image/video)

};
class Google 
{
    private:
        /**
         * Huge amount of internal data & methods
         * Huge amount of internal used classes
         * 
         * User don't need to know about them
         * User shouldn't access them!
         */

    public:
    vector<Result>search(string query, Setting setting){
        return vector<Result>();
    }

};

int main()
{
    // User care with WHAT not HOW (and its details)
    Google engine;
    vector<Result> results = engine.search("REsources for oop", Setting());

    return 0;
}
#include <string>
#include <boost/regex.hpp>


bool is_comment(const std::string& s)
{
   static const boost::regex e("[\\s\\w]*\\/\\/.*$");
   return boost::regex_match(s, e);
}


#include <iostream>
using namespace std;

int main()
{
        string c("//comment");
        cout << is_comment(c) << endl;

   return 0;
}

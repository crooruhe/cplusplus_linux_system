// ruhe wk 6 linuxsys
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream myfile ("/proc/uptime");
  if (myfile.is_open())
  {
        cout << "--------------Total & Up Time: ";        //reads each line and prints out contents
    while ( getline (myfile,line) )
    {

      cout << line << '\n';
    }
    myfile.close();
  }

else cout << "unable to open file";

  ifstream myfile1 ("/proc/sys/kernel/hostname");
if (myfile1.is_open())
{
        cout << "--------------Hostname: ";
while( getline (myfile1, line) ) //reads each line and prints out contents
{
        cout << line << '\n';
}
myfile1.close();
}



  else cout << "Unable to open file";

  ifstream myfile2 ("/proc/version");
  if (myfile2.is_open())
  {
        cout << "--------------kernel version: ";
    while ( getline (myfile2,line) )  //reads each line and prints out contents
    {
      cout << line << '\n';
    }
    myfile2.close();
  }

  else cout << "Unable to open file";


  ifstream myfile3 ("/proc/meminfo");
if(myfile3.is_open())
{

        cout << "---------------memory use: ";
    while ( getline (myfile3,line) )  //reads each line and prints out contents
    {
      cout << line << '\n';
    }
    myfile3.close();
  }

  else cout << "Unable to open file";



  ifstream myfile4 ("/proc/driver/rtc");
  if (myfile4.is_open())
  {
        cout << "-------------------time/date" << '\n';
    while ( getline (myfile4,line) )  //reads each line and prints out contents
    {
      cout << line << '\n';
    }
    myfile4.close();
  }

  else cout << "Unable to open file";






  return 0;
}


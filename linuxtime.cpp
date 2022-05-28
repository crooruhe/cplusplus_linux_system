// ruhe wk 7 linuxsys
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <math.h>

using namespace std;

int main () {
  string line;
	int stattracker = 0;
	int beginTotaltime, beginIdletime, endTotaltime, endIdletime, programTotalTime,  programIdleTime, programWorkTime;
  ifstream myfile ("/proc/uptime");
  if (myfile.is_open())
  {
      //reads each line and prints out contents
	
    while ( getline (myfile,line) )
    {
	if(stattracker == 0){
      beginTotaltime = line;
		}
	else{
	beginIdletime = line;
		}
stattracker = 1;
    }
    myfile.close();
  }

else cout << "unable to open file";

 
void work() 
{
double y; 

double x = 3.0; 

double e = 2.0; 
int i,j; 

for (i = 0; i < 5; i++) { 
        
	for (j = 0; j < 400000; j++){
		y = pow(x, e);} 
 
   printf("Loop %d of work cycle\n", i ); 
sleep(1);
}
stattracker = 0;

  ifstream myfile2 ("/proc/uptime");
  if (myfile2.is_open())
  {
      //reads each line and prints out contents
	
    while ( getline (myfile2,line) )
    {
	if(stattracker == 0){
      endTotaltime = line;
		}
	else{
	endIdletime = line;
		}
stattracker = 1;
    }
    myfile.close();
  }

else cout << "unable to open file";

programTotalTime = endTotaltime - beginTotaltime;
programIdleTime = endIdletime - beingIdletime;
programWorkTime = programTotalTime - programIdleTime;

int percentage = (programWorkTime / programTotalTime) * 100;

cout << "Percentage of work time is: " << percentage;


  return 0;
}


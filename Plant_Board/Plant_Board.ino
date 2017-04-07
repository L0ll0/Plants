/*This .ino file will contain the code that will be uploaded on the board
 * that will be placed near the plants. This board will send the information to the Web-Server board and
 * will actuate the solenoid valve
 */
#include <VirtualWire.h>
const int n=3;  //Number of plants involved(it depends on the number of analog input ports)
int Plants[n];

//These are all the plants that will be included in the project

void setup() {
  for(int i=0; i<n; i++)
  {
    Plants[i]= i;
  }
  
}

void loop() {
  

}

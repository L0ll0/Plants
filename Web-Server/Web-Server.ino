#include <Dhcp.h>
#include <Dns.h>
#include <Ethernet.h>
#include <EthernetClient.h>
#include <EthernetServer.h>
#include <EthernetUdp.h>

/*This .ino file will contain the code that will be uploaded on the Arduino board that will be connected to the modem. This board will work as a web-server that will write all
 * necessary informations about plants. It will also have to send a message to the other board whenever you choose to water the plants(by clicking a link on the webpage)
*/
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
IPAddress ip(192.168.1.18);
EthernetServer server(80);
void setup() {
  
  Ethernet.begin(mac, ip);
  server.begin();
}

void loop() {
  EthernetClient client = server.available();
  client.println("<!DOCTYPE html>");
  client.println("<html>");
  client.println("<head>");
  client.println("Plants Monitor");
  client.println("</head>");
  client.println("<body>");
  client.println("</body>");
  client.println("</html>");
  break;
}

#include<iostream>
#include<cstring>
#include "Host.h"
using namespace std;

Host::Host(){
   strcpy(hostName, "");
   hostID = 0;
   strcpy(hostEmail, "");
}
Host::Host(int no1, int no2){
  
}
void Host::setHostDetails(const char hName[20], int HID, const char hEmail[50]){
  strcpy(hostName, hName);
  hostID = HID;
  strcpy(hostEmail, hEmail);
}
int Host::getHostID(){
  return hostID;
}
 void Host::uploadShow(){

 }
void Host::deleteShow(){
  
}
void Host::updateHostDetails(){

}
void Host::DisplayHostDetails(){
  for(int i = 0; i < SIZE; i++)
  showID[i] -> displayshowDetails();
}
Host::~Host(){
  for(int i = 0; i < SIZE; i++)
  delete showID[i];
}
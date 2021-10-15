#pragma once
#include "Shows.h"
#define  SIZE 2

class Host
{
  private:
     char hostName[20];
     int hostID;
     char hostEmail[50];
     Shows *showID[SIZE];
     
  public:
      Host();
      Host(int no1, int no2);
      void setHostDetails(const char hName[20], int HID, const char hEmail[50]);
      int getHostID();
      void uploadShow();
      void deleteShow();
      void updateHostDetails();
      void DisplayHostDetails();
      ~Host();
};
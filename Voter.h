#pragma once

class Voter{
  private:
    char voterName[20];
    int voterID;
    char voterEmail[50];
    
  public:
    Voter();
    Voter(const char vName[20], int VID, const char vEmail[50]);
    int getVoterID();
    void updateVoterDetails();
    void displayDetails();
    ~Voter();
};
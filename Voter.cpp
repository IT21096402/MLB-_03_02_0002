#include<iostream>
#include<cstring>
#include "Voter.h"
using namespace std;

Voter::Voter(){
  voterID = 0;
}
Voter:: Voter(const char vName[20], int VID, const char vEmail[50]){
  voterID = VID;
  strcpy(voterName, vName);
  strcpy(voterEmail, vEmail);
}
int Voter:: getVoterID(){
  return voterID;
}
void Voter:: updateVoterDetails(){
  
}
void Voter:: displayDetails(){
  
}
Voter:: ~Voter(){
  cout << "Deleted" << endl;
}
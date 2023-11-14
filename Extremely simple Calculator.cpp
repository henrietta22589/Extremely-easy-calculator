/************************************************************************************************************************************************************
This is a very simple calculator, which is constructed with the help of functions. As an input we can have only two numbers
Πρέπει να γίνει μία διευκρίνιση ο Compiler δεν βλέπει ονομάτα μεταβλήτων, αλλά διευθύνσεις μνήμης και το είδος μίας μεταβλήτης, αν είναι float,char κτλ. 
Οπότε όταν γίνεται η δήλωση των μεταβλήτων σε μία συναρτήση, όπως float sum(float num_1,float num_2), αυτές οι μεταβλήτες μπορούνε να χρησιμοποιήθουνε 
στην δηλώση τον μεταβλήτων με ακρίβως τα ίδια ονόματα, ΑΛΛΑ ΔΕΝ ΣΗΜΑΙΝΕΙ ΟΤΙ ΕΙΝΑΙ ΟΙ ΙΔΙΕΣ ΟΙ ΜΕΤΑΒΛΗΤΕΣ,Η ΚΑΘΕ ΜΙΑ ΔΕΙΧΝΕΙ ΣΕ ΔΙΑΦΟΡΕΤΙΚΗ ΔΙΕΥΘΥΝΗΣΗ
Αλλά στην πρόκειμένη άσκηση, για να είναι πιο ξεκάθαρο το πρόγραμμα, οι μεταβλήτες που θα χρησιμοποιήθουνε μέσα στην main θα έχουνε διαφορετίκο όνομα απο τις μεταβλήτες που θα χρησιμοποιήθουνε σε μια συναρτήση
****************************************************************************************************************************************************************************************************************/

#include <iostream>
using namespace std;
/*Προκαταβόλικη δήλωση συναρτήσεων*/
float sum(float num_1,float num_2);
float subtraction(float num_1,float num_2);
float multiply(float num_1,float num_2);
float divide(float num_1,float num_2);
int main()
{
/*Δήλωση μεταβλήτων*/
 float kalo_sunartsisi,noumero_1,noumero_2;
 int option;
 cout<<"Give me the first number ";
 cin>>noumero_1;
 cout<<endl<<"Give me the second number ";
 cin>>noumero_2;
 cout<<endl<<"Which operation would you like to perform on your given numbers?";
 cout<<endl<<"If you want to sum them up    0"<<endl<<"If you want to subtract them  1"<<endl<<"If you want to multiply them  2"<<endl<<"If you want to subtract them  3";
 cout<<endl<<"Give me your option: ";cin>>option;
 /*Δίνω στον χρήστη την δυνατοτητα με βάση τον αριθμό που θα μου δώσει, μέσω της συνθήκης switch να καλέστεί απο την main η ζητούμενη συνάρτηση*/
 switch(option)
 {
     case 0:
     kalo_sunartsisi=sum(noumero_1,noumero_2);
     cout<<endl<<"The result of the sum of the given numbers is "<<kalo_sunartsisi;
     break;
     case 1:
     kalo_sunartsisi=subtraction(noumero_1,noumero_2);
     cout<<endl<<"The result of the substraction of the given numbers is "<<kalo_sunartsisi;
     break;
     case 2:
     kalo_sunartsisi=multiply(noumero_1,noumero_2);
     cout<<endl<<"The result of the multiplication of the given numbers is "<<kalo_sunartsisi;
     break;
     case 3:
     kalo_sunartsisi=divide(noumero_1,noumero_2);
     cout<<endl<<"The result of the division of the given numbers is "<<kalo_sunartsisi;
     break;
}
return 0;
}

/*Δημιουργία συναρτήσεων*/
/*Αθροίσματος*/
float sum(float num_1,float num_2)
{
    float athroisma=0;
    athroisma=num_1+num_2;
    return athroisma;
}
/*Αφαίρεσης*/
float subtraction(float num_1,float num_2)
{
    float afairesi=0;
    afairesi=num_1-num_2;
    return afairesi;
}
/*Πολλάπλασιασμού*/
float multiply(float num_1,float num_2)
{
    float pollaplasiasmos=1;
    pollaplasiasmos=num_1*num_2;
    return pollaplasiasmos;
}
/*Διαίρεσης*/
float divide(float num_1,float num_2)
{
    float diairesi=1;
    diairesi=num_1/num_2;
    return diairesi;
}
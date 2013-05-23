#include "stdafx.h"
#include <iostream> 
#include <cctype>
using namespace std;

int main()
{
  setlocale(0,"Russian");
   const int SEATS = 11;
   int plane[ SEATS ] = {};
   int people = 0;   
   int economy = 6;
   int firstClass = 1; 
   int choice;
   char response;
   
   
   while ( people < 10 ) 
   {
      cout << "\nПожалуйста, наберите 1 для \"1 клас\"\n"
         << "Напечатайте 2 \"економ\"\n";
      cin >> choice;

      
      if ( choice == 1 ) 
      {
         if ( !plane[ firstClass ] && firstClass <= 5 ) 
         {
            cout << "Ваше назначение места есть " << firstClass
               << " в первой классовой секции.\n";
            plane[ firstClass++ ] = 1;
            people++;
         } 
         else if ( firstClass > 5 && economy <= 10 ) 
         {
            cout << "в 1 класе секция полна.\nРазве должен вас "
               << "подобно, чтобы сидеть в секции экономики (Y or N)? ";
            cin >> response;

            
            if ( response == 'Y' || response == 'y' ) 
            {
               cout << "Ваше назначение места есть " << economy
                  << " в секции экономики.\n";
               plane[ economy++ ] = 1;
               people++;
            } 
            else 
               cout << "Следующий полет отправляется в 3 часа.\n";
         } 
         else 
            cout << "Следующий полет отправляется в 3 часа.\n";
      } 
      else 
      {
         if ( !plane[ economy ] && economy <= 10 ) 
         {
            cout << "Ваше назначение места есть " << economy 
               << " в секции экономики.\n";
            plane[ economy++ ] = 1;
            people++;
         } 
         else if ( firstClass <= 5 ) 
         {
            cout << "Секция экономики полна.\nWould, которые вам нравятся " 
                 << "чтобы сидеть в firstClass секции (Y or N)? ";
            cin >> response;

            if ( response == 'Y' || response == 'y' ) 
            {
               cout << "Ваше назначение места есть " << firstClass 
                  << " в первой классовой секции.\n";
               plane[ firstClass++ ] = 1;
               people++;
            } 
            else 
               cout << "Следующий полет отправляется в 3 часа.\n";
         } 
         else 
            cout << "Следующий полет отправляется в 3 часа.\n";
      } 
   } 

   cout << "Все места для этого полета продаются." << endl;
}

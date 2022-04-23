#include "Excel.h"
#include <ole2.h>

Excel::Excel() {
    myfile.open("example.csv");

}

void Excel::fillTable(int id, System::String^ fio)
{
   
    myfile << id << "\n";
   // myfile << conver_Unicode(fio);
    
}
void Excel::close_File() 
{
    myfile.close();
}


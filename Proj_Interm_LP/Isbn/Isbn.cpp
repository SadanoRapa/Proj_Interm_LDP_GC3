#include "Isbn.h"
#include <cctype>

bool checkISBN(std::string isbn){
    int c = 0;
    for(int i = 0; i < 3; i++){
            if(isbn[c] == '-') return false;
            while(isbn[c] >= 48 && isbn[c] <= 57) {
                c++;
            }
            if(isbn[c] != '-') return false;
            c++;
        }
    if(!isalnum(isbn[c]) || (isbn[c+1] != '\0')) return false;
    return true;
}

/*//versione checkISBN con i primi 3 campi fissati a 3
bool checkISBN(std::string isbn){
    int c = 0;
    for(int i = 0; i < 3; i++){
            while(isbn[c] >= 48 && isbn[c] <= 57) {
                c++;
            }
            if(isbn[c] != '-' || c !=(i+1)*3 + (i)) return false;
            c++;
        }
    if(!isalnum(isbn[c]) || (isbn[c+1] != '\0')) return false;
    return true;
}
*/
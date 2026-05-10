#include "products.h"
#include "production.h"
#include "tools.h"
#include "betterio.h"

int main(){

    int opcmain;

    welcomeMsg();

    do
    {
        MENUVIEW();
        opcmain = ENTnumberverification(1,4);
        OPCSELECT(opcmain);
        switch (opcmain)
        {
        case 1:
            
            pause();
        
            /*Añadir producto*/

            break;
        case 2:
            
            pause();
            
            /*Eliminar producto*/
        
            break;
        case 3:
            
            pause();
            
            /*Eliminar producto*/
        
            break;
        default:

        break;

        }

    } while (opcmain != 4);

    return 0;
}

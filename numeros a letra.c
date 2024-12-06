/* Digita un numero en el rango del 0 al 9999
y conviertelo en letras debido a como se escriban*/

#include<iostream>
#include<locale.h>
using namespace std;

int main () {
    stlocale(LC_CTYPE,"Spanish")
    int numero, unidad, decena, centena, unimil;
    cout<<"Digita un numero en el rango del 0 al 9999: ”; cin >>numero;

    if (numero>=0 && numero<=9999) (
        unidad=numero%10; numero=numero/10; // 3999%10=9 3999/10=399
        decena=numero%10; numero=numero/10; // 399%10=9   399/10=39
        centena=numero%10; numero=numero/10; // 39%10=9     39/10=3

    //Presentar unidades de mil
                switch (unimil) {
                    case 0: cout<<"";break;
                    case 1: cout<<"mil "; break;
                    case 2: cout<<"dos mil "; break;
                    case 3: cout<<"tres mil "; break;
                    case 4: cout<<"cuatro mil "; break;
                    case 5: cout<<"cinco mil "; break;
                    case 6: cout<<"seis mil "; break;
                    case 7: cout<<"siete mil "; break;
                    case 8: cout<<"ocho mil "; break;
                    case 9: cout<<"nueve mil "; break
                 }


    //Presentar centenas
                switch (centena) {
                    case 0: cout<<""; break;
                    case 1: if (decena==0 && unidad==0) {
                             cout<<"cien ";
                             } else {
                             cout<<"ciento ";
                             }
                break;
                case 2: cout<<"doscientos "; break;
                case 3: cout<<"trescientos "; break;
                case 4: cout<<"cuatrocientos "; break;
                case 5: cout<<"quinientos "; break;
                case 6: cout<<"seiscientos "; break;
                case 7: cout<<"setecientos "; break;
                case 8: cout<<"ochocientos "; break;
                case 9: cout<<"novecientos "; break;
                }

    //Presentar decenas
                switch (decena) {
                    case 1: switch (unidad) {
                                case 0: cout<<"diez "; break;
                                case 1: cout<<"once "; break;
                                case 2: cout<<"doce "; break;
                                case 3: cout<<"trece "; break;
                                case 4: cout<<"catorce "; break;
                                case 5: cout<<"quince "; break;
                                case 6: cout<<"dieciseis "; break;
                                case 7: cout<<"dieciete "; break;
                                case 8: cout<<"dieciocho "; break;
                                case 9: cout<<"diecinueve "; break;
                           }
                 break;

                 case 2: switch (unidad) {
                             case 0: cout<<"veinte "; break;
                             case 1: cout<<"veitiuno "; break;
                             case 2: cout<<"veitidos "; break;
                             case 3: cout<<"veintitres "; break;
                             case 4: cout<<"veinticuatro "; break;
                             case 5: cout<<"veinticinco "; break;
                             case 6: cout<<"veintiseis ";break;
                             case 7: cout<<"veintisiete "; break;
                             case 8: cout<<"veintiocho "; break;
                             case 9: cout<<"veitinueve "; break;
                         }
                  break;

                  case 3: if (unidad==0) {
                          cout<<"treinta";
                          } else {
                          cout<<"treinta y ";
                  break;

                  case 4: if (unidad==0) {
                          cout<<"cuarenta";
                          }
                  break;

                  case 6: if (unidad==0) {
                          cout<<"sesenta";
                          } else {
                          cout<<"sesenta y ";
                          }
                  break;

                  case 7: if (unidad==0) {
                          cout<<"sententa";
                          } else {
                          cout<<"sententa y ";

                  break;

                  case 8: if (unidad==0) {
                          cout<<"ochenta";
                          } else {
                          cout<<"ochenta y ";

                  break;

                  case 9: if (unidad==0) {
                          cout<<"noventa";
                          } else {
                          cout<<"noventa y ";
                          }
                 break;
              }

    //Presentar unidades
                switch (unidad) {
                   case 0: if (unimil==0 && contena==0 && decena==0) {
                           cout<<"cero";
                           } else {
                           cout<<"";
                           } break;

                   case 1: if (unimil==0 && centena==0 && decena==0) {
                           cout<<"uno";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"uno";
                           } else if (unimil==0 && centena>=1 && decena>=3 || decena==0) {
                           cout<<"uno";
                           } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0) {
                           cout<<"uno";
                           } else {
                           cout<<"";
                           } break;

                 case  2:  if (unimil==0 && centena==0 && decena==0) {
                           cout<<"dos";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"dos";
                           } else if (unimil==0 && centena>=3 && decena>=3 || decena==0) {
                           cout<<"dos";
                           } else if (unimil>=1 && centena>=0 && decena>=3 || decena==0) {
                           cout<<"dos";
                           } else {
                           cout<<"";
                           } break;

                case   3:  if (unimil==0 && centena==0 && decena==0) {
                           cout<<"tres";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"tres";
                           } else if (unimel==0 && centena>=1 && decena>=3 || decena==0) {
                           cout<<"tres";
                           } else if (unimil==1 && centena>=3 && decena>=3 || decena==0) {
                           cout<<"tres";
                           } else {
                           cout<<"";
                           } break;

                case   4:  if (unimil==0 && centena==0 && decena==0)
                           cout<<"cuatro";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"cuatro";
                           } else if (unimil==0 && centena>=1 && decena>=3 || decena==0) {
                           cout<<"cinco";
                           } else if (unimil>==0 && centena>=0 && decena>=3 || decena==0) {
                           cout<<"cinco";
                           } else {
                           cout<<"";
                           } break;

               case   5:   if (unimil==0 && centena==0 && decena==0) {
                           cout<<"cinco";
                           } else if (unimil==0 && centena==0 && decena>=3 || decena==0) {
                             cout<<"cuatro";
                           } else if (unimil==0 && centena==0 && decena>=3 || decena==0) {
                           cout<<"cinco";
                           } else {
                           cout<<"";
                           } break;

             case    6:    if (unimil==0 && centena==0 && decena==0) {
                           cout<<"seis";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"seis";
                           } else if (unimil==0 && centena==0 && decena>=3 || decena==0) {
                           cout<<"seis";
                           } else if (unimil>=1 && centena==0 && decena>=3 || decena==0) {
                           cout<<"seis";
                           } else {
                           cout<<"";
                           } break;

            case    7:    if (unimil==0 && centena==0 && decena==0) {
                           cout<<"siete";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"siete";
                           } else if (unimil==0 && centena==0 && decena>=3 || decena==0) {
                           cout<<"siete";
                           } else if (unimil>=1 && centena==0 && decena>=3 || decena==0) {
                           cout<<"siete";
                           } else {
                           cout<<"";
                           } break;

            case    8:    if (unimil==0 && centena==0 && decena==0) {
                           cout<<"ocho";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"ocho";
                           } else if (unimil==0 && centena==0 && decena>=3 || decena==0) {
                           cout<<"ocho";
                           } else if (unimil>=1 && centena==0 && decena>=3 || decena==0) {
                           cout<<"ocho";
                           } else {
                           cout<<"";
                           } break;

         case    9:    if (unimil==0 && centena==0 && decena==0) {
                           cout<<"nueve";
                           } else if (unimil==0 && centena==0 && decena>=3) {
                           cout<<"nueve";
                           } else if (unimil==0 && centena==0 && decena>=3 || decena==0) {
                           cout<<"nueve";
                           } else if (unimil>=1 && centena==0 && decena>=3 || decena==0) {
                           cout<<"nueve";
                           } else {
                           cout<<"";
                           } break;
        }

    } else {
         cout<<"\nError!!! Debes ingresar un numero en el rango del 0 al 9999";
    }

    cout<<"\n";
    system ("pause");
    return 0;

}
























#include <iostream>
using namespace std;

int main() {


   int n;
   float notas[20][4];
   float prom[20];
   float suma, promGeneral = 0;
   float mayor, menor;
   int aprob = 0, reprob = 0;


    // pedir cantidad de estudiantes
   
   do {
        
       cout << "Cantidad de estudiantes (max 20): ";
       cin >> n;
    
   } while (n < 1 || n > 20);

    
   // ingresar notas
   
   for (int i = 0; i < n; i++) {
        suma = 0;
        cout << "\nEstudiante " << i + 1 << endl;

     for (int j = 0; j < 4; j++) {
            do {
                cout << "Nota " << j + 1 << ": ";
                cin >> notas[i][j];
            } while (notas[i][j] < 0 || notas[i][j] > 100);

            suma += notas[i][j];

            
            // inicializar mayor y menor con la primera nota real
            if (i == 0 && j == 0) {
                mayor = notas[i][j];
                menor = notas[i][j];
            }
           
            else {
                if (notas[i][j] > mayor) {
                    mayor = notas[i][j];
                }
                if (notas[i][j] < menor) {
                    menor = notas[i][j];
                }
            }
        }

        prom[i] = suma / 4;
        promGeneral += prom[i];

        if (prom[i] >= 70) {
            aprob++;
        }
        else {
            reprob++;
        }
    }

   
   // mostrar resultados
    cout << "\n--- RESULTADOS ---\n";

    for (int i = 0; i < n; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cout << notas[i][j] << " ";
        }
        cout << "| Prom: " << prom[i] << endl;
    }

   
    promGeneral = promGeneral / n;

    cout << "\nPromedio general: " << promGeneral << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Aprobados: " << aprob << endl;
    cout << "Reprobados: " << reprob << endl;

    return 0;
}
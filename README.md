**Gestión de Calificaciones con Arreglos**

*Nombre:* Esmailin Carrasco

*Matrícula:* 2025-0458


**Descripción**

Este programa en C++ permite registrar las calificaciones de un grupo de estudiantes usando arreglos.
Se ingresan 4 notas por estudiante, se calculan promedios y se muestran resultados generales.


**Funcionamiento**

* Se solicita la cantidad de estudiantes (máximo 20).
* Se ingresan 4 calificaciones por cada estudiante (entre 0 y 100).
* El programa muestra:

  * Las calificaciones de cada estudiante
  * El promedio de cada uno
  * El promedio general del grupo
  * La calificación más alta y más baja
  * Cantidad de aprobados y reprobados


**Ejemplo de ejecución**

Las siguientes imágenes muestran la ejecución del programa en consola:

<img width="1919" height="951" alt="Captura de pantalla 2026-04-16 181602" src="https://github.com/user-attachments/assets/73479ed1-e4f9-4c5f-a708-4a1d91ea643c" />

<img width="1835" height="641" alt="Captura de pantalla 2026-04-16 181614" src="https://github.com/user-attachments/assets/23a049ba-def4-4246-a1c4-49b7e3436dd9" />



*Aqui podemos ver que ocurre en el caso de ingresar una calificacion mayor a *100* o menor a *0**

<img width="1919" height="954" alt="Captura de pantalla 2026-04-16 185421" src="https://github.com/user-attachments/assets/989d45d8-896e-4652-8df8-f0b11c004fd6" />

*Se sigue repitiendo la opcion de ingresar la calificacion hasta que se ingrese una cantidad que cumpla con el rango establecido*


**Uso de arreglos**

Se utilizó un arreglo bidimensional para guardar las calificaciones, donde cada fila representa un estudiante y cada columna una nota.
También se usó un arreglo para almacenar los promedios de cada estudiante.

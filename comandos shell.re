comandos shell
MAC

minimizar, boton amarillo                              COM + M
cambiar entre apps                                        COM + TAB
cambiar entre ventanas (misma app)          COM + `

SHELL / TERMINAL



GENERAL

control + L                      borra pantalla
man (comando)           manual de comandos
pwd                               indica ubicacion
tr (valor1) (valor2)         traduce… convierte un valor en otro

DIRECTORIOS


ls                                     contenido del directorio
ls -p                                agrega una barra la los directorios
ls -l                                 muestra los detalles
ls -la                                muestra archivos ocultos que comienzan por un punto
ls -alh                             ???
mkdir (nombre)              crea directorio
cd (directorio)                cambia de directorio
cd .                                  mueve al propio directorio
cd ..                                 mueve al directorio superior
rmdir                              borra el directorio (solo si esta vacio)
rm -rf                              borra directorios sin preguntar…… OJO
echo -n (contenido) > (archivo)


ARCHIVOS
wc                                         trabaja sobre un archivo(s) ??????????????????
wc -l (archivo)                     muestra el numero de lineas del archivo
cp (archivo1) (archivo2)     copia 1 en 2
mv (archivo1) (archivo2)    renombra el archivo de 1 a 2
mv (archivo) /carpeta/archivo           mueve el archivo a la ubicación
rm (archivo)                         elimina el archivo
rm -f  (archivo)                    elimina archivos forzado, si los archivos no existen no se detiene     
? y *                                       comportamiento comodin tipico

cat (archivo)                           muestra el contenido de un archivo
cat -e (archivo)                      muestra saltos de linea y caracteres no imprimibles
cat > (nombre del archivo) → en la siguiente linea se escribe el contenido del archivo
                                               → al terminar, hacer ctrl + D


tar -xvf (archivo)            descomprime
vim archivo                    lee un archivo para editarlo
touch (nombre)              crea un archivo
touch -t 202207150842 (archivo)    cambia la fecha y hora del archivo
touch -mht                  cambia la fecha/hora de un enlace simbólico
ln -s (archivo1) (archivo2) crea un enlace de 1 a 2
more (archivo)                muestra el contenido de un archivo mas grande que la pantalla
head -n 2 (archivo)        muestra las 2 primeras lineas
head -c 9 (archivo)        muestra los 9 primeros caracteres
tail -n 2 (archivo)        muestra las 2 ultimas lineas
tail -c 6 (archivo)        muestra los ultimos 6 caracteres
IMPORTANTE                el salto de linea es un caracter ($)
grep (palabra) (archivo)                busca las lineas que contengan la palabra
grep -v (palabra) (archivo)        busca las lineas que no contengan la palabra
grep -i                                        ignora mayusc - minusc
tar -xf (archivo)                     descomprime


POLITICAS
-AAABBBCCC-             A usuario - B su grupo - C los demas (otros)
-rwx                                r leer, w escribir, x ejecutar, a (all) todos
chmod                           cambia las politicas        u usuario, g grupo, o others
chmod o+r                   agrega permiso de lectura a others
chmod a-x                     quita permiso de ejecutar a todos
notacion binaria:
421 → suma 7 = 3 permisos → rwx
420 → suma 6 = 2 permisos → rw-
401 → suma 5 = 2 permisos → r-x
400 → sma 4 = 1 permiso → r--
chmod 764 archivo → otorga rwx al archivo


echo                                devuelve lo que le asignemos     
  
“#”                          comenta una linea (sin las comillas)
/*   */                      comenta bloques de texto
x=5                                asigna 5 a la variable x
echo $x                        muestra el contenido de la variable x
sh                                inicializa un nuevo entorno dentro del promp, es un sub-shell
env                                muestra el entorno
export (variable)        envia la variable al sub-shell


tabulador completa nombre del archivo

CLAVES SSH

ssh-keygen     crea los 2 archivos, el publico y el privado



- Procedimiento conexion repositorio Git Intra
1. copiar link del repositorio
2. ubicarse en la nueva carpeta a conectar al repositorio
3. git init → para iniciar la conexión
4. git remote add origin (link del repo) ← origin es el nombre convenido para el remoto
5. git status ← para ver los archivos en local
6. crear .gitignore con → .* , main* , *.out
7. !!! primero subir el .gitignore para que funcione,
8. git add .gitignore -f
9. git commit -m ‘.gitignore’
10. git push origin master
11. git add (archivo) ← lo coloca en el staging, usar * para seleccionar todos
12. git commit -m ‘(étiqueta)’ ← lo coloca en el repo local, listo para subirlo
13. git push origin master ← lo sube al remoto

rm -fR .git          eliminar el enlace git
git ls-files           listado del contenido remoto
tambien: con finder, ir a la carpeta y borrar el archivo oculto del git

Librerias

ar rc lib01.a alfa.o bravo.o

en donde: lib01.a es el nombre de la libreria, debe comenzar por ‘lib’
                  los archivos tienen que ser .o

luego al compilar:
cc -Wall -Wextra -Werror main.c -L. -l01

en donde: -l01 se coloca la l, y luego el nombre del archivo que viene despues de ‘lib’

para hacer un indice y que la busqueda dentro de la libreria sea mas rapida:

ranlib (nombre de la libreria))


![](https://paper-attachments.dropbox.com/s_2366B064C77AA6627B8395FAA1269328CDCE44F06B74D7FC0DC07AA5B51ECB7B_1653500124518_Screen+Shot+2022-05-25+at+7.34.43+PM.png)


C - comandos

f(65)      → 65 en ascii → envia A
f(’65’)     → 65 en numero 



1. crear archivo (nombre).c
2. compilar con gcc (archivo) flags moulinette → -Wall - Wextra -Werror
3. ejecutar con ./a.out
    include <stdio.h>
    
    x main(y) {
       codigo;
       return z;
    }

x = salida (variable)
y = entrada
z = valor de salida
void → indica: “nada”


write(1, <texto o variable>, <num de characters>)      →     ubicada en <unistd.h>

if (condition)
      <code> only one line
      
if (condition)
{

    <code ln1>
    <code ln2…>

}

for (statement 1; statement 2; statement 3) {
     <code>
}

while (statement) {
     <code>
}

Punteros

TIPO *nombre_puntero; ← declaracion del puntero
nombre_puntero = &a ← inicializacion del puntero

& → indica la dirección
* → indica el contenido

muy importante, el TIPO del puntero, tiene que ser siempre igual al TIPO de la variable a la que apunta


    int a;
    int b;
    int *ptr;
    a = 5;
    b = 10;
    ptr = &a
    print *ptr -> 5
    print *(ptr + 1) ->10

sumarle 1 a ptr, suma un espacio en la memoria, y como b esta luego de a, entonces ahora ptr + 1 apunta a b

**nombre_puntero → indica que es un puntero que apunta a otro puntero


Librerias

#include <(libreria)>
<unistd.h>           para write
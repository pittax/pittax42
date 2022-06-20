iTerm2

Directorios y archivos

cd /home	: Entrar en el directorio “home”.
cd ..		: Retroceder un nivel.
cd ../..	: Retroceder 2 niveles.
cd 			: Ir al directorio raíz.
cd ~user1 	: Ir al directorio user1.
cd - 		: Ir (regresar) al directorio anterior.
pwd 		: Mostrar el camino del directorio de trabajo.
ls 			: Ver los ficheros de un directorio.
ls -F 		: Ver los ficheros de un directorio.
ls -l 		: Mostrar los detalles de ficheros y carpetas de un directorio.
ls -a 		: Mostrar los ficheros ocultos.
tree 		: mostrar los ficheros y carpetas en forma de árbol comenzando por la raíz.(1)
lstree      : mostrar los ficheros y carpetas en forma de árbol comenzando por la raíz.(2)
mkdir dir1  : crear una carpeta o directorio con nombre ‘dir1′.
mkdir dir1 dir2 		: crear dos carpetas o directorios simultáneamente (Crear dos directorios a la * vez).
mkdir -p /tmp/dir1/dir2 : crear un árbol de directorios.
rmdir dir1 				: borrar la carpeta llamada ‘dir1′.
rm -f file1 			: borrar el fichero llamado ‘file1′.
cp file1 file2			: copiar un fichero.
cp file1 file2 			: copiar dos ficheros al unísono.
cp dir /* .             : copiar todos los ficheros de un directorio dentro del directorio de trabajo actual.
find / -name file1 		: buscar fichero y directorio a partir de la raíz del sistema.
find / -user user1 		: buscar ficheros y directorios pertenecientes al usuario ‘user1′.
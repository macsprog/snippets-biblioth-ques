# inspection des programmes compilés avec nm: les objets avec U sont undefined
# comparaison de la taille des exécutables

# varible LD_LIBRARY_PATH

(base) macs@hal9000$ ./prog1.exe 
./prog1.exe: error while loading shared libraries: libcomplex.so: cannot open shared object file: No such file or directory
(base) macs@hal9000$ export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
(base) macs@hal9000$ echo $LD_LIBRARY_PATH 
/home/sko/taff/macs/macs-coursC/snippets/bibliotheques:
(base) macs@hal9000$ ./prog1.exe 
module = 1.3
prog1.exe done.

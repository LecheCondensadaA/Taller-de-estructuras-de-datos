cd "/home/luis/Desktop/Taller de estructuras de datos/" #Cambia la ruta si quieres usarlo en tu repositorio

echo "Hola, iniciaste el automatizador de commit" #porque leche._condensada es un flojo
echo "Ingresa el commit: " #Pide el commit
read men #lee el commit

#inserte comandos de git para subir el R.E.P.O.
git add .
git commit -m "$men"
git push origin main

echo
echo "Ya se ha actualizado tu repo :D" #confirmacion que lo dice si falla o no XD
echo "Byeeeeee -w-" #OwO

from timeit import default_timer
#Se lee cada linea del anrchivo entrada.txt y se guarada en un array
def read_data():
    f = open('entrada.txt', 'r')
    d = f.readlines()
    f.close()
    return d

# función que calcula cuantos dias tarda el barco en alcanzar la peninsula
# en caso de no alcanzarla retorna -1
def solve(a, b, c):
    days = round(c * 4 /(a - b))
    if a-b > 0: return days 
    else: return -1 
    
#Se recibe un array con cada una de las cadenas a escribir en el archivo
#y se iterea sobre ese array escribiendo cada string en una linea
#del archivo salida.txt
def write_data(ans):
    f = open('salida.txt', 'w')
    for i in ans:
        f.write(i)
    f.close()


       
def main():
   time_read_data = []
   time_solve = []
   time_write_data = []
   times = []

   start = default_timer()
   data = read_data()
   end = default_timer()
   t = end - start
   time_read_data.append(t)

   ans = []
   
   for i in data:
       line = i.split(' ')
       valor = line[2]
       tam = len(valor)
       chain = line[0] + ' ' + line[1] + ' ' + valor[slice(tam - 1)] + ' ' 
       
       #Se llama la funcion que resuelve el algortimo y se calcula el tiempo de ejecución
       #de la función solve()
       start = default_timer()
       days = solve(int(line[0]), int(line[1]), int(line[2]))
       end = default_timer()
       t = end - start
       time_solve.append(t)
       ejecution_time_solve = round((end - start), 6)
       
       #se concatenan cada uno de los valores en formato str que se van a imprimir en 
       #cada linea del archivo salida.txt
       chain += str(days) + ' ' + str(ejecution_time_solve) + '\n'

       ans.append(chain)

   start = default_timer()    
   write_data(ans)
   end = default_timer()
   t = end - start
   time_write_data.append(t)   
   
   #tiempos medios dependiendo del numero de llamados de las funciones
   t1 = sum(time_read_data)/len(time_read_data)
   times.append(t1)
   t2 = sum(time_solve)/len(time_solve)
   times.append(t2)
   t3 = time_write_data
   times.append(t3[0])

   #tiempos de cada funcion
   for i in times: print(round(i, 10))

main()

    
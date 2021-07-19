<html>
  <head>
    <title>PHP Test</title>
  </head>
  <body>
    <?php 
      //Ordena el array
      function selectionSort($data){
        $n=count($data);
        $nextSwap=null;
        $temp=null;
 
        for($i=0; $i<$n-1; $i++){
 
          $nextSwap=$i;
          for($j=$i+1; $j<$n; $j++){
            if( $data[$j]<$data[$nextSwap] ){
                $nextSwap=$j; 
            }
          }
 
          $temp=$data[$i];
          $data[$i]=$data[$nextSwap];
          $data[$nextSwap]=$temp;
        }
 
        return $data;
      }
      //declarar array
      $my_array = array(43,23,4,11,2,88,76,46);
      //ordenar el array
      $array_ordenado = selectionSort($my_array);
      $tamaño = sizeof($array_ordenado);
      //mostrar el menor y mayor elemento del array
      echo "El numero menor del array es: $array_ordenado[0]";
      echo "<br> El numero mayor del array es: ",$array_ordenado[$tamaño -1];
    ?> 
  </body>
</html>
<html>
  <head>
    <title>PHP Test</title>
  </head>
  <body>
    <?php 
    //genera numero aleatorio
    function generar_aleatorios($inicial, $final){
        return rand($inicial, $final);
    }
    
    //rango
    $inicial = 1;
    $final = 10;
    
    //agregar los numero aleatorios en un array
    $numeros = array();
    for ($i = 0; $i < 100; $i++){
      array_push($numeros, generar_aleatorios($inicial, $final));
    }
    
    //mostrar los elemntos del array
    for ($i = 0; $i < 100; $i++){
      echo "$numeros[$i] <br>";
    }
    ?> 
  </body>
</html>
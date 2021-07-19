<html>
  <head>
    <title>PHP Test</title>
  </head>
  <body>
    <?php
    function divisores($n){
      $contador = 0;
      for ($i = 1; $i <= $n; $i++){
        if ($n % $i == 0) {
          $contador++;
        }
      }
      return $contador;
  }
      
    $primos = array();
    for ($i = 2; $i < 1000; $i++){
      if (divisores($i) == 2){
        array_push($primos, $i);
      }
    }
    
    for ($i = 0; $i < sizeof($primos); $i++){
      echo "$primos[$i] <br>";
    }
     ?> 
  </body>
</html>
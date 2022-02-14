%% Entrada de datos
b1 = input('Enter side b1: ');
b2 = input('Enter side b2: ');
c1 = input('Enter side c1: ');
A1 = input('Enter angle A1 in degrees: ');
A2 = input('Enter angle A2 in degrees: ');

%% Procesamiento de los datos
%%Convertimos los angulos de grados a radianes
A1_rad = A1*pi/180;
A2_rad = A2*pi/180;


%% Ahora calcualmos el lado a usando el teorema del coseno
a = sqrt(b1*b1 + c1*c1 -2*b1*c1*cos(A1_rad));

%% Una vez tenemos el lado a procedemos a calcular el angulo B2
% Esto haciendo uso del teorema del seno
B2_rad = asin(b2*sin(A2_rad)/a);


%% Ahora procedemos a calcular el angulo C2 esto a partir
% de la propiedad que afirma que la suma de los angulos
% interirores de todo triangulo es 180 grados o su equvalente.
% pi radianes.
C2_rad = pi - A2_rad - B2_rad;

%% Finalmente aplicamos teorma del seno para calcular el lado c2
c2 = a*sin(C2_rad)/sin(A2_rad);
 
%% Salida de datos
fprintf('The length of side c2 is: %f meters: ', c2);
 
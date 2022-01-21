% Entrada de datos
V = input('Digita el voltaje nominal en voltios, recuerda, este debe ser mayor a cero: ')
S = input('Digita la potencia en voltamperios, recuerda, este debe ser mayor a cero: ')
N = input('Digita el número de espiras, recuerda, este debe ser mayor a 100: ')
fp = input('Digita el factor potencia, recuerda, que este debe ser un número entre 0 y 1: ')


% Procesamiento de los datos (calculos)
theta_radianes = acos(fp)
theta_grados = theta_radianes * 180 / pi 
fi_max = V / (266.4 * N)
i_max = S * sqrt(2) / V


% Plots
t = 0:0.0025:0.033  

figure

% Gráfico voltaje vs tiempo
subplot(4,1,1)
v_t = V * sqrt(2) * sin(377 * t)
plot(t, v_t, 'b')
title('voltaje vs tiempo')
xlabel('t[s]')
ylabel('v(t) [v]')
grid on

% Gráfico corriente vs tiempo
subplot(4,1,2)
i_t = i_max * sin(377 * t - theta_grados)
plot(t, i_t, '-g')
title('corriente vs tiempo')
xlabel('t[s]')
ylabel('i(t) [A]')
grid on

% Gráfico flujo vs tiempo
subplot(4,1,3)
fi_t = fi_max * sin(377 * t - 90)
plot(t, fi_t, '--r')
title('flujo vs tiempo')
xlabel('t[s]')
ylabel('fi(t) [Wb]')
grid on

% Gráfico flujo vs corriente
subplot(4,1,4)
plot(fi_t, i_t, '--c')
title('flujo vs corriente')
xlabel('i(t) [A]')
ylabel('fi(t) [Wb]')
grid on


% Magnitudes calculadas a partir del tiempo que ingrese el usuario
time = input('Digita el instante del tiempo del cual deseas conocer el valor de las magnitudes: ')

v_t = V * sqrt(2) * sin(377 * time)
i_t = i_max * sin(377 * time - theta_grados)
fi_t = fi_max * sin(377 * time - 90)

fprintf('EL valor del voltaje en el instante del tiempo %f segundos es: %f voltios\n', time, v_t)
fprintf('EL valor de la corriente en el instante del tiempo %f segundos es: %f amperios\n', time, i_t)
fprintf('EL valor del flujo en el instante del tiempo %f segundos es: %f webber\n', time, fi_t)

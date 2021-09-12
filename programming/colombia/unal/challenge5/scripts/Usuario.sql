CREATE SCHEMA spotifyTic;
USE spotifyTic;

CREATE TABLE Usuario(
	documento INTEGER PRIMARY KEY,
    tipo_documento VARCHAR(5) NOT NULL,
    nombre VARCHAR(40) NOT NULL,
    apellido VARCHAR(40) NOT NULL,
    correo VARCHAR(40) NOT NULL
);

INSERT INTO Usuario(documento, tipo_documento, nombre, apellido, correo) 
	VALUES(10000001, 'CC', 'Juan', 'Caicedo', 'jecaicedop@gmail.com');
INSERT INTO Usuario(documento, tipo_documento, nombre, apellido, correo) 
	VALUES(123014510, 'TI', 'David', 'Molina', 'David.felpi03@gmail.com');
INSERT INTO Usuario(documento, tipo_documento, nombre, apellido, correo) 
	VALUES(32463142, 'TI', 'Diana', 'García', 'dianasofia1@gmail.com');
INSERT INTO Usuario(documento, tipo_documento, nombre, apellido, correo) 
	VALUES(1234567, 'CC', 'Carlos', 'Pérez', 'carlos_08@gmail.com');
INSERT INTO Usuario(documento, tipo_documento, nombre, apellido, correo) 
	VALUES(1112352, 'PP', 'Carmen', 'Montaña', 'car_mont@gmail.com');
INSERT INTO Usuario(documento, tipo_documento, nombre, apellido, correo) 
	VALUES(1895457, 'CC', 'Camilo', 'Rodríguez', 'jelmasguapo@gmail.com');


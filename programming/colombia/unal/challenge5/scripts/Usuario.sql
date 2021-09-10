CREATE TABLE Usuario(
	documento INTEGER PRIMARY KEY,
    tipo_documento VARCHAR(5) NOT NULL,
    nombre VARCHAR(40) NOT NULL,
    apellido VARCHAR(40) NOT NULL,
    correo VARCHAR(40) NOT NULL
);
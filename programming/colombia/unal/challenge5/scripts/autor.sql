CREATE SCHEMA spotifyTic;
USE spotifytic;

CREATE TABLE autor(
	id INTEGER PRIMARY KEY,
	nombre VARCHAR(40) NOT NULL,
    nacionalidad VARCHAR(40) NOT NULL,
    edad INTEGER NOT NULL
);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(100, 'Carlos Vives', 'Colombiano', 60);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(101, 'Juanes', 'Colombiano', 49);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(102, 'Elton John', 'Británico', 74 );
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(103, 'Justin Bieber', 'Estadounidense', 27);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(104, 'Beyoncé', 'Estadounidense', 39);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(105, 'Thalía', 'Mexicana', 49);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(106, 'Paulina Rubio', 'Mexicana', 50);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(107, 'Ricardo Montaner', 'Venezolano', 63);
INSERT INTO autor(id, nombre, nacionalidad, edad) 
	VALUES(108, 'Axel', 'Argentino', 44);
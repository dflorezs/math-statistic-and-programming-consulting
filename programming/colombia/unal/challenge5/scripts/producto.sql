CREATE SCHEMA spotifyTic;
USE spotifyTic;

CREATE TABLE Producto(
	id INTEGER PRIMARY KEY AUTO_INCREMENT,
	autor_id INTEGER NOT NULL,
    nombre VARCHAR(40) NOT NULL,
    anio INTEGER NOT NULL,
    reproducciones INTEGER NOT NULL,
    FOREIGN KEY(autor_id) REFERENCES autor(id)
);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(100, 'Cuando nos volvamos a encontrar', 2014, 177);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(101, 'Crazy In Love', 2009, 567);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(102, 'Equivocada', 2009, 422);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(103, 'Baby', 2010, 2600);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(104, 'Aire', 2017, 26);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(105, 'Viajero Frecuente', 2012, 980);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(106, 'Deseo', 2018, 2100);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(107, 'The One', 1992, 2550);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(108, 'Más futuro que pasado', 2019, 1720);
INSERT INTO Producto(autor_id, nombre, anio, reproducciones) 
	VALUES(109, ' My World 2.0', 2010, 1965);


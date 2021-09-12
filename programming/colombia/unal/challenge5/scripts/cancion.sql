CREATE SCHEMA spotifyTic;
USE spotifyTic;

CREATE TABLE cancion(
	id INTEGER PRIMARY KEY AUTO_INCREMENT,
	producto_id INTEGER NOT NULL,
    duracion INTEGER NOT NULL,
    genero VARCHAR(15) NOT NULL,
    FOREIGN KEY(producto_id) REFERENCES Producto(id)
);
INSERT INTO cancion(producto_id, duracion, genero) 
	VALUES(1, 300, 'Vallenato');
INSERT INTO cancion(producto_id, duracion, genero) 
	VALUES(2, 240, 'Pop');
INSERT INTO cancion(producto_id, duracion, genero) 
	VALUES(3, 240, 'Pop');
INSERT INTO cancion(producto_id, duracion, genero) 
	VALUES(4, 220, 'Pop');
INSERT INTO cancion(producto_id, duracion, genero) 
	VALUES(5, 270, 'Pop');

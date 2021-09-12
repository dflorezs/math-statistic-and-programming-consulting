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
CREATE SCHEMA spotifyTic;
USE spotifyTic;

CREATE TABLE album(
	id INTEGER PRIMARY KEY,
	producto_id INTEGER NOT NULL,
    formato VARCHAR(20) NOT NULL,
    numero_canciones INTEGER NOT NULL,
    FOREIGN KEY(producto_id) REFERENCES Producto(id)
);

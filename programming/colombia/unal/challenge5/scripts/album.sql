CREATE SCHEMA spotifyTic;
USE spotifyTic;

CREATE TABLE album(
	id INTEGER PRIMARY KEY,
	producto_id INTEGER NOT NULL,
    formato VARCHAR(20) NOT NULL,
    numero_canciones INTEGER NOT NULL,
    FOREIGN KEY(producto_id) REFERENCES Producto(id)
);
INSERT INTO album(id, producto_id, formato, numero_canciones) 
	VALUES(20, 6, 'CD', 18);
INSERT INTO album(id, producto_id, formato, numero_canciones) 
	VALUES(21, 7, 'Digital', 11);
INSERT INTO album(id, producto_id, formato, numero_canciones) 
	VALUES(22, 8, 'Disco de Vinilo', 11);
INSERT INTO album(id, producto_id, formato, numero_canciones) 
	VALUES(23, 9, 'USB', 13);
INSERT INTO album(id, producto_id, formato, numero_canciones) 
	VALUES(24, 10, 'DVD', 10);
SELECT * FROM album;

    

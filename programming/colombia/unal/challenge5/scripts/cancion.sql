CREATE TABLE cancion(
	id INTEGER PRIMARY KEY,
	producto_id INTEGER NOT NULL,
    duracion INTEGER NOT NULL,
    genero VARCHAR(15) NOT NULL,
    FOREIGN KEY(producto_id) REFERENCES Producto(id)
);
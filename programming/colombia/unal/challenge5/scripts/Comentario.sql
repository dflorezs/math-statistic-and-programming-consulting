CREATE SCHEMA spotifyTic;
USE spotifytic;

CREATE TABLE Comentario(
	id INTEGER PRIMARY KEY AUTO_INCREMENT,
    documento_usuario INTEGER NOT NULL,
    producto_id INTEGER NOT NULL,
    opinion VARCHAR(40) NOT NULL,
    FOREIGN KEY(documento_usuario) REFERENCES Usuario(documento),
    FOREIGN KEY(producto_id) REFERENCES Producto(id)
);
INSERT INTO recurso(rec_titulo) 
	VALUES('Harry potter y las reliquias de la muerte');
INSERT INTO recurso(rec_titulo) 
	VALUES('Animales fantásticos y dónde encontrarlos');
INSERT INTO recurso(rec_titulo) 
	VALUES('La vida de pi');
INSERT INTO recurso(rec_titulo) 
	VALUES('El mundo perdido');
INSERT INTO recurso(rec_titulo) 
	VALUES('La historia interminable');
INSERT INTO recurso(rec_titulo) 
	VALUES('El principito');
INSERT INTO recurso(rec_titulo) 
	VALUES('Revista de integración educativa');
INSERT INTO recurso(rec_titulo) 
	VALUES('Revista eureka');
INSERT INTO recurso(rec_titulo) 
	VALUES('Cómo funciona');
INSERT INTO recurso(rec_titulo) 
	VALUES('La canica');
INSERT INTO recurso(rec_titulo) 
	VALUES('Educación matemática');
INSERT INTO recurso(rec_titulo) 
	VALUES('Revista biociencias');

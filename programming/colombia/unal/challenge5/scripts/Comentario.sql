CREATE SCHEMA spotifyTic;
USE spotifytic;

CREATE TABLE Comentario(
	id INTEGER PRIMARY KEY AUTO_INCREMENT,
    documento_usuario INTEGER NOT NULL,
    producto_id INTEGER NOT NULL,
    opinion VARCHAR(250) NOT NULL,
    FOREIGN KEY(documento_usuario) REFERENCES Usuario(documento),
    FOREIGN KEY(producto_id) REFERENCES Producto(id)
);
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(1895457, 10, 'No me gustó, prefiero que sea más rockero');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(1112352, 3, 'Me identifico plenamente');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(123014510, 1, 'Una de las mejores canciones colombiana del último tiempo');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(1112352, 9, 'Uno de los mejores álbumes de Juanes');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(10000001, 2, 'Ojalá nunca me falte el amor');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(123014510, 8, 'Que grande es Elton, ojalá siga por muchos años más');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(32463142, 7, 'Que linda es Paulina');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(1895457, 5, 'Que no me falte el aireeeeee');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(1112352, 8, 'Buena música de mi época');
INSERT INTO comentario(documento_usuario, producto_id, opinion) 
	VALUES(1112352, 2, 'que buenas canciones eran las viejitas');

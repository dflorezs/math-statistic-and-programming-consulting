CREATE SCHEMA spotifyTic;
USE spotifytic;

CREATE TABLE autor(
	id INTEGER PRIMARY KEY,
	nombre VARCHAR(40) NOT NULL,
    nacionalidad VARCHAR(40) NOT NULL,
    edad INTEGER NOT NULL
);

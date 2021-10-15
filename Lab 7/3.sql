-- In 3.sql, write a SQL query to list the names of the top 5 largest songs,
-- in descending orde rof length.

SELECT name FROM songs ORDER BY duration_ms DESC LIMIT 5;
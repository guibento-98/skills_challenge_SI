
-- sqlite -- PREPARE
DROP TABLE IF EXISTS Students;
DROP TABLE IF EXISTS Notes;
CREATE TABLE IF NOT EXISTS Students (
  ID INTEGER PRIMARY KEY AUTOINCREMENT,
  Name TEXT,
  Value INTEGER
);

CREATE TABLE IF NOT EXISTS Notes (
  Grade INTEGER,
  Min_Value INTEGER,
  Max_Value INTEGER
);

WITH RECURSIVE cnt(x) AS ( SELECT 1  UNION ALL SELECT x + 1 FROM cnt LIMIT 9 )
INSERT INTO Notes(Grade, Min_Value, Max_Value) SELECT x, (x*10-10), (x*10-1)  AS outased FROM cnt;

INSERT INTO Notes (Grade, Min_Value, Max_Value) VALUES (10, 90, 100);

INSERT INTO Students (Name, Value) VALUES 
	("Julia", 81),
  ("Carol", 68),
  ("Maria", 99), 
  ("Andreia", 78),
  ("Jaqueline", 63),
  ("Marcela", 88);
 
------------------------ RESP ---------------------

SELECT CASE WHEN nt.grade>7 THEn st.Name ELSE NULL END AS name , nt.grade, st.value
FROM Students as st, Notes as nt 
WHERE st.value<=nt.Max_Value AND st.value>=nt.Min_Value
ORDER BY value DESC, name ASC;

----------------------------------------------------
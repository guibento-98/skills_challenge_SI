SELECT DISTINCT names FROM(
  SELECT name FROM dogs
  UNION
  SELECT name FROM cats
) table_name
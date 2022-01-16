# Write your MySQL query statement below

SELECT id,movie,description,rating from cinema where id%2!=0 and description!='boring' ORDER BY rating DESC;

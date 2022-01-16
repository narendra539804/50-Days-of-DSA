# Write your MySQL query statement below

SELECT class from Courses GROUP BY class HAVING count(class)>=5;
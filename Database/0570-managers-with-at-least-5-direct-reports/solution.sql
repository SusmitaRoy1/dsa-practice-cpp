# Write your MySQL query statement below
SELECT a.name
FROM employee AS a
JOIN employee AS b
ON a.id = b.managerid
GROUP BY b.managerid
HAVING COUNT(b.managerid) >= 5;
   
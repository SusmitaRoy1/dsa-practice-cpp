# Write your MySQL query statement below
SELECT name, bonus
FROM Employee AS a
LEFT JOIN Bonus AS b
ON b.empId = a.empId
WHERE bonus IS NULL OR bonus < 1000;
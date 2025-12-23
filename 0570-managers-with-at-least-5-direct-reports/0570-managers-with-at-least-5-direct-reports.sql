# Write your MySQL query statement below
SELECT a1.name
FROM Employee AS a1
JOIN Employee AS a2
ON a1.id = a2.managerId
GROUP BY a1.name, a1.id
HAVING COUNT(a2.managerId) >=5 
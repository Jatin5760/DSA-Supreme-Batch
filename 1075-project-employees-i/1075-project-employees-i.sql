# Write your MySQL query statement below

SELECT P.project_id, IFNULL(ROUND(SUM(E.experience_years)/COUNT(*), 2), 0.00) AS average_years
FROM Project as P
JOIN Employee as E
ON P.employee_id = E.employee_id
GROUP BY P.project_id
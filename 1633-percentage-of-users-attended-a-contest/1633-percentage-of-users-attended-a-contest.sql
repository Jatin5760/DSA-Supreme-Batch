# Write your MySQL query statement below

SELECT R.contest_id, ROUND((COUNT(*)/(SELECT COUNT(*) FROM Users))*100, 2) AS percentage 
FROM Users as U
RIGHT JOIN Register as R
ON U.user_id = R.user_id
GROUP BY R.contest_id
ORDER BY 
    percentage DESC,   
    R.contest_id ASC;   
# Write your MySQL query statement below
SELECT a.machine_id ,ROUND(AVG(e.timestamp - a.timestamp),3) as processing_time FROM Activity a
JOIN Activity e
ON e.machine_id = a.machine_id
AND e.process_id = a.process_id
WHERE a.activity_type = 'start' and e.activity_type = 'end'
GROUP BY a.machine_id;
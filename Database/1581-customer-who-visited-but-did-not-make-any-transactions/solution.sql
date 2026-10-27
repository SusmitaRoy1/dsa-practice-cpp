# Write your MySQL query statement below
SELECT v.customer_id, count(customer_id) AS count_no_trans
FROM visits AS v
LEFT JOIN transactions AS t
on v.visit_id = t.visit_id
WHERE t.transaction_id IS NULL
GROUP BY customer_id;
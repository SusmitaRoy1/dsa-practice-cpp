# Write your MySQL query statement below
SELECT p.product_name, s.year, s.price
FROM sales as s
LEFT JOIN product as p
USING(product_id);
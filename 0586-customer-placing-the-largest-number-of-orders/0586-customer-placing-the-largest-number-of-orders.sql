# Write your MySQL query statement below
select  customer_number from (select customer_number, count(*) as total_orders
from Orders group by customer_number)
as t
order by total_orders desc 
limit 1;
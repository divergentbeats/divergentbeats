# Write your MySQL query statement below
with cte1 as 
(
    select customer_id, order_date, customer_pref_delivery_date, row_number() over(partition by customer_id order by order_date) as first_order from Delivery
)

select round((sum(
    case
    when order_date = customer_pref_delivery_date then 1
    else 0 
    end
    )*100/count(*)),2) as immediate_percentage from cte1 where first_order = 1;

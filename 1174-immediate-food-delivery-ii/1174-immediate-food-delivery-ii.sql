# Write your MySQL query statement below
    with cte as (
        select customer_id, customer_pref_delivery_date,order_date, min(order_date) over (partition by customer_id) as first_order from Delivery
    )
, cte1 as (
    SELECT customer_id, first_order as immediate_order
    FROM cte
    WHERE order_date = first_order
      AND order_date = customer_pref_delivery_date
)
, cte2 as(select count(distinct a.customer_id) as firstcount, count(distinct b.customer_id) as icount from cte a, cte1 b)

,cte3 as(
select (icount/firstcount)*100 as immediate_percentage from cte2
)
select round(immediate_percentage,2) as immediate_percentage from cte3;

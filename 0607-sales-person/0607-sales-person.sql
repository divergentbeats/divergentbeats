# Write your MySQL query statement below
select name from SalesPerson where sales_id not in (select o.sales_id from Orders o, Company c where o.com_id = c.com_id and c.name='Red');
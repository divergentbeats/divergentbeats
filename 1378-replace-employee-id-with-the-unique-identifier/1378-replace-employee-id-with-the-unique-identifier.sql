# Write your MySQL query statement below
select u.unique_id, e.name from employeeUNI u right join employees e on e.id = u.id;

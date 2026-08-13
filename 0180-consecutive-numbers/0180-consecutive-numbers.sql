# Write your MySQL query statement below
select distinct p1.num as ConsecutiveNums from Logs as p1, Logs as p2 , Logs as p3 where p1.id+1 = p2.id and p2.id + 1 = p3.id and p1.num = p2.num and p2.num = p3.num;

with cte1 as (
    select * from stadium where people >=100
)
,cte2 as(
select id, 
visit_date, 
people, 
row_number() over() as rowNum,
id - row_number() over() as diff
from cte1
)
,cte3 as (
select id, visit_date, people, count(*) over(partition by diff) as cnt from cte2 
)
select id, visit_date, people from cte3 where cnt>=3
order by id;

# Write your MySQL query statement below
select s.student_id, s.student_name, a.subject_name, count(e.subject_name) as attended_exams from  students s cross join subjects a left join examinations e on e.student_id = s.student_id and e.subject_name = a.subject_name
group by s.student_id, s.student_name,a.subject_name
order by s.student_id;
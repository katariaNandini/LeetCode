# Write your MySQL query statement belows
select unique_id,name from Employees as e
left join EmployeeUNI as u
on e.id=u.id;
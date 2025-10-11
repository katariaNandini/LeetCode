# Write your MySQL query statement below
select name as results from (select u.name,count(*) as counti from 
MovieRating m
join users u
on u.user_id=m.user_id
group by m.user_id
order by  counti desc,u.name
limit 1
) as t
union all
select title as results from (select avg(rating) as avge ,m.title 
from MovieRating r
join movies m
on m.movie_id=r.movie_id
where year(r.created_at)  ="2020" and month(r.created_at)="02"
group by r.movie_id
order by avge desc,title 
limit 1  ) as t ;
--    WHERE YEAR(r.created_at  ) = 2020 
--       AND MONTH(r.created_at  ) = 2



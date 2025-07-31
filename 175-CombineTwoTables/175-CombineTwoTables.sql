-- Last updated: 7/31/2025, 10:16:29 PM
# Write your MySQL query statement below
select p1.firstName,p1.lastName,a1.city,a1.state from Person as p1
left join Address as a1
on p1.personId=a1.personId;
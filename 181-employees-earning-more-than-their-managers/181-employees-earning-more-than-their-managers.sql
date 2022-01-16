SELECT e1.name Employee from Employee e1 JOIN Employee e2 ON e1.managerId=e2.id where e1.salary>e2.salary


# select e1.Name as Employee 
# from Employee e1
# join Employee e2
# on e1.ManagerId = e2.Id
# where e1.salary > e2.salary
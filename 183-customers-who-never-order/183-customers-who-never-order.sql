SELECT c.name as Customers from Customers c  LEFT JOIN orders o ON c.id=o.customerId where o.CustomerID IS NULL ;

# SELECT A.Name from Customers A
# LEFT JOIN Orders B on  a.Id = B.CustomerId
# WHERE b.CustomerId is NULL

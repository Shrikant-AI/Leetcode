
SELECT name FROM Customer
WHERE  
--    referee_id IS NULL OR referee_id != 2
    IFNULL (referee_id , 0) != 2
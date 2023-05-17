// For Table Creation;
CREATE TABLE Cities (
    id INT PRIMARY KEY,
    name VARCHAR(50),
    state VARCHAR(2)
);

// For inserting values
INSERT INTO Cities
VALUES (1, 'Bengaluru', 'KA');
INSERT INTO Cities
VALUES (2, 'Mysuru', 'KA');
INSERT INTO Cities
VALUES (3, 'Delhi', 'DL');
INSERT INTO Cities
VALUES (4, 'Mumbai', 'MH');
INSERT INTO Cities
VALUES (5, 'Kolkata', 'WB');
INSERT INTO Cities
VALUES (6, 'Chennai', 'TN');

// Query to list all the cities sorted by name in ascending order
SELECT name 
FROM Cities
ORDER BY name ASC;

// query to get the list of states with count of cities
SELECT state, COUNT(*) AS Count
FROM Cities
GROUP BY state;




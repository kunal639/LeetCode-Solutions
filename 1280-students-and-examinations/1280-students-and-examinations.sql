# Write your MySQL query statement below
SELECT std.student_id, std.student_name, sub.subject_name, COUNT(s.student_id) AS attended_exams
FROM Students std
CROSS JOIN Subjects sub
LEFT JOIN Examinations s ON std.student_id = s.student_id AND sub.subject_name = s.subject_name
GROUP BY std.student_id, std.student_name, sub.subject_name
ORDER BY std.student_id, sub.subject_name;
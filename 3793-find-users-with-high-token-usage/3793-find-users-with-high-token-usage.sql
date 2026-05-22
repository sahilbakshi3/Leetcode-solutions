# Write your MySQL query statement below
WITH UserMetrics AS (
    SELECT 
        user_id,
        tokens,
        AVG(tokens) OVER(PARTITION BY user_id) AS user_avg,
        COUNT(prompt) OVER(PARTITION BY user_id) AS user_count
    FROM 
        prompts
)
SELECT 
    user_id,
    MAX(user_count) AS prompt_count,
    ROUND(MAX(user_avg), 2) AS avg_tokens
FROM 
    UserMetrics
WHERE 
    user_count >= 3
GROUP BY 
    user_id
HAVING 
    MAX(CASE WHEN tokens > user_avg THEN 1 ELSE 0 END) = 1
ORDER BY 
    avg_tokens DESC, 
    user_id ASC;
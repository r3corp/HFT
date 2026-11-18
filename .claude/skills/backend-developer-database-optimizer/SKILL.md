---
name: backend-developer-database-optimizer
description: Analyze and optimize database queries, indexes, and schema for performance (PostgreSQL, MySQL, MongoDB). Use when asked to diagnose slow queries or recommend indexing/schema changes.
---

# Skill: Database Performance Optimizer

**Agent**: backend-developer
**Category**: Development
**Purpose**: Analyze and optimize database queries, indexes, and schema for performance

## Description

Performs comprehensive database performance analysis, identifies slow queries, recommends indexes, optimizes schema design, and implements caching strategies. Supports PostgreSQL, MySQL, MongoDB, and other major databases.

## Input Parameters

- `database_type`: Database system (postgresql, mysql, mongodb)
- `connection_string`: Database connection
- `analysis_duration`: Time to collect metrics (hours)
- `threshold_ms`: Slow query threshold in milliseconds
- `include_explain`: Generate EXPLAIN plans (true/false)

## Workflow

1. Collect query performance metrics
2. Identify N+1 queries
3. Analyze index usage
4. Review table statistics
5. Generate optimization recommendations
6. Create migration scripts
7. Suggest caching strategies

## Output

- Performance analysis report
- Slow query list with optimization suggestions
- Index recommendations
- Schema optimization proposals
- Migration scripts
- Caching implementation guide

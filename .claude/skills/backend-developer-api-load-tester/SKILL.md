---
name: backend-developer-api-load-tester
description: Execute load testing against an API endpoint and report response-time percentiles, throughput, and bottlenecks. Use when asked to load test or benchmark an API under concurrent load.
---

# Skill: API Load Tester

**Agent**: backend-developer
**Category**: Development
**Purpose**: Execute comprehensive load testing and identify performance bottlenecks

## Description

Performs realistic load testing on APIs, simulating various user scenarios, measuring response times, identifying breaking points, and generating detailed performance reports with optimization recommendations.

## Input Parameters

- `api_endpoint`: Base URL of API to test
- `test_scenarios`: JSON file with test scenarios
- `duration`: Test duration in minutes
- `concurrent_users`: Number of concurrent users
- `ramp_up`: Ramp-up period in seconds

## Workflow

1. Parse test scenarios
2. Initialize load testing tools (k6/JMeter)
3. Execute load tests
4. Monitor system metrics
5. Analyze results
6. Identify bottlenecks
7. Generate recommendations

## Output

- Performance test report
- Response time percentiles (p50, p95, p99)
- Throughput metrics
- Error rate analysis
- Resource utilization graphs
- Bottleneck identification
- Optimization recommendations

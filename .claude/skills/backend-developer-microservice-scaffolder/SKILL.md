---
name: backend-developer-microservice-scaffolder
description: Scaffold a production-ready microservice project (API, DB models, auth, tests, Docker, CI/CD). Use when asked to bootstrap a new microservice from scratch.
---

# Skill: Microservice Scaffolder

**Agent**: backend-developer
**Category**: Development
**Purpose**: Generate production-ready microservice scaffolds with best practices built-in

## Description

Creates complete microservice project structure with API endpoints, database models, authentication, testing, Docker configuration, and CI/CD pipelines. Follows 12-factor app principles and includes observability from day one.

## Input Parameters

- `service_name`: Name of the microservice
- `language`: Programming language (node, python, go, java)
- `database`: Database type (postgresql, mongodb, mysql)
- `auth_method`: Authentication (jwt, oauth2, api-key)
- `messaging`: Message queue (kafka, rabbitmq, sqs)
- `framework`: Framework choice (express, fastapi, gin, spring-boot)

## Workflow

1. Generate project structure
2. Configure database connection and ORM
3. Set up authentication middleware
4. Create health check endpoints
5. Add logging and monitoring
6. Configure Docker and docker-compose
7. Setup CI/CD pipeline files
8. Generate comprehensive README

## Output

Complete microservice project with:
- API implementation
- Database migrations
- Unit/integration tests (>80% coverage)
- Docker configuration
- CI/CD pipeline
- Documentation

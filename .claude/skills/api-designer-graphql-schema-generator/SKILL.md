---
name: api-designer-graphql-schema-generator
description: Generate a GraphQL schema (types, queries, mutations, subscriptions, resolvers) from a domain model. Use when asked to design or scaffold a GraphQL API.
---

# Skill: GraphQL Schema Generator

**Agent**: api-designer
**Category**: Development
**Purpose**: Generate comprehensive GraphQL schemas with resolvers, mutations, and subscriptions

## Description

Automates the creation of GraphQL API designs including type definitions, queries, mutations, subscriptions, and resolver specifications. Ensures type safety, efficient queries, and scalable schema architecture.

## Input Parameters

- `domain_model`: Domain model name (e.g., "E-commerce", "Trading")
- `entities`: List of entities to include
- `real_time`: Enable subscriptions (true/false)
- `federation`: Enable federation support (true/false)
- `custom_scalars`: Additional scalar types needed

## Workflow

1. **Domain Analysis**
   - Map domain entities
   - Define relationships
   - Identify access patterns
   - Determine real-time needs

2. **Schema Design**
   - Create type definitions
   - Design query structure
   - Define mutations
   - Add subscriptions
   - Create custom scalars

3. **Resolver Planning**
   - Map resolvers to data sources
   - Plan batching strategy
   - Design caching approach
   - Handle N+1 problems

4. **Federation Setup** (if enabled)
   - Define service boundaries
   - Create federated types
   - Set up references
   - Design gateway config

5. **Documentation Generation**
   - Schema documentation
   - Usage examples
   - Complexity analysis
   - Performance guidelines

## Output

- GraphQL schema (.graphql)
- Resolver specifications
- Federation configuration (if enabled)
- Query examples
- Documentation markdown

## Best Practices

- Use meaningful type names
- Implement proper pagination (connections)
- Add complexity limits
- Enable query depth limiting
- Document all fields
- Provide query examples
- Plan for schema evolution
- Consider performance impact

## Advanced Features

- Automatic relay-style pagination
- Custom directive generation
- Union type optimization
- Interface design patterns
- Input type validation
- Error handling patterns
- Subscription filtering
- Federation v2 support

## Related Skills

- `api-designer-restful-api-generator`

---
name: api-designer-restful-api-generator
description: Generate a REST API design with OpenAPI 3.1 documentation - resource definitions, endpoints, auth flows. Use when asked to design or scaffold a RESTful API from a resource/domain model.
---

# Skill: RESTful API Design Generator

**Agent**: api-designer
**Category**: Development
**Purpose**: Generate comprehensive REST API specifications with OpenAPI 3.1 documentation

## Description

Automates the creation of RESTful API designs including resource definitions, endpoint specifications, authentication flows, and complete OpenAPI documentation. Ensures consistency, best practices, and developer-friendly APIs.

## Input Parameters

- `resource_name`: The primary resource (e.g., "User", "Order", "Product")
- `operations`: List of operations [CREATE, READ, UPDATE, DELETE, LIST]
- `auth_type`: Authentication method (oauth2, jwt, api-key)
- `pagination`: Enable pagination (true/false)
- `versioning`: API version (v1, v2, etc.)

## Workflow

1. **Analyze Resource Requirements**
   - Identify resource attributes
   - Define relationships
   - Determine business rules
   - Map validation constraints

2. **Generate Endpoint Specifications**
   - Create RESTful routes
   - Define HTTP methods
   - Specify request/response schemas
   - Document error responses

3. **Add Authentication & Security**
   - Configure auth flows
   - Define security schemes
   - Set up rate limiting
   - Add CORS policies

4. **Create OpenAPI Documentation**
   - Generate OpenAPI 3.1 spec
   - Add examples for all endpoints
   - Document error codes
   - Include API changelog

5. **Quality Validation**
   - Verify REST principles
   - Check consistency
   - Validate schemas
   - Review best practices

## Output

- OpenAPI 3.1 specification file
- Endpoint documentation
- Authentication guide
- API usage examples
- Postman collection

## Best Practices

- Follow REST naming conventions
- Use proper HTTP status codes
- Implement HATEOAS where appropriate
- Version APIs from the start
- Document all error scenarios
- Provide comprehensive examples
- Enable API playground/sandbox
- Include rate limit headers

## Related Skills

- `api-designer-graphql-schema-generator`
- `api-designer-api-security-audit`

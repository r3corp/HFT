---
name: api-designer-api-security-audit
description: Audit an API design (OpenAPI/GraphQL spec) against the OWASP API Security Top 10 and compliance requirements (PCI-DSS, HIPAA, GDPR). Use when asked to security-review an API spec or check auth/authorization design.
---

# Skill: API Security Audit

**Agent**: api-designer
**Category**: Development
**Purpose**: Comprehensive security review of API design for vulnerabilities and compliance

## Description

Performs thorough security analysis of API designs, identifying vulnerabilities, authentication weaknesses, and compliance gaps. Provides actionable remediation recommendations following OWASP API Security Top 10.

## Input Parameters

- `api_spec`: Path to OpenAPI/GraphQL spec
- `auth_methods`: Authentication methods used
- `compliance`: Required compliance (PCI-DSS, HIPAA, GDPR)
- `environment`: Target environment (dev, staging, prod)
- `threat_model`: Include threat modeling (true/false)

## Workflow

1. **Specification Analysis**
   - Parse API specification
   - Identify endpoints
   - Map data flows
   - Review authentication

2. **OWASP API Security Top 10 Check**
   - Broken Object Level Authorization
   - Broken Authentication
   - Broken Object Property Level Authorization
   - Unrestricted Resource Consumption
   - Broken Function Level Authorization
   - Unrestricted Access to Sensitive Business Flows
   - Server Side Request Forgery
   - Security Misconfiguration
   - Improper Inventory Management
   - Unsafe Consumption of APIs

3. **Authentication & Authorization Review**
   - OAuth 2.0 flow validation
   - JWT configuration review
   - Token expiration policies
   - Refresh token security
   - API key management
   - Rate limiting implementation

4. **Data Protection Analysis**
   - Sensitive data exposure
   - Encryption requirements
   - PII handling
   - Data retention policies
   - GDPR compliance

5. **Threat Modeling** (if enabled)
   - Identify threat actors
   - Map attack vectors
   - Assess impact
   - Prioritize mitigations

6. **Compliance Validation**
   - PCI DSS requirements
   - HIPAA standards
   - GDPR provisions
   - Industry regulations

## Output

- Security audit report
- Vulnerability findings (categorized by severity)
- OWASP Top 10 compliance matrix
- Remediation roadmap
- Threat model diagram (if enabled)
- Compliance gap analysis

## Security Checks

### Authentication
- Strong authentication enforced
- Multi-factor authentication where appropriate
- Token security (storage, transmission, expiration)
- Session management
- Credential exposure prevention

### Authorization
- Granular access control
- Resource-level permissions
- Function-level authorization
- Horizontal privilege escalation prevention
- Vertical privilege escalation prevention

### Data Protection
- Encryption in transit (TLS 1.2+)
- Sensitive data encryption
- PII protection
- Data masking in logs
- Secure key management

### Rate Limiting & DoS Protection
- Request rate limiting
- Payload size limits
- Query complexity limits (GraphQL)
- Connection limits
- Bot protection

### Input Validation
- Schema validation
- SQL injection prevention
- NoSQL injection prevention
- XSS prevention
- Command injection prevention

## Severity Levels

- **CRITICAL**: Immediate remediation required
- **HIGH**: Remediate within 30 days
- **MEDIUM**: Remediate within 90 days
- **LOW**: Remediate when feasible
- **INFO**: Best practice recommendations

## Related Skills

- `api-designer-restful-api-generator`

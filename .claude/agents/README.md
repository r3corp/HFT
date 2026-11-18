# Claude Code Subagents for Fintech Development

## Overview

This directory contains vetted Claude Code subagents optimized for fintech development with emphasis on security, compliance, and enterprise-grade quality.

**Security Status**: ✅ Reviewed and approved for enterprise use
**Review Date**: 2026-03-25
**Source**: https://github.com/Brucesquared2/claude-code-subagents (vetted & customized)

## Directory Structure

```
agents/
├── fintech/          # Financial technology specialists
├── security/         # Security and compliance experts
├── development/      # Core development agents
└── orchestration/    # Multi-agent coordination
```

## Installation

### For Current Project
Copy desired agents to your project:
```bash
cp agents/<category>/<agent-name>.md .claude/agents/
```

### For All Projects (Global)
Copy to user-level directory:
```bash
cp agents/<category>/<agent-name>.md ~/.claude/agents/
```

## Agent Categories

### 🏦 Fintech Specialists (`fintech/`)

#### fintech-engineer.md
**Purpose**: Financial systems development specialist
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- Payment processing systems
- Banking integrations
- Trading platforms
- KYC/AML implementation
- Regulatory compliance
- Risk management systems

#### payment-integration.md
**Purpose**: Payment gateway integration specialist
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- Stripe, PayPal, Adyen integration
- PCI DSS compliance
- Multi-currency support
- Subscription management
- Fraud prevention
- Transaction reconciliation

#### risk-manager.md
**Purpose**: Risk assessment and management expert
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- Risk modeling (VaR, stress testing)
- Compliance monitoring
- Basel III, COSO frameworks
- Operational risk assessment
- Regulatory reporting
- Risk mitigation strategies

### 🔒 Security & Compliance (`security/`)

#### security-auditor.md
**Purpose**: Security assessment and audit specialist
**Tools**: Read, Grep, Glob (read-only)
**Use Cases**:
- SOC 2, ISO 27001 audits
- PCI DSS compliance validation
- Vulnerability assessment
- Access control reviews
- Compliance gap analysis
- Security control testing

#### compliance-auditor.md
**Purpose**: Regulatory compliance specialist
**Tools**: Read, Grep, Glob (read-only)
**Use Cases**:
- GDPR, CCPA compliance
- HIPAA assessment
- Evidence collection
- Audit preparation
- Policy validation
- Third-party risk assessment

#### penetration-tester.md
**Purpose**: Ethical hacking and security testing
**Tools**: Read, Grep, Glob, Bash
**Use Cases**:
- Vulnerability discovery
- Security testing (authorized only)
- OWASP Top 10 validation
- API security testing
- Infrastructure testing
⚠️ **Note**: Use only in authorized testing environments

#### code-reviewer.md
**Purpose**: Code quality and security review
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- Security vulnerability detection
- Code quality assessment
- Performance analysis
- Best practices enforcement
- Technical debt identification
- Test coverage review

### 💻 Development (`development/`)

#### mcp-developer.md
**Purpose**: Model Context Protocol specialist
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- MCP server development
- AI tool integration
- Protocol compliance
- SDK implementation
- External system integration

#### backend-developer.md
**Purpose**: Server-side development specialist
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- API development
- Database design
- Microservices architecture
- Authentication/authorization
- Performance optimization

#### api-designer.md
**Purpose**: API architecture specialist
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- REST/GraphQL API design
- OpenAPI specification
- API security
- Versioning strategies
- Documentation

#### fullstack-developer.md
**Purpose**: End-to-end development specialist
**Tools**: Read, Write, Edit, Bash, Glob, Grep
**Use Cases**:
- Full application development
- Frontend + Backend integration
- Database to UI
- Complete feature delivery

### 🤖 Orchestration (`orchestration/`)

#### multi-agent-coordinator.md
**Purpose**: Complex multi-agent workflow management
**Tools**: Agent (for spawning subagents)
**Use Cases**:
- Coordinate multiple specialized agents
- Complex task decomposition
- Parallel workstream management
- Agent communication

#### error-coordinator.md
**Purpose**: Error handling and recovery specialist
**Tools**: Read, Grep, Glob, Bash
**Use Cases**:
- Error pattern analysis
- Recovery strategy coordination
- Root cause investigation
- Multi-system error handling

#### context-manager.md
**Purpose**: Context optimization and management
**Tools**: Read, Grep, Glob
**Use Cases**:
- Context window optimization
- Information prioritization
- Memory management
- Context summarization

## Security Guidelines

### Tool Permission Levels

| Tool Access | Risk Level | Use Cases |
|------------|------------|-----------|
| Read, Grep, Glob | 🟢 Low | Analysis, review, audit |
| + Write, Edit | 🟡 Medium | Development, documentation |
| + Bash | 🔴 High | Execution, deployment, testing |

### Fintech Best Practices

1. **Always Review Before Execute**
   - Review all Bash commands before execution
   - Validate database modifications
   - Check external API calls

2. **Least Privilege Principle**
   - Use read-only agents for audits
   - Restrict Bash access when possible
   - Monitor agent actions

3. **Data Protection**
   - Never hardcode credentials
   - Use environment variables
   - Encrypt sensitive data

4. **Compliance First**
   - Follow PCI DSS requirements
   - Maintain audit trails
   - Document all changes

5. **Testing Environments**
   - Use penetration-tester only in authorized test environments
   - Never test in production
   - Document all security testing

## Usage Examples

### Starting a Fintech Project
```
> Have the fintech-engineer analyze our payment processing requirements
```

### Security Audit
```
> Ask security-auditor to review our PCI DSS compliance
> Have compliance-auditor assess our GDPR implementation
```

### Code Review
```
> Let code-reviewer examine the payment gateway integration for security issues
```

### MCP Integration
```
> Have mcp-developer create an MCP server for our banking API
```

### Multi-Agent Coordination
```
> Use multi-agent-coordinator to orchestrate:
  - security-auditor for compliance review
  - code-reviewer for code quality
  - penetration-tester for security validation
```

## Customization

### Modifying Agents
1. Copy agent to your project: `.claude/agents/`
2. Edit the markdown file
3. Customize tools, checklists, or workflows
4. Test thoroughly before production use

### Adding Company-Specific Requirements
Edit the agent file and add sections:
- Company security policies
- Internal compliance requirements
- Custom tool access
- Specific frameworks or standards

## Monitoring & Audit

### Agent Usage Tracking
- Log all agent invocations
- Review agent actions in version control
- Monitor Bash command execution
- Track file modifications

### Audit Trail
- All changes committed to git
- Agent decisions documented
- Security reviews logged
- Compliance evidence collected

## Support & Updates

### Internal Support
- Review SECURITY_REVIEW.md for security assessment
- Contact security team for questions
- Report issues to development lead

### Updates
- Quarterly security review of agents
- Update agents with new compliance requirements
- Sync with upstream repository (vetted changes only)
- Maintain private fork for customizations

## Compliance Certifications

These agents support development for:
- ✅ PCI DSS Level 1
- ✅ SOC 2 Type II
- ✅ ISO 27001/27002
- ✅ GDPR compliance
- ✅ CCPA/CPRA
- ✅ HIPAA/HITECH

## License

Source: MIT License (VoltAgent/awesome-claude-code-subagents)
Internal modifications: Proprietary

---

**Maintained by**: DevOps & Security Team
**Last Updated**: 2026-03-25
**Next Review**: Q2 2026

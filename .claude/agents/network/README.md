# Network Engineering Agents for TDA

## Overview

Specialized Claude Code agents for lead network engineers working with **Arista**, **F5**, **Palo Alto**, and **Cloudflare** infrastructure at TDA. These agents provide expert-level guidance for enterprise fintech network architecture, automation, and operations.

**Technology Stack**: Arista EOS, F5 BIG-IP, Palo Alto PAN-OS, Cloudflare Edge
**Environment**: Enterprise fintech / Trading infrastructure
**Security Level**: High - PCI DSS, Zero-Trust, Financial regulatory compliance

## Agents

### 🔵 arista-specialist.md
**Vendor**: Arista Networks
**Focus**: BGP/EVPN, VXLAN overlays, CloudVision automation

**Expertise**:
- Arista EOS configuration and optimization
- BGP leaf-spine fabric design
- EVPN-VXLAN overlay networks
- CloudVision Portal (CVP) automation
- Zero-Touch Provisioning (ZTP)
- MLAG high availability
- eAPI/Python automation
- Network telemetry streaming

**Use Cases**:
```
> Have arista-specialist design a BGP EVPN fabric for our trading floor
> Ask arista-specialist to troubleshoot VXLAN tunnel issues
> Let arista-specialist create CloudVision configlets for automated deployment
> Have arista-specialist optimize BGP routing for low-latency trading
```

**Key Features**:
- Data center switching architecture
- Multi-tenant EVPN-VXLAN
- Anycast gateway (VARP)
- Streaming telemetry (gNMI)
- ZTP automation
- MACsec encryption
- CloudVision integration
- Ansible/Terraform automation

**TDA Integration**:
- BGP peering with F5 load balancers
- VXLAN gateway integration with firewalls
- Low-latency paths for HFT systems
- Market data multicast optimization
- Integration with Palo Alto via BGP

---

### 🟠 f5-specialist.md
**Vendor**: F5 Networks
**Focus**: BIG-IP LTM/GTM/ASM, iRules, application delivery

**Expertise**:
- F5 BIG-IP configuration and optimization
- Local Traffic Manager (LTM) load balancing
- Global Traffic Manager (GTM/DNS)
- Application Security Manager (ASM/WAF)
- SSL/TLS offload and optimization
- iRules programming (Tcl)
- High availability (Active/Standby, Active/Active)
- AS3 declarative automation

**Use Cases**:
```
> Have f5-specialist configure load balancing for our trading API
> Ask f5-specialist to optimize SSL performance for high-volume transactions
> Let f5-specialist create iRules for custom traffic routing
> Have f5-specialist implement WAF policies for PCI DSS compliance
```

**Key Features**:
- Full proxy architecture
- Layer 7 load balancing
- SSL/TLS acceleration
- Session persistence
- Health monitoring
- Connection pooling
- HTTP compression
- DDoS protection

**TDA Integration**:
- VXLAN integration with Arista
- BGP dynamic routing
- Service chaining with Palo Alto
- Ultra-low latency for trading apps
- PCI DSS compliance
- API rate limiting
- Transaction logging

---

### 🔴 palo-alto-specialist.md
**Vendor**: Palo Alto Networks
**Focus**: Next-gen firewalls, App-ID, threat prevention

**Expertise**:
- Palo Alto PA-Series firewall configuration
- App-ID application visibility
- User-ID integration
- SSL/TLS decryption
- Threat prevention (IPS/IDS/Antivirus)
- WildFire malware analysis
- GlobalProtect VPN
- Panorama centralized management

**Use Cases**:
```
> Have palo-alto-specialist design zero-trust micro-segmentation
> Ask palo-alto-specialist to configure SSL decryption policies
> Let palo-alto-specialist create security policies for trading apps
> Have palo-alto-specialist implement PCI DSS segmentation
```

**Key Features**:
- Next-generation firewall
- App-ID technology
- User-ID integration
- SSL decryption
- Advanced threat prevention
- URL filtering
- DNS security
- GlobalProtect VPN

**TDA Integration**:
- BGP routing with Arista
- Service chaining with F5
- Zero-trust architecture
- PCI DSS compliance
- Financial app protection
- Threat intelligence
- SIEM integration

---

### 🟡 cloudflare-specialist.md
**Vendor**: Cloudflare
**Focus**: CDN, WAF, DDoS protection, Workers, Zero Trust

**Expertise**:
- Cloudflare CDN and caching optimization
- WAF (Web Application Firewall) rules
- DDoS protection and mitigation
- Cloudflare Workers (edge computing)
- Zero Trust / ZTNA architecture
- DNS management (fastest DNS)
- Load Balancing with health checks
- SSL/TLS certificate management

**Use Cases**:
```
> Have cloudflare-specialist configure CDN for our trading platform
> Ask cloudflare-specialist to create WAF rules for API protection
> Let cloudflare-specialist deploy Workers for edge authentication
> Have cloudflare-specialist setup Zero Trust for remote traders
> Have cloudflare-specialist optimize cache rules for performance
```

**Key Features**:
- Global edge network (300+ data centers)
- Anycast DNS routing
- Edge caching and optimization
- DDoS mitigation (automatic)
- Bot management
- Edge computing (Workers)
- Zero Trust Network Access
- API-driven automation (Terraform)

**TDA Integration**:
- Front-end CDN for trading applications
- Global API distribution
- DDoS protection layer (before Palo Alto)
- Edge authentication via Workers
- Geographic load balancing
- SSL/TLS termination at edge
- WAF as first line of defense
- Workers for business logic execution

**Advanced Capabilities**:
- Workers KV storage
- Durable Objects (stateful edge)
- R2 object storage
- Stream video platform
- Argo Smart Routing
- Load Balancing with geo-steering
- Rate limiting per endpoint
- Terraform/API automation

**Security Features**:
- OWASP Core Ruleset
- Custom WAF rules
- Advanced rate limiting
- Bot Management (Enterprise)
- API Shield
- Certificate management
- DNSSEC validation
- Zero Trust policies
- Page Shield (client-side protection)

---

## Installation

### Install All Network Agents
```bash
# Global installation (all projects)
cp C:/Users/bhoskins/claude-code-config/agents/network/*.md ~/.claude/agents/

# Project-specific
mkdir -p .claude/agents
cp C:/Users/bhoskins/claude-code-config/agents/network/*.md .claude/agents/
```

### Install Individual Agents
```bash
# Just Arista
cp agents/network/arista-specialist.md ~/.claude/agents/

# Just F5
cp agents/network/f5-specialist.md ~/.claude/agents/

# Just Palo Alto
cp agents/network/palo-alto-specialist.md ~/.claude/agents/
```

## Usage Patterns

### Network Architecture Design
```
> Use multi-agent-coordinator to design a complete network:
  1. arista-specialist: Design BGP EVPN fabric
  2. f5-specialist: Configure application delivery
  3. palo-alto-specialist: Implement security architecture
  4. network-engineer: Validate overall design
```

### Troubleshooting Network Issues
```
> Have arista-specialist check BGP peering issues
> Ask f5-specialist to troubleshoot SSL handshake failures
> Let palo-alto-specialist investigate blocked traffic
```

### Automation and Configuration Management
```
> Have arista-specialist create Ansible playbooks for EOS configuration
> Ask f5-specialist to generate AS3 declarations
> Let palo-alto-specialist create Terraform configurations
```

### Security and Compliance
```
> Ask palo-alto-specialist to audit security policies for PCI DSS
> Have f5-specialist review WAF configuration for compliance
> Let arista-specialist implement MACsec encryption
```

### Performance Optimization
```
> Have arista-specialist optimize BGP routing for latency
> Ask f5-specialist to tune SSL performance
> Let palo-alto-specialist analyze App-ID performance
```

## Multi-Vendor Integration Scenarios

### Trading Platform Architecture
```
> Design an integrated trading platform:
  - arista-specialist: Low-latency switching fabric
  - f5-specialist: Load balancing and SSL offload
  - palo-alto-specialist: Security segmentation
  - network-engineer: End-to-end validation
```

### PCI DSS Compliance
```
> Implement PCI DSS compliant network:
  - palo-alto-specialist: Security zones and policies
  - f5-specialist: WAF and SSL encryption
  - arista-specialist: Network segmentation via EVPN
  - compliance-auditor: Validate compliance
```

### High Availability Design
```
> Create HA network architecture:
  - arista-specialist: MLAG and EVPN redundancy
  - f5-specialist: Active/Standby HA configuration
  - palo-alto-specialist: Active/Passive HA
  - sre-engineer: Validate reliability
```

## TDA-Specific Use Cases

### Market Data Infrastructure
```
> Have arista-specialist configure multicast routing for market data feeds
> Ask f5-specialist to load balance market data API endpoints
> Let palo-alto-specialist secure market data access
```

### Trading System Network
```
> Optimize network for high-frequency trading:
  - Ultra-low latency paths (arista-specialist)
  - Session affinity and persistence (f5-specialist)
  - Micro-segmentation for trading apps (palo-alto-specialist)
```

### Remote Trader Access
```
> Configure secure remote access for traders:
  - arista-specialist: VXLAN tunnels
  - f5-specialist: APM or LTM for remote desktop
  - palo-alto-specialist: GlobalProtect VPN
```

### API Gateway Infrastructure
```
> Build secure API gateway:
  - f5-specialist: API rate limiting and throttling
  - palo-alto-specialist: API security policies
  - arista-specialist: ECMP load distribution
```

## Best Practices

### Configuration Management
1. **Version Control**: Store all configs in git
2. **Automation**: Use Ansible, Terraform, or vendor APIs
3. **Testing**: Lab environment before production
4. **Documentation**: Document all changes
5. **Peer Review**: Have agents review each other's work

### Security
1. **Zero-Trust**: Implement micro-segmentation
2. **Encryption**: MACsec, SSL/TLS everywhere
3. **Monitoring**: Comprehensive logging and SIEM
4. **Compliance**: Regular PCI DSS audits
5. **Patching**: Regular security updates

### High Availability
1. **Redundancy**: No single points of failure
2. **Failover**: Automated failover testing
3. **Monitoring**: Proactive health checks
4. **Documentation**: HA procedures documented
5. **Testing**: Regular DR drills

### Performance
1. **Latency**: Monitor and optimize continuously
2. **Capacity**: Regular capacity planning
3. **Tuning**: Platform-specific optimization
4. **Baselines**: Establish performance baselines
5. **Trending**: Track performance over time

## Troubleshooting Workflows

### Network Outage
```
> Multi-agent incident response:
  1. incident-responder: Coordinate response
  2. arista-specialist: Check switching fabric
  3. f5-specialist: Verify load balancer health
  4. palo-alto-specialist: Check firewall policies
  5. network-engineer: Overall coordination
```

### Performance Degradation
```
> Performance troubleshooting:
  1. sre-engineer: Analyze metrics and SLOs
  2. arista-specialist: Check for packet drops
  3. f5-specialist: Review connection pooling
  4. palo-alto-specialist: Verify decryption impact
```

### Security Incident
```
> Security incident response:
  1. incident-responder: Lead investigation
  2. palo-alto-specialist: Analyze threat logs
  3. security-engineer: Assess impact
  4. network-engineer: Implement containment
```

## Integration with Other Agents

These network agents work seamlessly with:

- **security-auditor**: Security compliance validation
- **compliance-auditor**: PCI DSS, regulatory compliance
- **incident-responder**: Network incident management
- **sre-engineer**: Network reliability engineering
- **network-engineer**: General network architecture
- **security-engineer**: Infrastructure security
- **devops-engineer**: Network automation CI/CD

## Tool Access

All network agents have:
- **Read**: Review configurations and logs
- **Write**: Create configuration files
- **Edit**: Modify existing configurations
- **Bash**: Execute CLI commands (review before running!)
- **Glob**: Find configuration files
- **Grep**: Search logs and configs

⚠️ **Security Note**: Always review Bash commands before execution, especially in production environments.

## Learning Resources

### Arista
- [Arista EOS Documentation](https://www.arista.com/en/support/product-documentation)
- [CloudVision Portal Guide](https://www.arista.com/en/products/eos/cvp)
- [Arista Automation](https://aristanetworks.github.io/)

### F5
- [F5 BIG-IP Documentation](https://support.f5.com/)
- [DevCentral Community](https://devcentral.f5.com/)
- [F5 Automation Toolchain](https://clouddocs.f5.com/)

### Palo Alto
- [Palo Alto Tech Docs](https://docs.paloaltonetworks.com/)
- [Live Community](https://live.paloaltonetworks.com/)
- [PAN-OS Automation](https://github.com/PaloAltoNetworks)

## Support

- **Network Issues**: Use incident-responder agent
- **Configuration Questions**: Ask vendor-specific agent
- **Security Concerns**: Involve palo-alto-specialist and security-engineer
- **Performance Problems**: Engage sre-engineer

---

**Maintained by**: Network Engineering Team
**Technology Focus**: Arista, F5, Palo Alto
**Environment**: TDA Enterprise Fintech
**Last Updated**: 2026-03-25

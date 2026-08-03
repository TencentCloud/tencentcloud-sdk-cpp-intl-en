/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATERULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATERULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Complete content of the Internet Boundary Access Control Rule, shared for adding new and modification. When projects are added, default values are handled according to field descriptions; during modification, writable content is completely replaced, omitted writable fields do not inherit old values, and system management fields are unaffected.
                */
                class CreateRuleItem : public AbstractModel
                {
                public:
                    CreateRuleItem();
                    ~CreateRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule direction: 1 means inbound, 0 means outbound; other integers or omitted values result in verification failure. Direction also determines the available combinations of SourceType, TargetType, Scope, and Protocol.
                     * @return Direction Rule direction: 1 means inbound, 0 means outbound; other integers or omitted values result in verification failure. Direction also determines the available combinations of SourceType, TargetType, Scope, and Protocol.
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Rule direction: 1 means inbound, 0 means outbound; other integers or omitted values result in verification failure. Direction also determines the available combinations of SourceType, TargetType, Scope, and Protocol.
                     * @param _direction Rule direction: 1 means inbound, 0 means outbound; other integers or omitted values result in verification failure. Direction also determines the available combinations of SourceType, TargetType, Scope, and Protocol.
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Rule order, required. Pass -1 to append to the end of the current direction; a positive serial number indicates insertion at the corresponding position and postponement of subsequent rules; treat 0 as 1, other negative numbers and out-of-scope values should not be used. When a new request contains multiple rules, Direction must be the same; pass all -1 for appending, pass consecutive incremental positive serial numbers in request order for insertion. A modify request accepts only one rule.
                     * @return OrderIndex Rule order, required. Pass -1 to append to the end of the current direction; a positive serial number indicates insertion at the corresponding position and postponement of subsequent rules; treat 0 as 1, other negative numbers and out-of-scope values should not be used. When a new request contains multiple rules, Direction must be the same; pass all -1 for appending, pass consecutive incremental positive serial numbers in request order for insertion. A modify request accepts only one rule.
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置Rule order, required. Pass -1 to append to the end of the current direction; a positive serial number indicates insertion at the corresponding position and postponement of subsequent rules; treat 0 as 1, other negative numbers and out-of-scope values should not be used. When a new request contains multiple rules, Direction must be the same; pass all -1 for appending, pass consecutive incremental positive serial numbers in request order for insertion. A modify request accepts only one rule.
                     * @param _orderIndex Rule order, required. Pass -1 to append to the end of the current direction; a positive serial number indicates insertion at the corresponding position and postponement of subsequent rules; treat 0 as 1, other negative numbers and out-of-scope values should not be used. When a new request contains multiple rules, Direction must be the same; pass all -1 for appending, pass consecutive incremental positive serial numbers in request order for insertion. A modify request accepts only one rule.
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取Destination port. Ignore this field and set it to an empty string when Protocol is ICMP. For other protocols, you must provide a parse string. You can enter a positive integer single port or a "start/end" range separated with commas. The starting value must not be larger than the end value. -1/-1 indicates all ports. FTP only accepts one positive integer. For domain or domain name template targets within the side or all scope, only -1/-1 or 0/65535 are accepted.
                     * @return Port Destination port. Ignore this field and set it to an empty string when Protocol is ICMP. For other protocols, you must provide a parse string. You can enter a positive integer single port or a "start/end" range separated with commas. The starting value must not be larger than the end value. -1/-1 indicates all ports. FTP only accepts one positive integer. For domain or domain name template targets within the side or all scope, only -1/-1 or 0/65535 are accepted.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Destination port. Ignore this field and set it to an empty string when Protocol is ICMP. For other protocols, you must provide a parse string. You can enter a positive integer single port or a "start/end" range separated with commas. The starting value must not be larger than the end value. -1/-1 indicates all ports. FTP only accepts one positive integer. For domain or domain name template targets within the side or all scope, only -1/-1 or 0/65535 are accepted.
                     * @param _port Destination port. Ignore this field and set it to an empty string when Protocol is ICMP. For other protocols, you must provide a parse string. You can enter a positive integer single port or a "start/end" range separated with commas. The starting value must not be larger than the end value. -1/-1 indicates all ports. FTP only accepts one positive integer. For domain or domain name template targets within the side or all scope, only -1/-1 or 0/65535 are accepted.
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol, case-insensitive parsing. Layer-4 values TCP, UDP, ICMP, ICMPV6, ANY are normalized to uppercase. Application-layer values HTTP, HTTPS, HTTP/HTTPS, SMTP, SMTPS, SMTP/SMTPS, FTP, DNS, TLS/SSL and aliases domain, TLS, SSL are normalized to corresponding standard values. ANY means no protocol limitation, not an empty Protocol. It belongs to both parseable Layer-4 protocols and application protocols. domain, TLS, SSL are all normalized to TLS/SSL. The target for domain or domain name template accepts the above application-layer protocols and ANY, but does not accept FTP and other Layer-4 protocols. dnsparse and domainiptwoverify only accept TCP or UDP and only support serial. Other targets in the public cloud environment do not accept application-layer protocols outside of FTP and ANY. Under the side or all scope, inbound only accepts TCP, outbound only accepts TCP, HTTP/HTTPS, or TLS/SSL. When DNS is used for a non-domain target and the target is not *, the destination content must also be a rule list of valid non-IP domain names. When using a protocol port template, each group of protocol and port in the template also executes these integration validations.
                     * @return Protocol Protocol, case-insensitive parsing. Layer-4 values TCP, UDP, ICMP, ICMPV6, ANY are normalized to uppercase. Application-layer values HTTP, HTTPS, HTTP/HTTPS, SMTP, SMTPS, SMTP/SMTPS, FTP, DNS, TLS/SSL and aliases domain, TLS, SSL are normalized to corresponding standard values. ANY means no protocol limitation, not an empty Protocol. It belongs to both parseable Layer-4 protocols and application protocols. domain, TLS, SSL are all normalized to TLS/SSL. The target for domain or domain name template accepts the above application-layer protocols and ANY, but does not accept FTP and other Layer-4 protocols. dnsparse and domainiptwoverify only accept TCP or UDP and only support serial. Other targets in the public cloud environment do not accept application-layer protocols outside of FTP and ANY. Under the side or all scope, inbound only accepts TCP, outbound only accepts TCP, HTTP/HTTPS, or TLS/SSL. When DNS is used for a non-domain target and the target is not *, the destination content must also be a rule list of valid non-IP domain names. When using a protocol port template, each group of protocol and port in the template also executes these integration validations.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol, case-insensitive parsing. Layer-4 values TCP, UDP, ICMP, ICMPV6, ANY are normalized to uppercase. Application-layer values HTTP, HTTPS, HTTP/HTTPS, SMTP, SMTPS, SMTP/SMTPS, FTP, DNS, TLS/SSL and aliases domain, TLS, SSL are normalized to corresponding standard values. ANY means no protocol limitation, not an empty Protocol. It belongs to both parseable Layer-4 protocols and application protocols. domain, TLS, SSL are all normalized to TLS/SSL. The target for domain or domain name template accepts the above application-layer protocols and ANY, but does not accept FTP and other Layer-4 protocols. dnsparse and domainiptwoverify only accept TCP or UDP and only support serial. Other targets in the public cloud environment do not accept application-layer protocols outside of FTP and ANY. Under the side or all scope, inbound only accepts TCP, outbound only accepts TCP, HTTP/HTTPS, or TLS/SSL. When DNS is used for a non-domain target and the target is not *, the destination content must also be a rule list of valid non-IP domain names. When using a protocol port template, each group of protocol and port in the template also executes these integration validations.
                     * @param _protocol Protocol, case-insensitive parsing. Layer-4 values TCP, UDP, ICMP, ICMPV6, ANY are normalized to uppercase. Application-layer values HTTP, HTTPS, HTTP/HTTPS, SMTP, SMTPS, SMTP/SMTPS, FTP, DNS, TLS/SSL and aliases domain, TLS, SSL are normalized to corresponding standard values. ANY means no protocol limitation, not an empty Protocol. It belongs to both parseable Layer-4 protocols and application protocols. domain, TLS, SSL are all normalized to TLS/SSL. The target for domain or domain name template accepts the above application-layer protocols and ANY, but does not accept FTP and other Layer-4 protocols. dnsparse and domainiptwoverify only accept TCP or UDP and only support serial. Other targets in the public cloud environment do not accept application-layer protocols outside of FTP and ANY. Under the side or all scope, inbound only accepts TCP, outbound only accepts TCP, HTTP/HTTPS, or TLS/SSL. When DNS is used for a non-domain target and the target is not *, the destination content must also be a rule list of valid non-IP domain names. When using a protocol port template, each group of protocol and port in the template also executes these integration validations.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Traffic processing actions are case-insensitive. accept means allow, drop means deny, and log means observe. isolateinaccept means allow access to allowlisted traffic for isolated assets, isolateindrop means block access to other traffic for isolated assets, isolateoutaccept means allow isolated assets to access allowlisted targets, and isolateoutdrop means block isolated assets from accessing other targets. drop and its deny alias also verify whether the current account has Internet boundary blocking capability.
                     * @return RuleAction Traffic processing actions are case-insensitive. accept means allow, drop means deny, and log means observe. isolateinaccept means allow access to allowlisted traffic for isolated assets, isolateindrop means block access to other traffic for isolated assets, isolateoutaccept means allow isolated assets to access allowlisted targets, and isolateoutdrop means block isolated assets from accessing other targets. drop and its deny alias also verify whether the current account has Internet boundary blocking capability.
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Traffic processing actions are case-insensitive. accept means allow, drop means deny, and log means observe. isolateinaccept means allow access to allowlisted traffic for isolated assets, isolateindrop means block access to other traffic for isolated assets, isolateoutaccept means allow isolated assets to access allowlisted targets, and isolateoutdrop means block isolated assets from accessing other targets. drop and its deny alias also verify whether the current account has Internet boundary blocking capability.
                     * @param _ruleAction Traffic processing actions are case-insensitive. accept means allow, drop means deny, and log means observe. isolateinaccept means allow access to allowlisted traffic for isolated assets, isolateindrop means block access to other traffic for isolated assets, isolateoutaccept means allow isolated assets to access allowlisted targets, and isolateoutdrop means block isolated assets from accessing other targets. drop and its deny alias also verify whether the current account has Internet boundary blocking capability.
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取Access the source content. For ip or net, use a valid IP/CIDR list, with a maximum of 10 items in a regular list. For template, use a parseable address template identifier of the current account. When Direction=0, use the corresponding resource identifier for instance, group, and tag. Among them, the instance must be resolvable to a public IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. When Direction=1, use a CSV of region codes for location, which must pass the verification of the new regional rules capability of the current account. For vendor, use a CSV of tencent, aliyun, aws, huawei, azure, or all. location and vendor are converted to region or manufacturer matchmaking information when saved.
                     * @return SourceContent Access the source content. For ip or net, use a valid IP/CIDR list, with a maximum of 10 items in a regular list. For template, use a parseable address template identifier of the current account. When Direction=0, use the corresponding resource identifier for instance, group, and tag. Among them, the instance must be resolvable to a public IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. When Direction=1, use a CSV of region codes for location, which must pass the verification of the new regional rules capability of the current account. For vendor, use a CSV of tencent, aliyun, aws, huawei, azure, or all. location and vendor are converted to region or manufacturer matchmaking information when saved.
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Access the source content. For ip or net, use a valid IP/CIDR list, with a maximum of 10 items in a regular list. For template, use a parseable address template identifier of the current account. When Direction=0, use the corresponding resource identifier for instance, group, and tag. Among them, the instance must be resolvable to a public IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. When Direction=1, use a CSV of region codes for location, which must pass the verification of the new regional rules capability of the current account. For vendor, use a CSV of tencent, aliyun, aws, huawei, azure, or all. location and vendor are converted to region or manufacturer matchmaking information when saved.
                     * @param _sourceContent Access the source content. For ip or net, use a valid IP/CIDR list, with a maximum of 10 items in a regular list. For template, use a parseable address template identifier of the current account. When Direction=0, use the corresponding resource identifier for instance, group, and tag. Among them, the instance must be resolvable to a public IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. When Direction=1, use a CSV of region codes for location, which must pass the verification of the new regional rules capability of the current account. For vendor, use a CSV of tencent, aliyun, aws, huawei, azure, or all. location and vendor are converted to region or manufacturer matchmaking information when saved.
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取Access source type, case-insensitive parsing. net and ip both indicate IP/CIDR, template refers to address template, instance refers to asset instance, group refers to asset group, tag refers to resource tag, location refers to region, vendor refers to cloud service provider. Direction=1 accepts ip, net, template, location, vendor; Direction=0 accepts ip, net, template, instance, group, tag. ip and net are handled as the same type.
                     * @return SourceType Access source type, case-insensitive parsing. net and ip both indicate IP/CIDR, template refers to address template, instance refers to asset instance, group refers to asset group, tag refers to resource tag, location refers to region, vendor refers to cloud service provider. Direction=1 accepts ip, net, template, location, vendor; Direction=0 accepts ip, net, template, instance, group, tag. ip and net are handled as the same type.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Access source type, case-insensitive parsing. net and ip both indicate IP/CIDR, template refers to address template, instance refers to asset instance, group refers to asset group, tag refers to resource tag, location refers to region, vendor refers to cloud service provider. Direction=1 accepts ip, net, template, location, vendor; Direction=0 accepts ip, net, template, instance, group, tag. ip and net are handled as the same type.
                     * @param _sourceType Access source type, case-insensitive parsing. net and ip both indicate IP/CIDR, template refers to address template, instance refers to asset instance, group refers to asset group, tag refers to resource tag, location refers to region, vendor refers to cloud service provider. Direction=1 accepts ip, net, template, location, vendor; Direction=0 accepts ip, net, template, instance, group, tag. ip and net are handled as the same type.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Access the destination content. For ip or net, use a valid IP/CIDR list. For domain, use a valid IP, standard domain name, or wildcard domain name list, and also accept a single *. The regular list supports up to 10 items, and wildcard domain names support up to 5 levels. When domain is used with the DNS protocol, IP is not accepted. For dnsparse, use a single valid domain name, wildcard domain name, or an mb_ domain name template that can be resolved by the current account. For domainiptwoverify, use a single valid domain name without wildcards or such a template. Both do not accept a single *, IP, comma-separated list, or wildcard domain names within the segment. For serial domain segments with wildcards and domainiptwoverify templates, the current environment must support the corresponding capacity. For template, use the address template identifier that can be resolved by the current account. For Direction=1, instance, group, and tag use the corresponding resource identifiers. The instance must be resolvable to a public network IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. For Direction=0, location uses region code CSV, and vendor uses CSV of tencent, aliyun, aws, huawei, azure, or all. The standardized content has a maximum length of 1023.
                     * @return TargetContent Access the destination content. For ip or net, use a valid IP/CIDR list. For domain, use a valid IP, standard domain name, or wildcard domain name list, and also accept a single *. The regular list supports up to 10 items, and wildcard domain names support up to 5 levels. When domain is used with the DNS protocol, IP is not accepted. For dnsparse, use a single valid domain name, wildcard domain name, or an mb_ domain name template that can be resolved by the current account. For domainiptwoverify, use a single valid domain name without wildcards or such a template. Both do not accept a single *, IP, comma-separated list, or wildcard domain names within the segment. For serial domain segments with wildcards and domainiptwoverify templates, the current environment must support the corresponding capacity. For template, use the address template identifier that can be resolved by the current account. For Direction=1, instance, group, and tag use the corresponding resource identifiers. The instance must be resolvable to a public network IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. For Direction=0, location uses region code CSV, and vendor uses CSV of tencent, aliyun, aws, huawei, azure, or all. The standardized content has a maximum length of 1023.
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置Access the destination content. For ip or net, use a valid IP/CIDR list. For domain, use a valid IP, standard domain name, or wildcard domain name list, and also accept a single *. The regular list supports up to 10 items, and wildcard domain names support up to 5 levels. When domain is used with the DNS protocol, IP is not accepted. For dnsparse, use a single valid domain name, wildcard domain name, or an mb_ domain name template that can be resolved by the current account. For domainiptwoverify, use a single valid domain name without wildcards or such a template. Both do not accept a single *, IP, comma-separated list, or wildcard domain names within the segment. For serial domain segments with wildcards and domainiptwoverify templates, the current environment must support the corresponding capacity. For template, use the address template identifier that can be resolved by the current account. For Direction=1, instance, group, and tag use the corresponding resource identifiers. The instance must be resolvable to a public network IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. For Direction=0, location uses region code CSV, and vendor uses CSV of tencent, aliyun, aws, huawei, azure, or all. The standardized content has a maximum length of 1023.
                     * @param _targetContent Access the destination content. For ip or net, use a valid IP/CIDR list. For domain, use a valid IP, standard domain name, or wildcard domain name list, and also accept a single *. The regular list supports up to 10 items, and wildcard domain names support up to 5 levels. When domain is used with the DNS protocol, IP is not accepted. For dnsparse, use a single valid domain name, wildcard domain name, or an mb_ domain name template that can be resolved by the current account. For domainiptwoverify, use a single valid domain name without wildcards or such a template. Both do not accept a single *, IP, comma-separated list, or wildcard domain names within the segment. For serial domain segments with wildcards and domainiptwoverify templates, the current environment must support the corresponding capacity. For template, use the address template identifier that can be resolved by the current account. For Direction=1, instance, group, and tag use the corresponding resource identifiers. The instance must be resolvable to a public network IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. For Direction=0, location uses region code CSV, and vendor uses CSV of tencent, aliyun, aws, huawei, azure, or all. The standardized content has a maximum length of 1023.
                     * 
                     */
                    void SetTargetContent(const std::string& _targetContent);

                    /**
                     * 判断参数 TargetContent 是否已赋值
                     * @return TargetContent 是否已赋值
                     * 
                     */
                    bool TargetContentHasBeenSet() const;

                    /**
                     * 获取Access purpose type. Case-insensitive parsing. net and ip both indicate IP/CIDR, template indicates address template, instance indicates asset instance, group indicates asset group, tag indicates resource tag, location indicates region, vendor indicates cloud service provider, domain indicates FQDN matching (content can also be IP or *), dnsparse indicates loose matching: Host/SNI matches the domain name, or the destination IP belongs to the IP range of the current DNS resolution result of that domain name, hit if any condition is met; domainiptwoverify indicates strict matching: the above two conditions require simultaneous satisfaction. Direction=1 accepts ip, net, template, domain, instance, group, tag; Direction=0 accepts ip, net, template, domain, dnsparse, domainiptwoverify, location, or vendor.
                     * @return TargetType Access purpose type. Case-insensitive parsing. net and ip both indicate IP/CIDR, template indicates address template, instance indicates asset instance, group indicates asset group, tag indicates resource tag, location indicates region, vendor indicates cloud service provider, domain indicates FQDN matching (content can also be IP or *), dnsparse indicates loose matching: Host/SNI matches the domain name, or the destination IP belongs to the IP range of the current DNS resolution result of that domain name, hit if any condition is met; domainiptwoverify indicates strict matching: the above two conditions require simultaneous satisfaction. Direction=1 accepts ip, net, template, domain, instance, group, tag; Direction=0 accepts ip, net, template, domain, dnsparse, domainiptwoverify, location, or vendor.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Access purpose type. Case-insensitive parsing. net and ip both indicate IP/CIDR, template indicates address template, instance indicates asset instance, group indicates asset group, tag indicates resource tag, location indicates region, vendor indicates cloud service provider, domain indicates FQDN matching (content can also be IP or *), dnsparse indicates loose matching: Host/SNI matches the domain name, or the destination IP belongs to the IP range of the current DNS resolution result of that domain name, hit if any condition is met; domainiptwoverify indicates strict matching: the above two conditions require simultaneous satisfaction. Direction=1 accepts ip, net, template, domain, instance, group, tag; Direction=0 accepts ip, net, template, domain, dnsparse, domainiptwoverify, location, or vendor.
                     * @param _targetType Access purpose type. Case-insensitive parsing. net and ip both indicate IP/CIDR, template indicates address template, instance indicates asset instance, group indicates asset group, tag indicates resource tag, location indicates region, vendor indicates cloud service provider, domain indicates FQDN matching (content can also be IP or *), dnsparse indicates loose matching: Host/SNI matches the domain name, or the destination IP belongs to the IP range of the current DNS resolution result of that domain name, hit if any condition is met; domainiptwoverify indicates strict matching: the above two conditions require simultaneous satisfaction. Direction=1 accepts ip, net, template, domain, instance, group, tag; Direction=0 accepts ip, net, template, domain, dnsparse, domainiptwoverify, location, or vendor.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Rule description, no more than 100 characters. When projects are added, save the requested value; when modified, replace fully, do not inherit old values.
                     * @return Description Rule description, no more than 100 characters. When projects are added, save the requested value; when modified, replace fully, do not inherit old values.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description, no more than 100 characters. When projects are added, save the requested value; when modified, replace fully, do not inherit old values.
                     * @param _description Rule description, no more than 100 characters. When projects are added, save the requested value; when modified, replace fully, do not inherit old values.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Enable status. Non-empty values accept the string true or false in a case-insensitive manner and are normalized to enable or disable. When omitted or an empty string is input, the default enabled configuration for access control of the current account is read. If this configuration is unavailable, it is enabled by default. Existing rules are replaced without inheriting old values.
                     * @return Enable Enable status. Non-empty values accept the string true or false in a case-insensitive manner and are normalized to enable or disable. When omitted or an empty string is input, the default enabled configuration for access control of the current account is read. If this configuration is unavailable, it is enabled by default. Existing rules are replaced without inheriting old values.
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Enable status. Non-empty values accept the string true or false in a case-insensitive manner and are normalized to enable or disable. When omitted or an empty string is input, the default enabled configuration for access control of the current account is read. If this configuration is unavailable, it is enabled by default. Existing rules are replaced without inheriting old values.
                     * @param _enable Enable status. Non-empty values accept the string true or false in a case-insensitive manner and are normalized to enable or disable. When omitted or an empty string is input, the default enabled configuration for access control of the current account is read. If this configuration is unavailable, it is enabled by default. Existing rules are replaced without inheriting old values.
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Associated alarm or source event ID. When projects are added, omit or input an empty string to indicate not associated. When modifying, import the rules[].log_id returned by DescribeCfwRules as is. If not returned, omit or input an empty string. The old value is not automatically inherited during replacement. When From=batch_import_cover, a non-empty value is also reused as the string literal identification for the rule after overwrite import.
                     * @return LogId Associated alarm or source event ID. When projects are added, omit or input an empty string to indicate not associated. When modifying, import the rules[].log_id returned by DescribeCfwRules as is. If not returned, omit or input an empty string. The old value is not automatically inherited during replacement. When From=batch_import_cover, a non-empty value is also reused as the string literal identification for the rule after overwrite import.
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Associated alarm or source event ID. When projects are added, omit or input an empty string to indicate not associated. When modifying, import the rules[].log_id returned by DescribeCfwRules as is. If not returned, omit or input an empty string. The old value is not automatically inherited during replacement. When From=batch_import_cover, a non-empty value is also reused as the string literal identification for the rule after overwrite import.
                     * @param _logId Associated alarm or source event ID. When projects are added, omit or input an empty string to indicate not associated. When modifying, import the rules[].log_id returned by DescribeCfwRules as is. If not returned, omit or input an empty string. The old value is not automatically inherited during replacement. When From=batch_import_cover, a non-empty value is also reused as the string literal identification for the rule after overwrite import.
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取Protocol port template ID. Omit or input an empty string to indicate no template is used. If not empty, it must point to an existing template in the current account with the content format "protocol:port", otherwise the request fails. The protocol and port in the template must meet the integration restrictions of Direction, TargetType, and Scope. Protocol and Port must still comply with their respective field rules, but are not required to be fixed as ANY, -1/-1, or serial.
                     * @return ParamTemplateId Protocol port template ID. Omit or input an empty string to indicate no template is used. If not empty, it must point to an existing template in the current account with the content format "protocol:port", otherwise the request fails. The protocol and port in the template must meet the integration restrictions of Direction, TargetType, and Scope. Protocol and Port must still comply with their respective field rules, but are not required to be fixed as ANY, -1/-1, or serial.
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置Protocol port template ID. Omit or input an empty string to indicate no template is used. If not empty, it must point to an existing template in the current account with the content format "protocol:port", otherwise the request fails. The protocol and port in the template must meet the integration restrictions of Direction, TargetType, and Scope. Protocol and Port must still comply with their respective field rules, but are not required to be fixed as ANY, -1/-1, or serial.
                     * @param _paramTemplateId Protocol port template ID. Omit or input an empty string to indicate no template is used. If not empty, it must point to an existing template in the current account with the content format "protocol:port", otherwise the request fails. The protocol and port in the template must meet the integration restrictions of Direction, TargetType, and Scope. Protocol and Port must still comply with their respective field rules, but are not required to be fixed as ANY, -1/-1, or serial.
                     * 
                     */
                    void SetParamTemplateId(const std::string& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取Rule source: 0 means General rule, 2 means isolated asset outgoing access rule. It can be omitted when projects are added, and omitted values are handled as 0. Only 0 or 2 are accepted for explicit input and modification, and the original rule value should be imported during modification.
                     * @return RuleSource Rule source: 0 means General rule, 2 means isolated asset outgoing access rule. It can be omitted when projects are added, and omitted values are handled as 0. Only 0 or 2 are accepted for explicit input and modification, and the original rule value should be imported during modification.
                     * 
                     */
                    int64_t GetRuleSource() const;

                    /**
                     * 设置Rule source: 0 means General rule, 2 means isolated asset outgoing access rule. It can be omitted when projects are added, and omitted values are handled as 0. Only 0 or 2 are accepted for explicit input and modification, and the original rule value should be imported during modification.
                     * @param _ruleSource Rule source: 0 means General rule, 2 means isolated asset outgoing access rule. It can be omitted when projects are added, and omitted values are handled as 0. Only 0 or 2 are accepted for explicit input and modification, and the original rule value should be imported during modification.
                     * 
                     */
                    void SetRuleSource(const int64_t& _ruleSource);

                    /**
                     * 判断参数 RuleSource 是否已赋值
                     * @return RuleSource 是否已赋值
                     * 
                     */
                    bool RuleSourceHasBeenSet() const;

                    /**
                     * 获取Effective scope. Case insensitivity: serial means only Internet boundary serial firewall, side means only Internet boundary bypass firewall, all means acting on both serial and bypass firewalls simultaneously. Omitted, empty string, or other values will result in verification failure. The international site environment will normalize valid user-submitted input to serial. For linkage restrictions on protocol, port, destination type, and protocol port templates, refer to Protocol, Port, and ParamTemplateId.
                     * @return Scope Effective scope. Case insensitivity: serial means only Internet boundary serial firewall, side means only Internet boundary bypass firewall, all means acting on both serial and bypass firewalls simultaneously. Omitted, empty string, or other values will result in verification failure. The international site environment will normalize valid user-submitted input to serial. For linkage restrictions on protocol, port, destination type, and protocol port templates, refer to Protocol, Port, and ParamTemplateId.
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Effective scope. Case insensitivity: serial means only Internet boundary serial firewall, side means only Internet boundary bypass firewall, all means acting on both serial and bypass firewalls simultaneously. Omitted, empty string, or other values will result in verification failure. The international site environment will normalize valid user-submitted input to serial. For linkage restrictions on protocol, port, destination type, and protocol port templates, refer to Protocol, Port, and ParamTemplateId.
                     * @param _scope Effective scope. Case insensitivity: serial means only Internet boundary serial firewall, side means only Internet boundary bypass firewall, all means acting on both serial and bypass firewalls simultaneously. Omitted, empty string, or other values will result in verification failure. The international site environment will normalize valid user-submitted input to serial. For linkage restrictions on protocol, port, destination type, and protocol port templates, refer to Protocol, Port, and ParamTemplateId.
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Rule numeric value ID. Ordinary new additions, user-specified location additions, and batch import ignore this field; positive integer ID is usable when From=batch_import_cover; must provide an existing and modifiable positive integer ID of the current account for modification, used for locating and fully replacing the original rule, omitted, non-positive integer, or non-existing IDs cause request failure.
                     * @return Uuid Rule numeric value ID. Ordinary new additions, user-specified location additions, and batch import ignore this field; positive integer ID is usable when From=batch_import_cover; must provide an existing and modifiable positive integer ID of the current account for modification, used for locating and fully replacing the original rule, omitted, non-positive integer, or non-existing IDs cause request failure.
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置Rule numeric value ID. Ordinary new additions, user-specified location additions, and batch import ignore this field; positive integer ID is usable when From=batch_import_cover; must provide an existing and modifiable positive integer ID of the current account for modification, used for locating and fully replacing the original rule, omitted, non-positive integer, or non-existing IDs cause request failure.
                     * @param _uuid Rule numeric value ID. Ordinary new additions, user-specified location additions, and batch import ignore this field; positive integer ID is usable when From=batch_import_cover; must provide an existing and modifiable positive integer ID of the current account for modification, used for locating and fully replacing the original rule, omitted, non-positive integer, or non-existing IDs cause request failure.
                     * 
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * Rule direction: 1 means inbound, 0 means outbound; other integers or omitted values result in verification failure. Direction also determines the available combinations of SourceType, TargetType, Scope, and Protocol.
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Rule order, required. Pass -1 to append to the end of the current direction; a positive serial number indicates insertion at the corresponding position and postponement of subsequent rules; treat 0 as 1, other negative numbers and out-of-scope values should not be used. When a new request contains multiple rules, Direction must be the same; pass all -1 for appending, pass consecutive incremental positive serial numbers in request order for insertion. A modify request accepts only one rule.
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Destination port. Ignore this field and set it to an empty string when Protocol is ICMP. For other protocols, you must provide a parse string. You can enter a positive integer single port or a "start/end" range separated with commas. The starting value must not be larger than the end value. -1/-1 indicates all ports. FTP only accepts one positive integer. For domain or domain name template targets within the side or all scope, only -1/-1 or 0/65535 are accepted.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol, case-insensitive parsing. Layer-4 values TCP, UDP, ICMP, ICMPV6, ANY are normalized to uppercase. Application-layer values HTTP, HTTPS, HTTP/HTTPS, SMTP, SMTPS, SMTP/SMTPS, FTP, DNS, TLS/SSL and aliases domain, TLS, SSL are normalized to corresponding standard values. ANY means no protocol limitation, not an empty Protocol. It belongs to both parseable Layer-4 protocols and application protocols. domain, TLS, SSL are all normalized to TLS/SSL. The target for domain or domain name template accepts the above application-layer protocols and ANY, but does not accept FTP and other Layer-4 protocols. dnsparse and domainiptwoverify only accept TCP or UDP and only support serial. Other targets in the public cloud environment do not accept application-layer protocols outside of FTP and ANY. Under the side or all scope, inbound only accepts TCP, outbound only accepts TCP, HTTP/HTTPS, or TLS/SSL. When DNS is used for a non-domain target and the target is not *, the destination content must also be a rule list of valid non-IP domain names. When using a protocol port template, each group of protocol and port in the template also executes these integration validations.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Traffic processing actions are case-insensitive. accept means allow, drop means deny, and log means observe. isolateinaccept means allow access to allowlisted traffic for isolated assets, isolateindrop means block access to other traffic for isolated assets, isolateoutaccept means allow isolated assets to access allowlisted targets, and isolateoutdrop means block isolated assets from accessing other targets. drop and its deny alias also verify whether the current account has Internet boundary blocking capability.
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * Access the source content. For ip or net, use a valid IP/CIDR list, with a maximum of 10 items in a regular list. For template, use a parseable address template identifier of the current account. When Direction=0, use the corresponding resource identifier for instance, group, and tag. Among them, the instance must be resolvable to a public IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. When Direction=1, use a CSV of region codes for location, which must pass the verification of the new regional rules capability of the current account. For vendor, use a CSV of tencent, aliyun, aws, huawei, azure, or all. location and vendor are converted to region or manufacturer matchmaking information when saved.
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Access source type, case-insensitive parsing. net and ip both indicate IP/CIDR, template refers to address template, instance refers to asset instance, group refers to asset group, tag refers to resource tag, location refers to region, vendor refers to cloud service provider. Direction=1 accepts ip, net, template, location, vendor; Direction=0 accepts ip, net, template, instance, group, tag. ip and net are handled as the same type.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Access the destination content. For ip or net, use a valid IP/CIDR list. For domain, use a valid IP, standard domain name, or wildcard domain name list, and also accept a single *. The regular list supports up to 10 items, and wildcard domain names support up to 5 levels. When domain is used with the DNS protocol, IP is not accepted. For dnsparse, use a single valid domain name, wildcard domain name, or an mb_ domain name template that can be resolved by the current account. For domainiptwoverify, use a single valid domain name without wildcards or such a template. Both do not accept a single *, IP, comma-separated list, or wildcard domain names within the segment. For serial domain segments with wildcards and domainiptwoverify templates, the current environment must support the corresponding capacity. For template, use the address template identifier that can be resolved by the current account. For Direction=1, instance, group, and tag use the corresponding resource identifiers. The instance must be resolvable to a public network IP, and the tag must exist with the format {"Key":"tag key","Value":"tag value"}. For Direction=0, location uses region code CSV, and vendor uses CSV of tencent, aliyun, aws, huawei, azure, or all. The standardized content has a maximum length of 1023.
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * Access purpose type. Case-insensitive parsing. net and ip both indicate IP/CIDR, template indicates address template, instance indicates asset instance, group indicates asset group, tag indicates resource tag, location indicates region, vendor indicates cloud service provider, domain indicates FQDN matching (content can also be IP or *), dnsparse indicates loose matching: Host/SNI matches the domain name, or the destination IP belongs to the IP range of the current DNS resolution result of that domain name, hit if any condition is met; domainiptwoverify indicates strict matching: the above two conditions require simultaneous satisfaction. Direction=1 accepts ip, net, template, domain, instance, group, tag; Direction=0 accepts ip, net, template, domain, dnsparse, domainiptwoverify, location, or vendor.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Rule description, no more than 100 characters. When projects are added, save the requested value; when modified, replace fully, do not inherit old values.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Enable status. Non-empty values accept the string true or false in a case-insensitive manner and are normalized to enable or disable. When omitted or an empty string is input, the default enabled configuration for access control of the current account is read. If this configuration is unavailable, it is enabled by default. Existing rules are replaced without inheriting old values.
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Associated alarm or source event ID. When projects are added, omit or input an empty string to indicate not associated. When modifying, import the rules[].log_id returned by DescribeCfwRules as is. If not returned, omit or input an empty string. The old value is not automatically inherited during replacement. When From=batch_import_cover, a non-empty value is also reused as the string literal identification for the rule after overwrite import.
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * Protocol port template ID. Omit or input an empty string to indicate no template is used. If not empty, it must point to an existing template in the current account with the content format "protocol:port", otherwise the request fails. The protocol and port in the template must meet the integration restrictions of Direction, TargetType, and Scope. Protocol and Port must still comply with their respective field rules, but are not required to be fixed as ANY, -1/-1, or serial.
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * Rule source: 0 means General rule, 2 means isolated asset outgoing access rule. It can be omitted when projects are added, and omitted values are handled as 0. Only 0 or 2 are accepted for explicit input and modification, and the original rule value should be imported during modification.
                     */
                    int64_t m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                    /**
                     * Effective scope. Case insensitivity: serial means only Internet boundary serial firewall, side means only Internet boundary bypass firewall, all means acting on both serial and bypass firewalls simultaneously. Omitted, empty string, or other values will result in verification failure. The international site environment will normalize valid user-submitted input to serial. For linkage restrictions on protocol, port, destination type, and protocol port templates, refer to Protocol, Port, and ParamTemplateId.
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Rule numeric value ID. Ordinary new additions, user-specified location additions, and batch import ignore this field; positive integer ID is usable when From=batch_import_cover; must provide an existing and modifiable positive integer ID of the current account for modification, used for locating and fully replacing the original rule, omitted, non-positive integer, or non-existing IDs cause request failure.
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATERULEITEM_H_

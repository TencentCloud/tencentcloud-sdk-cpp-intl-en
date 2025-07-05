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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddAcRule request structure.
                */
                class AddAcRuleRequest : public AbstractModel
                {
                public:
                    AddAcRuleRequest();
                    ~AddAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取-1: lowest priority; 1: highest priority
                     * @return OrderIndex -1: lowest priority; 1: highest priority
                     * 
                     */
                    std::string GetOrderIndex() const;

                    /**
                     * 设置-1: lowest priority; 1: highest priority
                     * @param _orderIndex -1: lowest priority; 1: highest priority
                     * 
                     */
                    void SetOrderIndex(const std::string& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
log: observe
                     * @return RuleAction The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
log: observe
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
log: observe
                     * @param _ruleAction The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
log: observe
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
                     * 获取The traffic direction for access control rules. Valid values:
in: incoming traffic access control
out: outgoing traffic access control
                     * @return Direction The traffic direction for access control rules. Valid values:
in: incoming traffic access control
out: outgoing traffic access control
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置The traffic direction for access control rules. Valid values:
in: incoming traffic access control
out: outgoing traffic access control
                     * @param _direction The traffic direction for access control rules. Valid values:
in: incoming traffic access control
out: outgoing traffic access control
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取The description of access control rules.
                     * @return Description The description of access control rules.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The description of access control rules.
                     * @param _description The description of access control rules.
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
                     * 获取The type of source address in access control rules. Valid values:
net: source IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
                     * @return SourceType The type of source address in access control rules. Valid values:
net: source IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置The type of source address in access control rules. Valid values:
net: source IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
                     * @param _sourceType The type of source address in access control rules. Valid values:
net: source IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
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
                     * 获取The source address in the access control policy. 
When `SourceType` is `net`, `SourceContent` is the source IP or CIDR block.
For example: 1.1.1.0/24

When `SourceType` is `template`, `SourceContent` must be the source address template ID.

When `SourceType` is `location`, `SourceContent` is the source region. 
For example, ["BJ11", "ZB"]

When `SourceType` is `instance`, `SourceContent` is the public IP of the instance.
For example, ins-xxxxx

When `SourceType` is `vendor`, `SourceContent` is the cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * @return SourceContent The source address in the access control policy. 
When `SourceType` is `net`, `SourceContent` is the source IP or CIDR block.
For example: 1.1.1.0/24

When `SourceType` is `template`, `SourceContent` must be the source address template ID.

When `SourceType` is `location`, `SourceContent` is the source region. 
For example, ["BJ11", "ZB"]

When `SourceType` is `instance`, `SourceContent` is the public IP of the instance.
For example, ins-xxxxx

When `SourceType` is `vendor`, `SourceContent` is the cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置The source address in the access control policy. 
When `SourceType` is `net`, `SourceContent` is the source IP or CIDR block.
For example: 1.1.1.0/24

When `SourceType` is `template`, `SourceContent` must be the source address template ID.

When `SourceType` is `location`, `SourceContent` is the source region. 
For example, ["BJ11", "ZB"]

When `SourceType` is `instance`, `SourceContent` is the public IP of the instance.
For example, ins-xxxxx

When `SourceType` is `vendor`, `SourceContent` is the cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * @param _sourceContent The source address in the access control policy. 
When `SourceType` is `net`, `SourceContent` is the source IP or CIDR block.
For example: 1.1.1.0/24

When `SourceType` is `template`, `SourceContent` must be the source address template ID.

When `SourceType` is `location`, `SourceContent` is the source region. 
For example, ["BJ11", "ZB"]

When `SourceType` is `instance`, `SourceContent` is the public IP of the instance.
For example, ins-xxxxx

When `SourceType` is `vendor`, `SourceContent` is the cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
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
                     * 获取The type of destination address in access control rules. Valid values:
net: destination IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
domain: Domain name or IP.
                     * @return DestType The type of destination address in access control rules. Valid values:
net: destination IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
domain: Domain name or IP.
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置The type of destination address in access control rules. Valid values:
net: destination IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
domain: Domain name or IP.
                     * @param _destType The type of destination address in access control rules. Valid values:
net: destination IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
domain: Domain name or IP.
                     * 
                     */
                    void SetDestType(const std::string& _destType);

                    /**
                     * 判断参数 DestType 是否已赋值
                     * @return DestType 是否已赋值
                     * 
                     */
                    bool DestTypeHasBeenSet() const;

                    /**
                     * 获取The destination address in the access control policy. 
When `DestType` is `net`, `DestContent` is the destination IP or CIDR block.
For example: 1.1.1.0/24

When `DestType` is `template`, `DestContent` is the destination address template ID.

When `DestType` is `location`, `DestContent` is the destination region. 
For example, ["BJ11", "ZB"]

When `DestType` is `instance`, `DestContent` is the public IP of the instance.
For example, ins-xxxxx

When `DestType` is `domain`, `DestContent` is the domain name associated with the instance.
For example, *.qq.com

When `DestType`, `DestContent` is the selected cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * @return DestContent The destination address in the access control policy. 
When `DestType` is `net`, `DestContent` is the destination IP or CIDR block.
For example: 1.1.1.0/24

When `DestType` is `template`, `DestContent` is the destination address template ID.

When `DestType` is `location`, `DestContent` is the destination region. 
For example, ["BJ11", "ZB"]

When `DestType` is `instance`, `DestContent` is the public IP of the instance.
For example, ins-xxxxx

When `DestType` is `domain`, `DestContent` is the domain name associated with the instance.
For example, *.qq.com

When `DestType`, `DestContent` is the selected cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置The destination address in the access control policy. 
When `DestType` is `net`, `DestContent` is the destination IP or CIDR block.
For example: 1.1.1.0/24

When `DestType` is `template`, `DestContent` is the destination address template ID.

When `DestType` is `location`, `DestContent` is the destination region. 
For example, ["BJ11", "ZB"]

When `DestType` is `instance`, `DestContent` is the public IP of the instance.
For example, ins-xxxxx

When `DestType` is `domain`, `DestContent` is the domain name associated with the instance.
For example, *.qq.com

When `DestType`, `DestContent` is the selected cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * @param _destContent The destination address in the access control policy. 
When `DestType` is `net`, `DestContent` is the destination IP or CIDR block.
For example: 1.1.1.0/24

When `DestType` is `template`, `DestContent` is the destination address template ID.

When `DestType` is `location`, `DestContent` is the destination region. 
For example, ["BJ11", "ZB"]

When `DestType` is `instance`, `DestContent` is the public IP of the instance.
For example, ins-xxxxx

When `DestType` is `domain`, `DestContent` is the domain name associated with the instance.
For example, *.qq.com

When `DestType`, `DestContent` is the selected cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     * 
                     */
                    void SetDestContent(const std::string& _destContent);

                    /**
                     * 判断参数 DestContent 是否已赋值
                     * @return DestContent 是否已赋值
                     * 
                     */
                    bool DestContentHasBeenSet() const;

                    /**
                     * 获取The port to apply access control rules. Valid values:
-1/-1: all ports
80,443: 80 or 443
                     * @return Port The port to apply access control rules. Valid values:
-1/-1: all ports
80,443: 80 or 443
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置The port to apply access control rules. Valid values:
-1/-1: all ports
80,443: 80 or 443
                     * @param _port The port to apply access control rules. Valid values:
-1/-1: all ports
80,443: 80 or 443
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
                     * 获取The protocol type of traffic in access control rules. Valid value: TCP. Only TCP is supported for edge firewall rules. If this parameter is not specified, it defaults to TCP.
                     * @return Protocol The protocol type of traffic in access control rules. Valid value: TCP. Only TCP is supported for edge firewall rules. If this parameter is not specified, it defaults to TCP.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol type of traffic in access control rules. Valid value: TCP. Only TCP is supported for edge firewall rules. If this parameter is not specified, it defaults to TCP.
                     * @param _protocol The protocol type of traffic in access control rules. Valid value: TCP. Only TCP is supported for edge firewall rules. If this parameter is not specified, it defaults to TCP.
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
                     * 获取The Layer 7 protocol. Valid values:
HTTP/HTTPS
TLS/SSL
                     * @return ApplicationName The Layer 7 protocol. Valid values:
HTTP/HTTPS
TLS/SSL
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置The Layer 7 protocol. Valid values:
HTTP/HTTPS
TLS/SSL
                     * @param _applicationName The Layer 7 protocol. Valid values:
HTTP/HTTPS
TLS/SSL
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * @return Enable Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * @param _enable Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * -1: lowest priority; 1: highest priority
                     */
                    std::string m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * The action that Cloud Firewall performs on the traffic. Valid values:
accept: allow
drop: deny
log: observe
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * The traffic direction for access control rules. Valid values:
in: incoming traffic access control
out: outgoing traffic access control
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * The description of access control rules.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The type of source address in access control rules. Valid values:
net: source IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * The source address in the access control policy. 
When `SourceType` is `net`, `SourceContent` is the source IP or CIDR block.
For example: 1.1.1.0/24

When `SourceType` is `template`, `SourceContent` must be the source address template ID.

When `SourceType` is `location`, `SourceContent` is the source region. 
For example, ["BJ11", "ZB"]

When `SourceType` is `instance`, `SourceContent` is the public IP of the instance.
For example, ins-xxxxx

When `SourceType` is `vendor`, `SourceContent` is the cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * The type of destination address in access control rules. Valid values:
net: destination IP or range (IP or CIDR)
location: source region
template: CFW address template
instance: instance ID
vendor: Cloud vendor
domain: Domain name or IP.
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * The destination address in the access control policy. 
When `DestType` is `net`, `DestContent` is the destination IP or CIDR block.
For example: 1.1.1.0/24

When `DestType` is `template`, `DestContent` is the destination address template ID.

When `DestType` is `location`, `DestContent` is the destination region. 
For example, ["BJ11", "ZB"]

When `DestType` is `instance`, `DestContent` is the public IP of the instance.
For example, ins-xxxxx

When `DestType` is `domain`, `DestContent` is the domain name associated with the instance.
For example, *.qq.com

When `DestType`, `DestContent` is the selected cloud service provider.
Values: `aws`, `huawei`, `tencent`, `aliyun`, `azure` and `all`. 
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * The port to apply access control rules. Valid values:
-1/-1: all ports
80,443: 80 or 443
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * The protocol type of traffic in access control rules. Valid value: TCP. Only TCP is supported for edge firewall rules. If this parameter is not specified, it defaults to TCP.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The Layer 7 protocol. Valid values:
HTTP/HTTPS
TLS/SSL
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Indicates whether to enable the rules. Default: enable. Valid values:
true: enable; false: disable
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDACRULEREQUEST_H_

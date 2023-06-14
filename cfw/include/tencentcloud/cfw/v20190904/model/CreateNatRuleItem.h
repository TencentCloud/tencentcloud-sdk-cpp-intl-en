/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_

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
                * Parameters for creating an NAT access control rule
                */
                class CreateNatRuleItem : public AbstractModel
                {
                public:
                    CreateNatRuleItem();
                    ~CreateNatRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access source. Example: `net: IP/CIDR(192.168.0.2)`
                     * @return SourceContent Access source. Example: `net: IP/CIDR(192.168.0.2)`
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Access source. Example: `net: IP/CIDR(192.168.0.2)`
                     * @param _sourceContent Access source. Example: `net: IP/CIDR(192.168.0.2)`
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
                     * 获取Access source type. Values for inbound rules: `ip`, `net`, `template`, and `location`. Values for outbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`.
                     * @return SourceType Access source type. Values for inbound rules: `ip`, `net`, `template`, and `location`. Values for outbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Access source type. Values for inbound rules: `ip`, `net`, `template`, and `location`. Values for outbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`.
                     * @param _sourceType Access source type. Values for inbound rules: `ip`, `net`, `template`, and `location`. Values for outbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`.
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
                     * 获取Access target. Example: `net: IP/CIDR(192.168.0.2); domain: domain name rule, e.g., *.qq.com
                     * @return TargetContent Access target. Example: `net: IP/CIDR(192.168.0.2); domain: domain name rule, e.g., *.qq.com
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置Access target. Example: `net: IP/CIDR(192.168.0.2); domain: domain name rule, e.g., *.qq.com
                     * @param _targetContent Access target. Example: `net: IP/CIDR(192.168.0.2); domain: domain name rule, e.g., *.qq.com
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
                     * 获取Access target type. Values for inbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`. Values for outbound rules: `ip`, `net`, `domain`, `template`, and `location`.
                     * @return TargetType Access target type. Values for inbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`. Values for outbound rules: `ip`, `net`, `domain`, `template`, and `location`.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Access target type. Values for inbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`. Values for outbound rules: `ip`, `net`, `domain`, `template`, and `location`.
                     * @param _targetType Access target type. Values for inbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`. Values for outbound rules: `ip`, `net`, `domain`, `template`, and `location`.
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
                     * 获取Protocol. Values: `TCP`, `UDP`, `ICMP`, `ANY`, `HTTP`, `HTTPS`, `HTTP/HTTPS`, `SMTP`, `SMTPS`, `SMTP/SMTPS`, `FTP`, and `DNS`.
                     * @return Protocol Protocol. Values: `TCP`, `UDP`, `ICMP`, `ANY`, `HTTP`, `HTTPS`, `HTTP/HTTPS`, `SMTP`, `SMTPS`, `SMTP/SMTPS`, `FTP`, and `DNS`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol. Values: `TCP`, `UDP`, `ICMP`, `ANY`, `HTTP`, `HTTPS`, `HTTP/HTTPS`, `SMTP`, `SMTPS`, `SMTP/SMTPS`, `FTP`, and `DNS`.
                     * @param _protocol Protocol. Values: `TCP`, `UDP`, `ICMP`, `ANY`, `HTTP`, `HTTPS`, `HTTP/HTTPS`, `SMTP`, `SMTPS`, `SMTP/SMTPS`, `FTP`, and `DNS`.
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
                     * 获取Specify how the CFW instance deals with the traffic hit the access control rule. Values: `accept` (allow), `drop` (reject), and `log` (observe).
                     * @return RuleAction Specify how the CFW instance deals with the traffic hit the access control rule. Values: `accept` (allow), `drop` (reject), and `log` (observe).
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Specify how the CFW instance deals with the traffic hit the access control rule. Values: `accept` (allow), `drop` (reject), and `log` (observe).
                     * @param _ruleAction Specify how the CFW instance deals with the traffic hit the access control rule. Values: `accept` (allow), `drop` (reject), and `log` (observe).
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
                     * 获取The port of the access control rule. Values: `-1/-1` (all ports) and `80` (Port 80)
                     * @return Port The port of the access control rule. Values: `-1/-1` (all ports) and `80` (Port 80)
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置The port of the access control rule. Values: `-1/-1` (all ports) and `80` (Port 80)
                     * @param _port The port of the access control rule. Values: `-1/-1` (all ports) and `80` (Port 80)
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
                     * 获取Rule direction. Values: `1` (Inbound) and `0` (Outbound)
                     * @return Direction Rule direction. Values: `1` (Inbound) and `0` (Outbound)
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Rule direction. Values: `1` (Inbound) and `0` (Outbound)
                     * @param _direction Rule direction. Values: `1` (Inbound) and `0` (Outbound)
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
                     * 获取Rule sequence number
                     * @return OrderIndex Rule sequence number
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置Rule sequence number
                     * @param _orderIndex Rule sequence number
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
                     * 获取Rule status. `true` (Enabled); `false` (Disabled)
                     * @return Enable Rule status. `true` (Enabled); `false` (Disabled)
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Rule status. `true` (Enabled); `false` (Disabled)
                     * @param _enable Rule status. `true` (Enabled); `false` (Disabled)
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
                     * 获取The unique ID of the rule, which is not required when you create a rule.
                     * @return Uuid The unique ID of the rule, which is not required when you create a rule.
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置The unique ID of the rule, which is not required when you create a rule.
                     * @param _uuid The unique ID of the rule, which is not required when you create a rule.
                     * 
                     */
                    void SetUuid(const int64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Access source. Example: `net: IP/CIDR(192.168.0.2)`
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Access source type. Values for inbound rules: `ip`, `net`, `template`, and `location`. Values for outbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Access target. Example: `net: IP/CIDR(192.168.0.2); domain: domain name rule, e.g., *.qq.com
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * Access target type. Values for inbound rules: `ip`, `net`, `template`, `instance`, `group`, and `tag`. Values for outbound rules: `ip`, `net`, `domain`, `template`, and `location`.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Protocol. Values: `TCP`, `UDP`, `ICMP`, `ANY`, `HTTP`, `HTTPS`, `HTTP/HTTPS`, `SMTP`, `SMTPS`, `SMTP/SMTPS`, `FTP`, and `DNS`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Specify how the CFW instance deals with the traffic hit the access control rule. Values: `accept` (allow), `drop` (reject), and `log` (observe).
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * The port of the access control rule. Values: `-1/-1` (all ports) and `80` (Port 80)
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Rule direction. Values: `1` (Inbound) and `0` (Outbound)
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Rule sequence number
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Rule status. `true` (Enabled); `false` (Disabled)
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * The unique ID of the rule, which is not required when you create a rule.
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATRULEITEM_H_

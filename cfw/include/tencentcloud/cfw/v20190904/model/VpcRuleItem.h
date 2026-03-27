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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BetaInfoByACL.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * VPC Private Network Rules
                */
                class VpcRuleItem : public AbstractModel
                {
                public:
                    VpcRuleItem();
                    ~VpcRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access source example:

net: IP/CIDR (192.168.0.2)
                     * @return SourceContent Access source example:

net: IP/CIDR (192.168.0.2)
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Access source example:

net: IP/CIDR (192.168.0.2)
                     * @param _sourceContent Access source example:

net: IP/CIDR (192.168.0.2)
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
                     * 获取Access source type, which can be: net
                     * @return SourceType Access source type, which can be: net
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Access source type, which can be: net
                     * @param _sourceType Access source type, which can be: net
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
                     * 获取Access destination example:

net: IP/CIDR (192.168.0.2)

domain: domain name rules, for example *.qq.com
                     * @return DestContent Access destination example:

net: IP/CIDR (192.168.0.2)

domain: domain name rules, for example *.qq.com
                     * 
                     */
                    std::string GetDestContent() const;

                    /**
                     * 设置Access destination example:

net: IP/CIDR (192.168.0.2)

domain: domain name rules, for example *.qq.com
                     * @param _destContent Access destination example:

net: IP/CIDR (192.168.0.2)

domain: domain name rules, for example *.qq.com
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
                     * 获取Access destination type, which can be: net, domain, dnsparse
                     * @return DestType Access destination type, which can be: net, domain, dnsparse
                     * 
                     */
                    std::string GetDestType() const;

                    /**
                     * 设置Access destination type, which can be: net, domain, dnsparse
                     * @param _destType Access destination type, which can be: net, domain, dnsparse
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
                     * 获取Protocol, optional values:

TCP

UDP

ICMP

ANY

HTTP

HTTPS

HTTP/HTTPS

SMTP

SMTPS

SMTP/SMTPS

FTP

DNS

TLS/SSL
                     * @return Protocol Protocol, optional values:

TCP

UDP

ICMP

ANY

HTTP

HTTPS

HTTP/HTTPS

SMTP

SMTPS

SMTP/SMTPS

FTP

DNS

TLS/SSL
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol, optional values:

TCP

UDP

ICMP

ANY

HTTP

HTTPS

HTTP/HTTPS

SMTP

SMTPS

SMTP/SMTPS

FTP

DNS

TLS/SSL
                     * @param _protocol Protocol, optional values:

TCP

UDP

ICMP

ANY

HTTP

HTTPS

HTTP/HTTPS

SMTP

SMTPS

SMTP/SMTPS

FTP

DNS

TLS/SSL
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
                     * 获取How traffic set in the access control policy passes through CFW. Values:

accept: allow

drop: deny

log: observe
                     * @return RuleAction How traffic set in the access control policy passes through CFW. Values:

accept: allow

drop: deny

log: observe
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置How traffic set in the access control policy passes through CFW. Values:

accept: allow

drop: deny

log: observe
                     * @param _ruleAction How traffic set in the access control policy passes through CFW. Values:

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
                     * 获取Access control policy ports. Values:

-1/-1: all ports

80: port 80
                     * @return Port Access control policy ports. Values:

-1/-1: all ports

80: port 80
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Access control policy ports. Values:

-1/-1: all ports

80: port 80
                     * @param _port Access control policy ports. Values:

-1/-1: all ports

80: port 80
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

                    /**
                     * 获取Rule order, where -1 indicates the lowest and 1 indicates the highest.
                     * @return OrderIndex Rule order, where -1 indicates the lowest and 1 indicates the highest.
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置Rule order, where -1 indicates the lowest and 1 indicates the highest.
                     * @param _orderIndex Rule order, where -1 indicates the lowest and 1 indicates the highest.
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
                     * 获取Rule status, where true indicates enabled and false indicates disabled.
                     * @return Enable Rule status, where true indicates enabled and false indicates disabled.
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Rule status, where true indicates enabled and false indicates disabled.
                     * @param _enable Rule status, where true indicates enabled and false indicates disabled.
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
                     * 获取The scope of effect for the rule, specifying whether it applies between a specific pair of VPCs or across all VPCs.
                     * @return EdgeId The scope of effect for the rule, specifying whether it applies between a specific pair of VPCs or across all VPCs.
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置The scope of effect for the rule, specifying whether it applies between a specific pair of VPCs or across all VPCs.
                     * @param _edgeId The scope of effect for the rule, specifying whether it applies between a specific pair of VPCs or across all VPCs.
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取The unique id corresponding to the rule. This field is ignored when adding a rule; when modifying the rule, the Uuid needs to be filled in. This parameter will be returned in query results.
                     * @return Uuid The unique id corresponding to the rule. This field is ignored when adding a rule; when modifying the rule, the Uuid needs to be filled in. This parameter will be returned in query results.
                     * 
                     */
                    int64_t GetUuid() const;

                    /**
                     * 设置The unique id corresponding to the rule. This field is ignored when adding a rule; when modifying the rule, the Uuid needs to be filled in. This parameter will be returned in query results.
                     * @param _uuid The unique id corresponding to the rule. This field is ignored when adding a rule; when modifying the rule, the Uuid needs to be filled in. This parameter will be returned in query results.
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
                     * 获取The hit count of the rule. This parameter does not need to be passed during CRUD operations and is mainly used for returning query result data.
                     * @return DetectedTimes The hit count of the rule. This parameter does not need to be passed during CRUD operations and is mainly used for returning query result data.
                     * 
                     */
                    int64_t GetDetectedTimes() const;

                    /**
                     * 设置The hit count of the rule. This parameter does not need to be passed during CRUD operations and is mainly used for returning query result data.
                     * @param _detectedTimes The hit count of the rule. This parameter does not need to be passed during CRUD operations and is mainly used for returning query result data.
                     * 
                     */
                    void SetDetectedTimes(const int64_t& _detectedTimes);

                    /**
                     * 判断参数 DetectedTimes 是否已赋值
                     * @return DetectedTimes 是否已赋值
                     * 
                     */
                    bool DetectedTimesHasBeenSet() const;

                    /**
                     * 获取Description of the firewall between the pair of VPCs corresponding to EdgeId
                     * @return EdgeName Description of the firewall between the pair of VPCs corresponding to EdgeId
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置Description of the firewall between the pair of VPCs corresponding to EdgeId
                     * @param _edgeName Description of the firewall between the pair of VPCs corresponding to EdgeId
                     * 
                     */
                    void SetEdgeName(const std::string& _edgeName);

                    /**
                     * 判断参数 EdgeName 是否已赋值
                     * @return EdgeName 是否已赋值
                     * 
                     */
                    bool EdgeNameHasBeenSet() const;

                    /**
                     * 获取Internal-use uuid, generally not used
                     * @return InternalUuid Internal-use uuid, generally not used
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置Internal-use uuid, generally not used
                     * @param _internalUuid Internal-use uuid, generally not used
                     * 
                     */
                    void SetInternalUuid(const int64_t& _internalUuid);

                    /**
                     * 判断参数 InternalUuid 是否已赋值
                     * @return InternalUuid 是否已赋值
                     * 
                     */
                    bool InternalUuidHasBeenSet() const;

                    /**
                     * 获取Rule deletion status: 1 indicates deleted; 0 indicates not deleted
                     * @return Deleted Rule deletion status: 1 indicates deleted; 0 indicates not deleted
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 设置Rule deletion status: 1 indicates deleted; 0 indicates not deleted
                     * @param _deleted Rule deletion status: 1 indicates deleted; 0 indicates not deleted
                     * 
                     */
                    void SetDeleted(const int64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取The firewall instance ID where the rule takes effect
                     * @return FwGroupId The firewall instance ID where the rule takes effect
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置The firewall instance ID where the rule takes effect
                     * @param _fwGroupId The firewall instance ID where the rule takes effect
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取Firewall name
                     * @return FwGroupName Firewall name
                     * 
                     */
                    std::string GetFwGroupName() const;

                    /**
                     * 设置Firewall name
                     * @param _fwGroupName Firewall name
                     * 
                     */
                    void SetFwGroupName(const std::string& _fwGroupName);

                    /**
                     * 判断参数 FwGroupName 是否已赋值
                     * @return FwGroupName 是否已赋值
                     * 
                     */
                    bool FwGroupNameHasBeenSet() const;

                    /**
                     * 获取beta task details
                     * @return BetaList beta task details
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置beta task details
                     * @param _betaList beta task details
                     * 
                     */
                    void SetBetaList(const std::vector<BetaInfoByACL>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

                    /**
                     * 获取Port Protocol Group ID
                     * @return ParamTemplateId Port Protocol Group ID
                     * 
                     */
                    std::string GetParamTemplateId() const;

                    /**
                     * 设置Port Protocol Group ID
                     * @param _paramTemplateId Port Protocol Group ID
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
                     * 获取Port Protocol Group Name
                     * @return ParamTemplateName Port Protocol Group Name
                     * 
                     */
                    std::string GetParamTemplateName() const;

                    /**
                     * 设置Port Protocol Group Name
                     * @param _paramTemplateName Port Protocol Group Name
                     * 
                     */
                    void SetParamTemplateName(const std::string& _paramTemplateName);

                    /**
                     * 判断参数 ParamTemplateName 是否已赋值
                     * @return ParamTemplateName 是否已赋值
                     * 
                     */
                    bool ParamTemplateNameHasBeenSet() const;

                    /**
                     * 获取Access destination name
                     * @return TargetName Access destination name
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置Access destination name
                     * @param _targetName Access destination name
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取Access source name
                     * @return SourceName Access source name
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置Access source name
                     * @param _sourceName Access source name
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取Ip version, 0: IPv4, 1: IPv6, default is IPv4
                     * @return IpVersion Ip version, 0: IPv4, 1: IPv6, default is IPv4
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置Ip version, 0: IPv4, 1: IPv6, default is IPv4
                     * @param _ipVersion Ip version, 0: IPv4, 1: IPv6, default is IPv4
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取Whether the rule is invalid, where 0 indicates a valid rule and 1 indicates an invalid rule, used in output parameters.
                     * @return Invalid Whether the rule is invalid, where 0 indicates a valid rule and 1 indicates an invalid rule, used in output parameters.
                     * 
                     */
                    int64_t GetInvalid() const;

                    /**
                     * 设置Whether the rule is invalid, where 0 indicates a valid rule and 1 indicates an invalid rule, used in output parameters.
                     * @param _invalid Whether the rule is invalid, where 0 indicates a valid rule and 1 indicates an invalid rule, used in output parameters.
                     * 
                     */
                    void SetInvalid(const int64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                private:

                    /**
                     * Access source example:

net: IP/CIDR (192.168.0.2)
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Access source type, which can be: net
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Access destination example:

net: IP/CIDR (192.168.0.2)

domain: domain name rules, for example *.qq.com
                     */
                    std::string m_destContent;
                    bool m_destContentHasBeenSet;

                    /**
                     * Access destination type, which can be: net, domain, dnsparse
                     */
                    std::string m_destType;
                    bool m_destTypeHasBeenSet;

                    /**
                     * Protocol, optional values:

TCP

UDP

ICMP

ANY

HTTP

HTTPS

HTTP/HTTPS

SMTP

SMTPS

SMTP/SMTPS

FTP

DNS

TLS/SSL
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * How traffic set in the access control policy passes through CFW. Values:

accept: allow

drop: deny

log: observe
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * Access control policy ports. Values:

-1/-1: all ports

80: port 80
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule order, where -1 indicates the lowest and 1 indicates the highest.
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Rule status, where true indicates enabled and false indicates disabled.
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * The scope of effect for the rule, specifying whether it applies between a specific pair of VPCs or across all VPCs.
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * The unique id corresponding to the rule. This field is ignored when adding a rule; when modifying the rule, the Uuid needs to be filled in. This parameter will be returned in query results.
                     */
                    int64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * The hit count of the rule. This parameter does not need to be passed during CRUD operations and is mainly used for returning query result data.
                     */
                    int64_t m_detectedTimes;
                    bool m_detectedTimesHasBeenSet;

                    /**
                     * Description of the firewall between the pair of VPCs corresponding to EdgeId
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * Internal-use uuid, generally not used
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * Rule deletion status: 1 indicates deleted; 0 indicates not deleted
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * The firewall instance ID where the rule takes effect
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * Firewall name
                     */
                    std::string m_fwGroupName;
                    bool m_fwGroupNameHasBeenSet;

                    /**
                     * beta task details
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                    /**
                     * Port Protocol Group ID
                     */
                    std::string m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * Port Protocol Group Name
                     */
                    std::string m_paramTemplateName;
                    bool m_paramTemplateNameHasBeenSet;

                    /**
                     * Access destination name
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * Access source name
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * Ip version, 0: IPv4, 1: IPv6, default is IPv4
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * Whether the rule is invalid, where 0 indicates a valid rule and 1 indicates an invalid rule, used in output parameters.
                     */
                    int64_t m_invalid;
                    bool m_invalidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCRULEITEM_H_

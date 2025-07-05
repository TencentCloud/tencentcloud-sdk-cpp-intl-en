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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FORWARDRULE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FORWARDRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/TagInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Forwarding rule details.
                */
                class ForwardRule : public AbstractModel
                {
                public:
                    ForwardRule();
                    ~ForwardRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private domain name.
                     * @return Domain Private domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Private domain name.
                     * @param _domain Private domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Forwarding rule name.
                     * @return RuleName Forwarding rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Forwarding rule name.
                     * @param _ruleName Forwarding rule name.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * @return RuleType Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * @param _ruleType Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param _createdAt Creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdatedAt Update time
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time
                     * @param _updatedAt Update time
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Endpoint name.
                     * @return EndPointName Endpoint name.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name.
                     * @param _endPointName Endpoint name.
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Endpoint ID.
                     * @return EndPointId Endpoint ID.
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置Endpoint ID.
                     * @param _endPointId Endpoint ID.
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取Forwarding address.
                     * @return ForwardAddress Forwarding address.
                     * 
                     */
                    std::vector<std::string> GetForwardAddress() const;

                    /**
                     * 设置Forwarding address.
                     * @param _forwardAddress Forwarding address.
                     * 
                     */
                    void SetForwardAddress(const std::vector<std::string>& _forwardAddress);

                    /**
                     * 判断参数 ForwardAddress 是否已赋值
                     * @return ForwardAddress 是否已赋值
                     * 
                     */
                    bool ForwardAddressHasBeenSet() const;

                    /**
                     * 获取List of VPCs bound to the private domain.
                     * @return VpcSet List of VPCs bound to the private domain.
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置List of VPCs bound to the private domain.
                     * @param _vpcSet List of VPCs bound to the private domain.
                     * 
                     */
                    void SetVpcSet(const std::vector<VpcInfo>& _vpcSet);

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     * 
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取ID of the bound private domain.
                     * @return ZoneId ID of the bound private domain.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the bound private domain.
                     * @param _zoneId ID of the bound private domain.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag
                     * @param _tags Tag
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Private domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Forwarding rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Forwarding rule type. DOWN: From cloud to off-cloud; UP: From off-cloud to cloud.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Endpoint name.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint ID.
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * Forwarding address.
                     */
                    std::vector<std::string> m_forwardAddress;
                    bool m_forwardAddressHasBeenSet;

                    /**
                     * List of VPCs bound to the private domain.
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * ID of the bound private domain.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FORWARDRULE_H_

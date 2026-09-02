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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSUREAUTOTAGRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSUREAUTOTAGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyExposureAutoTagRule request structure.
                */
                class ModifyExposureAutoTagRuleRequest : public AbstractModel
                {
                public:
                    ModifyExposureAutoTagRuleRequest();
                    ~ModifyExposureAutoTagRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>rule name</p>
                     * @return RuleName <p>rule name</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>rule name</p>
                     * @param _ruleName <p>rule name</p>
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
                     * 获取<p>Tag.</p>
                     * @return Tag <p>Tag.</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tag <p>Tag.</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID.</p>
                     * @return RuleID <p>Rule ID.</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _ruleID <p>Rule ID.</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule description</p>
                     * @return Description <p>Rule description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Rule description</p>
                     * @param _description <p>Rule description</p>
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
                     * 获取<p>Enabled status</p>
                     * @return Enable <p>Enabled status</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Enabled status</p>
                     * @param _enable <p>Enabled status</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Asset type</p>
                     * @return AssetTypes <p>Asset type</p>
                     * 
                     */
                    std::vector<std::string> GetAssetTypes() const;

                    /**
                     * 设置<p>Asset type</p>
                     * @param _assetTypes <p>Asset type</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<std::string>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                    /**
                     * 获取<p>Port</p>
                     * @return Ports <p>Port</p>
                     * 
                     */
                    std::vector<std::string> GetPorts() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _ports <p>Port</p>
                     * 
                     */
                    void SetPorts(const std::vector<std::string>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取<p>Open status</p>
                     * @return OpenStatuses <p>Open status</p>
                     * 
                     */
                    std::vector<std::string> GetOpenStatuses() const;

                    /**
                     * 设置<p>Open status</p>
                     * @param _openStatuses <p>Open status</p>
                     * 
                     */
                    void SetOpenStatuses(const std::vector<std::string>& _openStatuses);

                    /**
                     * 判断参数 OpenStatuses 是否已赋值
                     * @return OpenStatuses 是否已赋值
                     * 
                     */
                    bool OpenStatusesHasBeenSet() const;

                    /**
                     * 获取<p>Whether to execute tagging immediately</p>
                     * @return ApplyNow <p>Whether to execute tagging immediately</p>
                     * 
                     */
                    bool GetApplyNow() const;

                    /**
                     * 设置<p>Whether to execute tagging immediately</p>
                     * @param _applyNow <p>Whether to execute tagging immediately</p>
                     * 
                     */
                    void SetApplyNow(const bool& _applyNow);

                    /**
                     * 判断参数 ApplyNow 是否已赋值
                     * @return ApplyNow 是否已赋值
                     * 
                     */
                    bool ApplyNowHasBeenSet() const;

                private:

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Rule ID.</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Rule description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Enabled status</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::vector<std::string> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                    /**
                     * <p>Port</p>
                     */
                    std::vector<std::string> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>Open status</p>
                     */
                    std::vector<std::string> m_openStatuses;
                    bool m_openStatusesHasBeenSet;

                    /**
                     * <p>Whether to execute tagging immediately</p>
                     */
                    bool m_applyNow;
                    bool m_applyNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSUREAUTOTAGRULEREQUEST_H_

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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageDenyRuleDetail response structure.
                */
                class DescribeImageDenyRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeImageDenyRuleDetailResponse();
                    ~DescribeImageDenyRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return ID Rule ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     * @return RuleType Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Number of Effective Images
                     * @return EffectImageCount Number of Effective Images
                     * 
                     */
                    int64_t GetEffectImageCount() const;

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     * @return IsEffectAllImage Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     * 
                     */
                    int64_t GetIsEffectAllImage() const;

                    /**
                     * 判断参数 IsEffectAllImage 是否已赋值
                     * @return IsEffectAllImage 是否已赋值
                     * 
                     */
                    bool IsEffectAllImageHasBeenSet() const;

                    /**
                     * 获取Rule Effective Start Time
                     * @return EffectTime Rule Effective Start Time
                     * 
                     */
                    std::string GetEffectTime() const;

                    /**
                     * 判断参数 EffectTime 是否已赋值
                     * @return EffectTime 是否已赋值
                     * 
                     */
                    bool EffectTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return OperationUin Operator
                     * 
                     */
                    std::string GetOperationUin() const;

                    /**
                     * 判断参数 OperationUin 是否已赋值
                     * @return OperationUin 是否已赋值
                     * 
                     */
                    bool OperationUinHasBeenSet() const;

                    /**
                     * 获取Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * @return EffectStatus Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     * 
                     */
                    std::string GetEffectStatus() const;

                    /**
                     * 判断参数 EffectStatus 是否已赋值
                     * @return EffectStatus 是否已赋值
                     * 
                     */
                    bool EffectStatusHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return RuleDescription Rule description
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取Enable Status. 0: Enabled; 1: Disabled
                     * @return Status Enable Status. 0: Enabled; 1: Disabled
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Vulnerability. 0: Not Selected; 1: Selected
                     * @return Vul Vulnerability. 0: Not Selected; 1: Selected
                     * 
                     */
                    int64_t GetVul() const;

                    /**
                     * 判断参数 Vul 是否已赋值
                     * @return Vul 是否已赋值
                     * 
                     */
                    bool VulHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CVEIDSet CVE ID
                     * 
                     */
                    std::vector<std::string> GetCVEIDSet() const;

                    /**
                     * 判断参数 CVEIDSet 是否已赋值
                     * @return CVEIDSet 是否已赋值
                     * 
                     */
                    bool CVEIDSetHasBeenSet() const;

                    /**
                     * 获取Component ID
                     * @return ComponentSet Component ID
                     * 
                     */
                    std::vector<std::string> GetComponentSet() const;

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     * 
                     */
                    bool ComponentSetHasBeenSet() const;

                    /**
                     * 获取Vulnerability category
                     * @return VulClassSet Vulnerability category
                     * 
                     */
                    std::vector<std::string> GetVulClassSet() const;

                    /**
                     * 判断参数 VulClassSet 是否已赋值
                     * @return VulClassSet 是否已赋值
                     * 
                     */
                    bool VulClassSetHasBeenSet() const;

                    /**
                     * 获取Vulnerability level
                     * @return VulLevelSet Vulnerability level
                     * 
                     */
                    std::vector<std::string> GetVulLevelSet() const;

                    /**
                     * 判断参数 VulLevelSet 是否已赋值
                     * @return VulLevelSet 是否已赋值
                     * 
                     */
                    bool VulLevelSetHasBeenSet() const;

                    /**
                     * 获取vulnerability tag
                     * @return VulLabelSet vulnerability tag
                     * 
                     */
                    std::vector<std::string> GetVulLabelSet() const;

                    /**
                     * 判断参数 VulLabelSet 是否已赋值
                     * @return VulLabelSet 是否已赋值
                     * 
                     */
                    bool VulLabelSetHasBeenSet() const;

                    /**
                     * 获取Trojan. 0: Not Selected; 1: Selected
                     * @return Virus Trojan. 0: Not Selected; 1: Selected
                     * 
                     */
                    int64_t GetVirus() const;

                    /**
                     * 判断参数 Virus 是否已赋值
                     * @return Virus 是否已赋值
                     * 
                     */
                    bool VirusHasBeenSet() const;

                    /**
                     * 获取Trojan MD5 List
                     * @return VirusMD5Set Trojan MD5 List
                     * 
                     */
                    std::vector<std::string> GetVirusMD5Set() const;

                    /**
                     * 判断参数 VirusMD5Set 是否已赋值
                     * @return VirusMD5Set 是否已赋值
                     * 
                     */
                    bool VirusMD5SetHasBeenSet() const;

                    /**
                     * 获取Trojan Level
                     * @return VirusLevelSet Trojan Level
                     * 
                     */
                    std::vector<std::string> GetVirusLevelSet() const;

                    /**
                     * 判断参数 VirusLevelSet 是否已赋值
                     * @return VirusLevelSet 是否已赋值
                     * 
                     */
                    bool VirusLevelSetHasBeenSet() const;

                    /**
                     * 获取Virus name
                     * @return VirusName Virus name
                     * 
                     */
                    std::vector<std::string> GetVirusName() const;

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取Sensitive Information. 0: Not Selected; 1: Selected
                     * @return Risk Sensitive Information. 0: Not Selected; 1: Selected
                     * 
                     */
                    int64_t GetRisk() const;

                    /**
                     * 判断参数 Risk 是否已赋值
                     * @return Risk 是否已赋值
                     * 
                     */
                    bool RiskHasBeenSet() const;

                    /**
                     * 获取Sensitivity Level
                     * @return RiskLevelSet Sensitivity Level
                     * 
                     */
                    std::vector<std::string> GetRiskLevelSet() const;

                    /**
                     * 判断参数 RiskLevelSet 是否已赋值
                     * @return RiskLevelSet 是否已赋值
                     * 
                     */
                    bool RiskLevelSetHasBeenSet() const;

                    /**
                     * 获取Sensitive Information Classification
                     * @return RiskType Sensitive Information Classification
                     * 
                     */
                    std::vector<std::string> GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取Privileged Startup. 0: Not Allowed; 1: Allowed
                     * @return PrivilegeRun Privileged Startup. 0: Not Allowed; 1: Allowed
                     * 
                     */
                    int64_t GetPrivilegeRun() const;

                    /**
                     * 判断参数 PrivilegeRun 是否已赋值
                     * @return PrivilegeRun 是否已赋值
                     * 
                     */
                    bool PrivilegeRunHasBeenSet() const;

                    /**
                     * 获取Privilege type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivilegeDetail Privilege type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPrivilegeDetail() const;

                    /**
                     * 判断参数 PrivilegeDetail 是否已赋值
                     * @return PrivilegeDetail 是否已赋值
                     * 
                     */
                    bool PrivilegeDetailHasBeenSet() const;

                    /**
                     * 获取Image ID List
                     * @return EffectImageSet Image ID List
                     * 
                     */
                    std::vector<std::string> GetEffectImageSet() const;

                    /**
                     * 判断参数 EffectImageSet 是否已赋值
                     * @return EffectImageSet 是否已赋值
                     * 
                     */
                    bool EffectImageSetHasBeenSet() const;

                    /**
                     * 获取Effective After X Days
                     * @return EffectDay Effective After X Days
                     * 
                     */
                    uint64_t GetEffectDay() const;

                    /**
                     * 判断参数 EffectDay 是否已赋值
                     * @return EffectDay 是否已赋值
                     * 
                     */
                    bool EffectDayHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return RuleID Rule ID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Rule Type. RULE_RISK: Risk; RULE_PRIVILEGE: Privilege
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Number of Effective Images
                     */
                    int64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * Application to All Scanned Images. 0: Select All Images; 1: Custom Images
                     */
                    int64_t m_isEffectAllImage;
                    bool m_isEffectAllImageHasBeenSet;

                    /**
                     * Rule Effective Start Time
                     */
                    std::string m_effectTime;
                    bool m_effectTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operationUin;
                    bool m_operationUinHasBeenSet;

                    /**
                     * Effective Status. IN_THE_TEST: Observing; IN_EFFECT: Effective
                     */
                    std::string m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * Enable Status. 0: Enabled; 1: Disabled
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Vulnerability. 0: Not Selected; 1: Selected
                     */
                    int64_t m_vul;
                    bool m_vulHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::vector<std::string> m_cVEIDSet;
                    bool m_cVEIDSetHasBeenSet;

                    /**
                     * Component ID
                     */
                    std::vector<std::string> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * Vulnerability category
                     */
                    std::vector<std::string> m_vulClassSet;
                    bool m_vulClassSetHasBeenSet;

                    /**
                     * Vulnerability level
                     */
                    std::vector<std::string> m_vulLevelSet;
                    bool m_vulLevelSetHasBeenSet;

                    /**
                     * vulnerability tag
                     */
                    std::vector<std::string> m_vulLabelSet;
                    bool m_vulLabelSetHasBeenSet;

                    /**
                     * Trojan. 0: Not Selected; 1: Selected
                     */
                    int64_t m_virus;
                    bool m_virusHasBeenSet;

                    /**
                     * Trojan MD5 List
                     */
                    std::vector<std::string> m_virusMD5Set;
                    bool m_virusMD5SetHasBeenSet;

                    /**
                     * Trojan Level
                     */
                    std::vector<std::string> m_virusLevelSet;
                    bool m_virusLevelSetHasBeenSet;

                    /**
                     * Virus name
                     */
                    std::vector<std::string> m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Sensitive Information. 0: Not Selected; 1: Selected
                     */
                    int64_t m_risk;
                    bool m_riskHasBeenSet;

                    /**
                     * Sensitivity Level
                     */
                    std::vector<std::string> m_riskLevelSet;
                    bool m_riskLevelSetHasBeenSet;

                    /**
                     * Sensitive Information Classification
                     */
                    std::vector<std::string> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * Privileged Startup. 0: Not Allowed; 1: Allowed
                     */
                    int64_t m_privilegeRun;
                    bool m_privilegeRunHasBeenSet;

                    /**
                     * Privilege type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privilegeDetail;
                    bool m_privilegeDetailHasBeenSet;

                    /**
                     * Image ID List
                     */
                    std::vector<std::string> m_effectImageSet;
                    bool m_effectImageSetHasBeenSet;

                    /**
                     * Effective After X Days
                     */
                    uint64_t m_effectDay;
                    bool m_effectDayHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEDENYRULEDETAILRESPONSE_H_

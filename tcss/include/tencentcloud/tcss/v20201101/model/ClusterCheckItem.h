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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of a cluster security check item
                */
                class ClusterCheckItem : public AbstractModel
                {
                public:
                    ClusterCheckItem();
                    ~ClusterCheckItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique Check Item ID
                     * @return CheckItemId Unique Check Item ID
                     * 
                     */
                    int64_t GetCheckItemId() const;

                    /**
                     * 设置Unique Check Item ID
                     * @param _checkItemId Unique Check Item ID
                     * 
                     */
                    void SetCheckItemId(const int64_t& _checkItemId);

                    /**
                     * 判断参数 CheckItemId 是否已赋值
                     * @return CheckItemId 是否已赋值
                     * 
                     */
                    bool CheckItemIdHasBeenSet() const;

                    /**
                     * 获取Name of the risk item
                     * @return Name Name of the risk item
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the risk item
                     * @param _name Name of the risk item
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Check Item Details
                     * @return ItemDetail Check Item Details
                     * 
                     */
                    std::string GetItemDetail() const;

                    /**
                     * 设置Check Item Details
                     * @param _itemDetail Check Item Details
                     * 
                     */
                    void SetItemDetail(const std::string& _itemDetail);

                    /**
                     * 判断参数 ItemDetail 是否已赋值
                     * @return ItemDetail 是否已赋值
                     * 
                     */
                    bool ItemDetailHasBeenSet() const;

                    /**
                     * 获取Threat Level: Serious, High, Medium, Hint
                     * @return RiskLevel Threat Level: Serious, High, Medium, Hint
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Threat Level: Serious, High, Medium, Hint
                     * @param _riskLevel Threat Level: Serious, High, Medium, Hint
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Check Object and Risk Object: Runc, Kubelet, Containerd, and Pods
                     * @return RiskTarget Check Object and Risk Object: Runc, Kubelet, Containerd, and Pods
                     * 
                     */
                    std::string GetRiskTarget() const;

                    /**
                     * 设置Check Object and Risk Object: Runc, Kubelet, Containerd, and Pods
                     * @param _riskTarget Check Object and Risk Object: Runc, Kubelet, Containerd, and Pods
                     * 
                     */
                    void SetRiskTarget(const std::string& _riskTarget);

                    /**
                     * 判断参数 RiskTarget 是否已赋值
                     * @return RiskTarget 是否已赋值
                     * 
                     */
                    bool RiskTargetHasBeenSet() const;

                    /**
                     * 获取Risk Category. CVERisk: Vulnerability Risk; ConfigRisk: Configuration Risk
                     * @return RiskType Risk Category. CVERisk: Vulnerability Risk; ConfigRisk: Configuration Risk
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置Risk Category. CVERisk: Vulnerability Risk; ConfigRisk: Configuration Risk
                     * @param _riskType Risk Category. CVERisk: Vulnerability Risk; ConfigRisk: Configuration Risk
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取Risk Type of Check Item. PrivilegePromotion: Privilege Promotion; RefuseService: Refuse of Service; DirectoryEscape: Directory Traversal; UnauthorizedAccess: Unauthorized Access; PrivilegeAndAccessControl: Permission and Access Control Issues; SensitiveInfoLeak: Sensitive Information Leakage
                     * @return RiskAttribute Risk Type of Check Item. PrivilegePromotion: Privilege Promotion; RefuseService: Refuse of Service; DirectoryEscape: Directory Traversal; UnauthorizedAccess: Unauthorized Access; PrivilegeAndAccessControl: Permission and Access Control Issues; SensitiveInfoLeak: Sensitive Information Leakage
                     * 
                     */
                    std::string GetRiskAttribute() const;

                    /**
                     * 设置Risk Type of Check Item. PrivilegePromotion: Privilege Promotion; RefuseService: Refuse of Service; DirectoryEscape: Directory Traversal; UnauthorizedAccess: Unauthorized Access; PrivilegeAndAccessControl: Permission and Access Control Issues; SensitiveInfoLeak: Sensitive Information Leakage
                     * @param _riskAttribute Risk Type of Check Item. PrivilegePromotion: Privilege Promotion; RefuseService: Refuse of Service; DirectoryEscape: Directory Traversal; UnauthorizedAccess: Unauthorized Access; PrivilegeAndAccessControl: Permission and Access Control Issues; SensitiveInfoLeak: Sensitive Information Leakage
                     * 
                     */
                    void SetRiskAttribute(const std::string& _riskAttribute);

                    /**
                     * 判断参数 RiskAttribute 是否已赋值
                     * @return RiskAttribute 是否已赋值
                     * 
                     */
                    bool RiskAttributeHasBeenSet() const;

                    /**
                     * 获取Risk Characteristics Tag
ExistEXP: With EXP
ExistPOC: With POD
NoNeedReboot: No Need of Reboot
ServerRestart: Service Reboot
RemoteInfoLeak: Remote Information Leakage
RemoteRefuseService: Remote Refuse Service
RemoteExploit: Remote Exploitation
RemoteExecute: Remote Execution
                     * @return RiskProperty Risk Characteristics Tag
ExistEXP: With EXP
ExistPOC: With POD
NoNeedReboot: No Need of Reboot
ServerRestart: Service Reboot
RemoteInfoLeak: Remote Information Leakage
RemoteRefuseService: Remote Refuse Service
RemoteExploit: Remote Exploitation
RemoteExecute: Remote Execution
                     * 
                     */
                    std::string GetRiskProperty() const;

                    /**
                     * 设置Risk Characteristics Tag
ExistEXP: With EXP
ExistPOC: With POD
NoNeedReboot: No Need of Reboot
ServerRestart: Service Reboot
RemoteInfoLeak: Remote Information Leakage
RemoteRefuseService: Remote Refuse Service
RemoteExploit: Remote Exploitation
RemoteExecute: Remote Execution
                     * @param _riskProperty Risk Characteristics Tag
ExistEXP: With EXP
ExistPOC: With POD
NoNeedReboot: No Need of Reboot
ServerRestart: Service Reboot
RemoteInfoLeak: Remote Information Leakage
RemoteRefuseService: Remote Refuse Service
RemoteExploit: Remote Exploitation
RemoteExecute: Remote Execution
                     * 
                     */
                    void SetRiskProperty(const std::string& _riskProperty);

                    /**
                     * 判断参数 RiskProperty 是否已赋值
                     * @return RiskProperty 是否已赋值
                     * 
                     */
                    bool RiskPropertyHasBeenSet() const;

                    /**
                     * 获取CVE id
                     * @return CVENumber CVE id
                     * 
                     */
                    std::string GetCVENumber() const;

                    /**
                     * 设置CVE id
                     * @param _cVENumber CVE id
                     * 
                     */
                    void SetCVENumber(const std::string& _cVENumber);

                    /**
                     * 判断参数 CVENumber 是否已赋值
                     * @return CVENumber 是否已赋值
                     * 
                     */
                    bool CVENumberHasBeenSet() const;

                    /**
                     * 获取Disclosure time
                     * @return DiscoverTime Disclosure time
                     * 
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置Disclosure time
                     * @param _discoverTime Disclosure time
                     * 
                     */
                    void SetDiscoverTime(const std::string& _discoverTime);

                    /**
                     * 判断参数 DiscoverTime 是否已赋值
                     * @return DiscoverTime 是否已赋值
                     * 
                     */
                    bool DiscoverTimeHasBeenSet() const;

                    /**
                     * 获取Solution
                     * @return Solution Solution
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
                     * @param _solution Solution
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取CVSS Information, Used for Drawing
                     * @return CVSS CVSS Information, Used for Drawing
                     * 
                     */
                    std::string GetCVSS() const;

                    /**
                     * 设置CVSS Information, Used for Drawing
                     * @param _cVSS CVSS Information, Used for Drawing
                     * 
                     */
                    void SetCVSS(const std::string& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取CVSS score
                     * @return CVSSScore CVSS score
                     * 
                     */
                    std::string GetCVSSScore() const;

                    /**
                     * 设置CVSS score
                     * @param _cVSSScore CVSS score
                     * 
                     */
                    void SetCVSSScore(const std::string& _cVSSScore);

                    /**
                     * 判断参数 CVSSScore 是否已赋值
                     * @return CVSSScore 是否已赋值
                     * 
                     */
                    bool CVSSScoreHasBeenSet() const;

                    /**
                     * 获取Reference link
                     * @return RelateLink Reference link
                     * 
                     */
                    std::string GetRelateLink() const;

                    /**
                     * 设置Reference link
                     * @param _relateLink Reference link
                     * 
                     */
                    void SetRelateLink(const std::string& _relateLink);

                    /**
                     * 判断参数 RelateLink 是否已赋值
                     * @return RelateLink 是否已赋值
                     * 
                     */
                    bool RelateLinkHasBeenSet() const;

                    /**
                     * 获取Impact Type: Node or Workload
                     * @return AffectedType Impact Type: Node or Workload
                     * 
                     */
                    std::string GetAffectedType() const;

                    /**
                     * 设置Impact Type: Node or Workload
                     * @param _affectedType Impact Type: Node or Workload
                     * 
                     */
                    void SetAffectedType(const std::string& _affectedType);

                    /**
                     * 判断参数 AffectedType 是否已赋值
                     * @return AffectedType 是否已赋值
                     * 
                     */
                    bool AffectedTypeHasBeenSet() const;

                    /**
                     * 获取Affected Version Information
                     * @return AffectedVersion Affected Version Information
                     * 
                     */
                    std::string GetAffectedVersion() const;

                    /**
                     * 设置Affected Version Information
                     * @param _affectedVersion Affected Version Information
                     * 
                     */
                    void SetAffectedVersion(const std::string& _affectedVersion);

                    /**
                     * 判断参数 AffectedVersion 是否已赋值
                     * @return AffectedVersion 是否已赋值
                     * 
                     */
                    bool AffectedVersionHasBeenSet() const;

                    /**
                     * 获取Number of Ignored Assets
                     * @return IgnoredAssetNum Number of Ignored Assets
                     * 
                     */
                    int64_t GetIgnoredAssetNum() const;

                    /**
                     * 设置Number of Ignored Assets
                     * @param _ignoredAssetNum Number of Ignored Assets
                     * 
                     */
                    void SetIgnoredAssetNum(const int64_t& _ignoredAssetNum);

                    /**
                     * 判断参数 IgnoredAssetNum 是否已赋值
                     * @return IgnoredAssetNum 是否已赋值
                     * 
                     */
                    bool IgnoredAssetNumHasBeenSet() const;

                    /**
                     * 获取Whether to Ignore the Check Item
                     * @return IsIgnored Whether to Ignore the Check Item
                     * 
                     */
                    bool GetIsIgnored() const;

                    /**
                     * 设置Whether to Ignore the Check Item
                     * @param _isIgnored Whether to Ignore the Check Item
                     * 
                     */
                    void SetIsIgnored(const bool& _isIgnored);

                    /**
                     * 判断参数 IsIgnored 是否已赋值
                     * @return IsIgnored 是否已赋值
                     * 
                     */
                    bool IsIgnoredHasBeenSet() const;

                    /**
                     * 获取Affected Critique
                     * @return RiskAssessment Affected Critique
                     * 
                     */
                    std::string GetRiskAssessment() const;

                    /**
                     * 设置Affected Critique
                     * @param _riskAssessment Affected Critique
                     * 
                     */
                    void SetRiskAssessment(const std::string& _riskAssessment);

                    /**
                     * 判断参数 RiskAssessment 是否已赋值
                     * @return RiskAssessment 是否已赋值
                     * 
                     */
                    bool RiskAssessmentHasBeenSet() const;

                private:

                    /**
                     * Unique Check Item ID
                     */
                    int64_t m_checkItemId;
                    bool m_checkItemIdHasBeenSet;

                    /**
                     * Name of the risk item
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Check Item Details
                     */
                    std::string m_itemDetail;
                    bool m_itemDetailHasBeenSet;

                    /**
                     * Threat Level: Serious, High, Medium, Hint
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Check Object and Risk Object: Runc, Kubelet, Containerd, and Pods
                     */
                    std::string m_riskTarget;
                    bool m_riskTargetHasBeenSet;

                    /**
                     * Risk Category. CVERisk: Vulnerability Risk; ConfigRisk: Configuration Risk
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * Risk Type of Check Item. PrivilegePromotion: Privilege Promotion; RefuseService: Refuse of Service; DirectoryEscape: Directory Traversal; UnauthorizedAccess: Unauthorized Access; PrivilegeAndAccessControl: Permission and Access Control Issues; SensitiveInfoLeak: Sensitive Information Leakage
                     */
                    std::string m_riskAttribute;
                    bool m_riskAttributeHasBeenSet;

                    /**
                     * Risk Characteristics Tag
ExistEXP: With EXP
ExistPOC: With POD
NoNeedReboot: No Need of Reboot
ServerRestart: Service Reboot
RemoteInfoLeak: Remote Information Leakage
RemoteRefuseService: Remote Refuse Service
RemoteExploit: Remote Exploitation
RemoteExecute: Remote Execution
                     */
                    std::string m_riskProperty;
                    bool m_riskPropertyHasBeenSet;

                    /**
                     * CVE id
                     */
                    std::string m_cVENumber;
                    bool m_cVENumberHasBeenSet;

                    /**
                     * Disclosure time
                     */
                    std::string m_discoverTime;
                    bool m_discoverTimeHasBeenSet;

                    /**
                     * Solution
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * CVSS Information, Used for Drawing
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * CVSS score
                     */
                    std::string m_cVSSScore;
                    bool m_cVSSScoreHasBeenSet;

                    /**
                     * Reference link
                     */
                    std::string m_relateLink;
                    bool m_relateLinkHasBeenSet;

                    /**
                     * Impact Type: Node or Workload
                     */
                    std::string m_affectedType;
                    bool m_affectedTypeHasBeenSet;

                    /**
                     * Affected Version Information
                     */
                    std::string m_affectedVersion;
                    bool m_affectedVersionHasBeenSet;

                    /**
                     * Number of Ignored Assets
                     */
                    int64_t m_ignoredAssetNum;
                    bool m_ignoredAssetNumHasBeenSet;

                    /**
                     * Whether to Ignore the Check Item
                     */
                    bool m_isIgnored;
                    bool m_isIgnoredHasBeenSet;

                    /**
                     * Affected Critique
                     */
                    std::string m_riskAssessment;
                    bool m_riskAssessmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_

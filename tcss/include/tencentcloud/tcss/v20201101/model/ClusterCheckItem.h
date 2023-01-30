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
                     * 获取Unique ID of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckItemId Unique ID of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetCheckItemId() const;

                    /**
                     * 设置Unique ID of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CheckItemId Unique ID of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCheckItemId(const int64_t& _checkItemId);

                    /**
                     * 判断参数 CheckItemId 是否已赋值
                     * @return CheckItemId 是否已赋值
                     */
                    bool CheckItemIdHasBeenSet() const;

                    /**
                     * 获取Name of the risk item
                     * @return Name Name of the risk item
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the risk item
                     * @param Name Name of the risk item
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Detailed description of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ItemDetail Detailed description of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetItemDetail() const;

                    /**
                     * 设置Detailed description of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ItemDetail Detailed description of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetItemDetail(const std::string& _itemDetail);

                    /**
                     * 判断参数 ItemDetail 是否已赋值
                     * @return ItemDetail 是否已赋值
                     */
                    bool ItemDetailHasBeenSet() const;

                    /**
                     * 获取Severity. Valid values: `Serious` (critical); `High` (high); `Middle` (medium); `Hint` (prompt).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Severity. Valid values: `Serious` (critical); `High` (high); `Middle` (medium); `Hint` (prompt).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Severity. Valid values: `Serious` (critical); `High` (high); `Middle` (medium); `Hint` (prompt).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskLevel Severity. Valid values: `Serious` (critical); `High` (high); `Middle` (medium); `Hint` (prompt).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Check target and risky target. Valid values: `Runc`, `Kubelet`, `Containerd`, `Pods`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskTarget Check target and risky target. Valid values: `Runc`, `Kubelet`, `Containerd`, `Pods`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskTarget() const;

                    /**
                     * 设置Check target and risky target. Valid values: `Runc`, `Kubelet`, `Containerd`, `Pods`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskTarget Check target and risky target. Valid values: `Runc`, `Kubelet`, `Containerd`, `Pods`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskTarget(const std::string& _riskTarget);

                    /**
                     * 判断参数 RiskTarget 是否已赋值
                     * @return RiskTarget 是否已赋值
                     */
                    bool RiskTargetHasBeenSet() const;

                    /**
                     * 获取Risk type. Valid values: `CVERisk` (vulnerability risk); `ConfigRisk` (configuration risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskType Risk type. Valid values: `CVERisk` (vulnerability risk); `ConfigRisk` (configuration risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置Risk type. Valid values: `CVERisk` (vulnerability risk); `ConfigRisk` (configuration risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskType Risk type. Valid values: `CVERisk` (vulnerability risk); `ConfigRisk` (configuration risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取Risk type of the check item. Valid values: `PrivilegePromotion` (privilege escalation); `RefuseService` (service rejected); `DirectoryEscape` (directory traversal); `UnauthorizedAccess` (unauthorized access); `PrivilegeAndAccessControl` (permissions, privileges, and access controls); `SensitiveInfoLeak` (sensitive data leakage).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskAttribute Risk type of the check item. Valid values: `PrivilegePromotion` (privilege escalation); `RefuseService` (service rejected); `DirectoryEscape` (directory traversal); `UnauthorizedAccess` (unauthorized access); `PrivilegeAndAccessControl` (permissions, privileges, and access controls); `SensitiveInfoLeak` (sensitive data leakage).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskAttribute() const;

                    /**
                     * 设置Risk type of the check item. Valid values: `PrivilegePromotion` (privilege escalation); `RefuseService` (service rejected); `DirectoryEscape` (directory traversal); `UnauthorizedAccess` (unauthorized access); `PrivilegeAndAccessControl` (permissions, privileges, and access controls); `SensitiveInfoLeak` (sensitive data leakage).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskAttribute Risk type of the check item. Valid values: `PrivilegePromotion` (privilege escalation); `RefuseService` (service rejected); `DirectoryEscape` (directory traversal); `UnauthorizedAccess` (unauthorized access); `PrivilegeAndAccessControl` (permissions, privileges, and access controls); `SensitiveInfoLeak` (sensitive data leakage).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskAttribute(const std::string& _riskAttribute);

                    /**
                     * 判断参数 RiskAttribute 是否已赋值
                     * @return RiskAttribute 是否已赋值
                     */
                    bool RiskAttributeHasBeenSet() const;

                    /**
                     * 获取Risk characteristic and tag. Valid values: `ExistEXP` (an EXP exists); `ExistPOC` (a POC exists); `NoNeedReboot` (restart not required); `ServerRestart` (service restart); `RemoteInfoLeak` (remote information leakage); `RemoteRefuseService` (remote denial of service); `RemoteExploit` (remote exploit); `RemoteExecute` (remote execution).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskProperty Risk characteristic and tag. Valid values: `ExistEXP` (an EXP exists); `ExistPOC` (a POC exists); `NoNeedReboot` (restart not required); `ServerRestart` (service restart); `RemoteInfoLeak` (remote information leakage); `RemoteRefuseService` (remote denial of service); `RemoteExploit` (remote exploit); `RemoteExecute` (remote execution).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskProperty() const;

                    /**
                     * 设置Risk characteristic and tag. Valid values: `ExistEXP` (an EXP exists); `ExistPOC` (a POC exists); `NoNeedReboot` (restart not required); `ServerRestart` (service restart); `RemoteInfoLeak` (remote information leakage); `RemoteRefuseService` (remote denial of service); `RemoteExploit` (remote exploit); `RemoteExecute` (remote execution).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskProperty Risk characteristic and tag. Valid values: `ExistEXP` (an EXP exists); `ExistPOC` (a POC exists); `NoNeedReboot` (restart not required); `ServerRestart` (service restart); `RemoteInfoLeak` (remote information leakage); `RemoteRefuseService` (remote denial of service); `RemoteExploit` (remote exploit); `RemoteExecute` (remote execution).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskProperty(const std::string& _riskProperty);

                    /**
                     * 判断参数 RiskProperty 是否已赋值
                     * @return RiskProperty 是否已赋值
                     */
                    bool RiskPropertyHasBeenSet() const;

                    /**
                     * 获取CVE No.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVENumber CVE No.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCVENumber() const;

                    /**
                     * 设置CVE No.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CVENumber CVE No.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCVENumber(const std::string& _cVENumber);

                    /**
                     * 判断参数 CVENumber 是否已赋值
                     * @return CVENumber 是否已赋值
                     */
                    bool CVENumberHasBeenSet() const;

                    /**
                     * 获取Disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiscoverTime Disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDiscoverTime() const;

                    /**
                     * 设置Disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DiscoverTime Disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDiscoverTime(const std::string& _discoverTime);

                    /**
                     * 判断参数 DiscoverTime 是否已赋值
                     * @return DiscoverTime 是否已赋值
                     */
                    bool DiscoverTimeHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Solution Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取CVSS information, which is used for drawing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVSS CVSS information, which is used for drawing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCVSS() const;

                    /**
                     * 设置CVSS information, which is used for drawing.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CVSS CVSS information, which is used for drawing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCVSS(const std::string& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CVSSScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCVSSScore() const;

                    /**
                     * 设置CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CVSSScore CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCVSSScore(const std::string& _cVSSScore);

                    /**
                     * 判断参数 CVSSScore 是否已赋值
                     * @return CVSSScore 是否已赋值
                     */
                    bool CVSSScoreHasBeenSet() const;

                    /**
                     * 获取Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelateLink Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRelateLink() const;

                    /**
                     * 设置Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RelateLink Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRelateLink(const std::string& _relateLink);

                    /**
                     * 判断参数 RelateLink 是否已赋值
                     * @return RelateLink 是否已赋值
                     */
                    bool RelateLinkHasBeenSet() const;

                    /**
                     * 获取Affected type. Valid values: `Node`, `Workload`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AffectedType Affected type. Valid values: `Node`, `Workload`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAffectedType() const;

                    /**
                     * 设置Affected type. Valid values: `Node`, `Workload`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AffectedType Affected type. Valid values: `Node`, `Workload`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAffectedType(const std::string& _affectedType);

                    /**
                     * 判断参数 AffectedType 是否已赋值
                     * @return AffectedType 是否已赋值
                     */
                    bool AffectedTypeHasBeenSet() const;

                    /**
                     * 获取Affected version information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AffectedVersion Affected version information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAffectedVersion() const;

                    /**
                     * 设置Affected version information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AffectedVersion Affected version information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAffectedVersion(const std::string& _affectedVersion);

                    /**
                     * 判断参数 AffectedVersion 是否已赋值
                     * @return AffectedVersion 是否已赋值
                     */
                    bool AffectedVersionHasBeenSet() const;

                    /**
                     * 获取Number of ignored assets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoredAssetNum Number of ignored assets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIgnoredAssetNum() const;

                    /**
                     * 设置Number of ignored assets
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IgnoredAssetNum Number of ignored assets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIgnoredAssetNum(const int64_t& _ignoredAssetNum);

                    /**
                     * 判断参数 IgnoredAssetNum 是否已赋值
                     * @return IgnoredAssetNum 是否已赋值
                     */
                    bool IgnoredAssetNumHasBeenSet() const;

                    /**
                     * 获取Whether to ignore the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsIgnored Whether to ignore the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsIgnored() const;

                    /**
                     * 设置Whether to ignore the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsIgnored Whether to ignore the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsIgnored(const bool& _isIgnored);

                    /**
                     * 判断参数 IsIgnored 是否已赋值
                     * @return IsIgnored 是否已赋值
                     */
                    bool IsIgnoredHasBeenSet() const;

                    /**
                     * 获取Impact assessment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskAssessment Impact assessment
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskAssessment() const;

                    /**
                     * 设置Impact assessment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RiskAssessment Impact assessment
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRiskAssessment(const std::string& _riskAssessment);

                    /**
                     * 判断参数 RiskAssessment 是否已赋值
                     * @return RiskAssessment 是否已赋值
                     */
                    bool RiskAssessmentHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_checkItemId;
                    bool m_checkItemIdHasBeenSet;

                    /**
                     * Name of the risk item
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Detailed description of the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_itemDetail;
                    bool m_itemDetailHasBeenSet;

                    /**
                     * Severity. Valid values: `Serious` (critical); `High` (high); `Middle` (medium); `Hint` (prompt).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Check target and risky target. Valid values: `Runc`, `Kubelet`, `Containerd`, `Pods`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskTarget;
                    bool m_riskTargetHasBeenSet;

                    /**
                     * Risk type. Valid values: `CVERisk` (vulnerability risk); `ConfigRisk` (configuration risk).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * Risk type of the check item. Valid values: `PrivilegePromotion` (privilege escalation); `RefuseService` (service rejected); `DirectoryEscape` (directory traversal); `UnauthorizedAccess` (unauthorized access); `PrivilegeAndAccessControl` (permissions, privileges, and access controls); `SensitiveInfoLeak` (sensitive data leakage).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskAttribute;
                    bool m_riskAttributeHasBeenSet;

                    /**
                     * Risk characteristic and tag. Valid values: `ExistEXP` (an EXP exists); `ExistPOC` (a POC exists); `NoNeedReboot` (restart not required); `ServerRestart` (service restart); `RemoteInfoLeak` (remote information leakage); `RemoteRefuseService` (remote denial of service); `RemoteExploit` (remote exploit); `RemoteExecute` (remote execution).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskProperty;
                    bool m_riskPropertyHasBeenSet;

                    /**
                     * CVE No.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVENumber;
                    bool m_cVENumberHasBeenSet;

                    /**
                     * Disclosure time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_discoverTime;
                    bool m_discoverTimeHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * CVSS information, which is used for drawing.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * CVSS score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cVSSScore;
                    bool m_cVSSScoreHasBeenSet;

                    /**
                     * Reference link
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_relateLink;
                    bool m_relateLinkHasBeenSet;

                    /**
                     * Affected type. Valid values: `Node`, `Workload`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_affectedType;
                    bool m_affectedTypeHasBeenSet;

                    /**
                     * Affected version information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_affectedVersion;
                    bool m_affectedVersionHasBeenSet;

                    /**
                     * Number of ignored assets
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ignoredAssetNum;
                    bool m_ignoredAssetNumHasBeenSet;

                    /**
                     * Whether to ignore the check item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isIgnored;
                    bool m_isIgnoredHasBeenSet;

                    /**
                     * Impact assessment
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskAssessment;
                    bool m_riskAssessmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCHECKITEM_H_

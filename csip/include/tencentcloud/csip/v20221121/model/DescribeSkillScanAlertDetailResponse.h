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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillCapabilityTag.h>
#include <tencentcloud/csip/v20221121/model/SkillRuleCatalogItem.h>
#include <tencentcloud/csip/v20221121/model/SkillScanEngineResult.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanAlertDetail response structure.
                */
                class DescribeSkillScanAlertDetailResponse : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertDetailResponse();
                    ~DescribeSkillScanAlertDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Alarm record ID</p>
                     * @return ID <p>Alarm record ID</p>
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
                     * 获取<p>Tenant AppID</p>
                     * @return AppID <p>Tenant AppID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Host UUID</p>
                     * @return UUID <p>Host UUID</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取<p>Host IP address</p>
                     * @return HostIP <p>Host IP address</p>
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     * @return InstanceID <p>Instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * @return BelongAssetType <p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Skill name</p>
                     * @return SkillName <p>Skill name</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取<p>Skill file path</p>
                     * @return SkillPath <p>Skill file path</p>
                     * 
                     */
                    std::string GetSkillPath() const;

                    /**
                     * 判断参数 SkillPath 是否已赋值
                     * @return SkillPath 是否已赋值
                     * 
                     */
                    bool SkillPathHasBeenSet() const;

                    /**
                     * 获取<p>Skill application scope</p>
                     * @return Scope <p>Skill application scope</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Skill version number</p>
                     * @return Version <p>Skill version number</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>SHA256 hash of file content<br>Parameter format: sha256:&lt;64-digit hex&gt;</p>
                     * @return ContentHash <p>SHA256 hash of file content<br>Parameter format: sha256:&lt;64-digit hex&gt;</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>Risk level<br>Enumeration values:<br>malicious: Malicious<br>suspicious: Suspicious</p>
                     * @return RiskLevel <p>Risk level<br>Enumeration values:<br>malicious: Malicious<br>suspicious: Suspicious</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Security score<br>Value range: [0, 100]</p>
                     * @return SecurityScore <p>Security score<br>Value range: [0, 100]</p>
                     * 
                     */
                    int64_t GetSecurityScore() const;

                    /**
                     * 判断参数 SecurityScore 是否已赋值
                     * @return SecurityScore 是否已赋值
                     * 
                     */
                    bool SecurityScoreHasBeenSet() const;

                    /**
                     * 获取<p>Main matched rule ID</p>
                     * @return PrimaryRuleID <p>Main matched rule ID</p>
                     * 
                     */
                    std::string GetPrimaryRuleID() const;

                    /**
                     * 判断参数 PrimaryRuleID 是否已赋值
                     * @return PrimaryRuleID 是否已赋值
                     * 
                     */
                    bool PrimaryRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Detection engine version number</p>
                     * @return EngineVersion <p>Detection engine version number</p>
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>Processing status<br>Enumeration values:<br>0: unprocessed<br>1: processed<br>2: ignored<br>3: trusted</p>
                     * @return Status <p>Processing status<br>Enumeration values:<br>0: unprocessed<br>1: processed<br>2: ignored<br>3: trusted</p>
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
                     * 获取<p>Alarm level<br>Enumeration values:<br>high: High risk<br>medium: Medium risk</p>
                     * @return Level <p>Alarm level<br>Enumeration values:<br>high: High risk<br>medium: Medium risk</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>First detection time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return CreateTime <p>First detection time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Skill feature description (engine real-time query return)</p>
                     * @return SkillDescription <p>Skill feature description (engine real-time query return)</p>
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 判断参数 SkillDescription 是否已赋值
                     * @return SkillDescription 是否已赋值
                     * 
                     */
                    bool SkillDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Comprehensive risk abstract summarizing the primary risks/attack chains identified in this detection (query in real time via engine). Returns copywriting in English when Language=en-US is passed.</p>
                     * @return RiskDescription <p>Comprehensive risk abstract summarizing the primary risks/attack chains identified in this detection (query in real time via engine). Returns copywriting in English when Language=en-US is passed.</p>
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Handling suggestions (real-time query by engine)</p>
                     * @return Mitigation <p>Handling suggestions (real-time query by engine)</p>
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 判断参数 Mitigation 是否已赋值
                     * @return Mitigation 是否已赋值
                     * 
                     */
                    bool MitigationHasBeenSet() const;

                    /**
                     * 获取<p>Skill capacity tag list (returned by engine real-time query)</p>
                     * @return CapabilityTags <p>Skill capacity tag list (returned by engine real-time query)</p>
                     * 
                     */
                    std::vector<SkillCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 判断参数 CapabilityTags 是否已赋值
                     * @return CapabilityTags 是否已赋值
                     * 
                     */
                    bool CapabilityTagsHasBeenSet() const;

                    /**
                     * 获取<p>Fusion rule directory list (returned by engine query in real time)</p>
                     * @return RuleCatalog <p>Fusion rule directory list (returned by engine query in real time)</p>
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 判断参数 RuleCatalog 是否已赋值
                     * @return RuleCatalog 是否已赋值
                     * 
                     */
                    bool RuleCatalogHasBeenSet() const;

                    /**
                     * 获取<p>Scan result details list (returned by engine query in real time)</p>
                     * @return ScanItems <p>Scan result details list (returned by engine query in real time)</p>
                     * 
                     */
                    std::vector<SkillScanEngineResult> GetScanItems() const;

                    /**
                     * 判断参数 ScanItems 是否已赋值
                     * @return ScanItems 是否已赋值
                     * 
                     */
                    bool ScanItemsHasBeenSet() const;

                    /**
                     * 获取<p>Detection report link (returned by real-time query from the engine)</p>
                     * @return ReportURL <p>Detection report link (returned by real-time query from the engine)</p>
                     * 
                     */
                    std::string GetReportURL() const;

                    /**
                     * 判断参数 ReportURL 是否已赋值
                     * @return ReportURL 是否已赋值
                     * 
                     */
                    bool ReportURLHasBeenSet() const;

                    /**
                     * 获取<p>Scan complete time (returned by the engine in real-time query)<br>Parameter format: ISO8601 format</p>
                     * @return ScannedAt <p>Scan complete time (returned by the engine in real-time query)<br>Parameter format: ISO8601 format</p>
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 判断参数 ScannedAt 是否已赋值
                     * @return ScannedAt 是否已赋值
                     * 
                     */
                    bool ScannedAtHasBeenSet() const;

                private:

                    /**
                     * <p>Alarm record ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Tenant AppID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Host UUID</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>Host IP address</p>
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * <p>Instance ID<br>Parameter format: such as ins-xxxxxxxx</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Asset type affiliation<br>Enumeration values:<br>HOST: Host<br>CONTAINER: Container</p>
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * <p>Skill name</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>Skill file path</p>
                     */
                    std::string m_skillPath;
                    bool m_skillPathHasBeenSet;

                    /**
                     * <p>Skill application scope</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Skill version number</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>SHA256 hash of file content<br>Parameter format: sha256:&lt;64-digit hex&gt;</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>Risk level<br>Enumeration values:<br>malicious: Malicious<br>suspicious: Suspicious</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Security score<br>Value range: [0, 100]</p>
                     */
                    int64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * <p>Main matched rule ID</p>
                     */
                    std::string m_primaryRuleID;
                    bool m_primaryRuleIDHasBeenSet;

                    /**
                     * <p>Detection engine version number</p>
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Processing status<br>Enumeration values:<br>0: unprocessed<br>1: processed<br>2: ignored<br>3: trusted</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Alarm level<br>Enumeration values:<br>high: High risk<br>medium: Medium risk</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>First detection time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Skill feature description (engine real-time query return)</p>
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * <p>Comprehensive risk abstract summarizing the primary risks/attack chains identified in this detection (query in real time via engine). Returns copywriting in English when Language=en-US is passed.</p>
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * <p>Handling suggestions (real-time query by engine)</p>
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * <p>Skill capacity tag list (returned by engine real-time query)</p>
                     */
                    std::vector<SkillCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * <p>Fusion rule directory list (returned by engine query in real time)</p>
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * <p>Scan result details list (returned by engine query in real time)</p>
                     */
                    std::vector<SkillScanEngineResult> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * <p>Detection report link (returned by real-time query from the engine)</p>
                     */
                    std::string m_reportURL;
                    bool m_reportURLHasBeenSet;

                    /**
                     * <p>Scan complete time (returned by the engine in real-time query)<br>Parameter format: ISO8601 format</p>
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILRESPONSE_H_

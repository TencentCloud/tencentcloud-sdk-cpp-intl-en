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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Skill security detection result details
                */
                class SkillScanItem : public AbstractModel
                {
                public:
                    SkillScanItem();
                    ~SkillScanItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Skill name</p>
                     * @return SkillName <p>Skill name</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置<p>Skill name</p>
                     * @param _skillName <p>Skill name</p>
                     * 
                     */
                    void SetSkillName(const std::string& _skillName);

                    /**
                     * 判断参数 SkillName 是否已赋值
                     * @return SkillName 是否已赋值
                     * 
                     */
                    bool SkillNameHasBeenSet() const;

                    /**
                     * 获取<p>Skill description to help understand its primary purpose</p>
                     * @return SkillDescription <p>Skill description to help understand its primary purpose</p>
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 设置<p>Skill description to help understand its primary purpose</p>
                     * @param _skillDescription <p>Skill description to help understand its primary purpose</p>
                     * 
                     */
                    void SetSkillDescription(const std::string& _skillDescription);

                    /**
                     * 判断参数 SkillDescription 是否已赋值
                     * @return SkillDescription 是否已赋值
                     * 
                     */
                    bool SkillDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>SHA256 Hash of the ZIP file<br>Parameter format: sha256:&lt;64-bit hex&gt;</p>
                     * @return ContentHash <p>SHA256 Hash of the ZIP file<br>Parameter format: sha256:&lt;64-bit hex&gt;</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>SHA256 Hash of the ZIP file<br>Parameter format: sha256:&lt;64-bit hex&gt;</p>
                     * @param _contentHash <p>SHA256 Hash of the ZIP file<br>Parameter format: sha256:&lt;64-bit hex&gt;</p>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取<p>The number of actual files after decompressing the original uploaded ZIP file, also within the billing limit. Each file is counted as one limit after a successful scan.</p>
                     * @return UploadFileCount <p>The number of actual files after decompressing the original uploaded ZIP file, also within the billing limit. Each file is counted as one limit after a successful scan.</p>
                     * 
                     */
                    int64_t GetUploadFileCount() const;

                    /**
                     * 设置<p>The number of actual files after decompressing the original uploaded ZIP file, also within the billing limit. Each file is counted as one limit after a successful scan.</p>
                     * @param _uploadFileCount <p>The number of actual files after decompressing the original uploaded ZIP file, also within the billing limit. Each file is counted as one limit after a successful scan.</p>
                     * 
                     */
                    void SetUploadFileCount(const int64_t& _uploadFileCount);

                    /**
                     * 判断参数 UploadFileCount 是否已赋值
                     * @return UploadFileCount 是否已赋值
                     * 
                     */
                    bool UploadFileCountHasBeenSet() const;

                    /**
                     * 获取<p>Comprehensive risk level<br>Enumeration value:<br>malicious: Malicious<br>suspicious: Suspicious<br>benign: Trustworthy</p>
                     * @return RiskLevel <p>Comprehensive risk level<br>Enumeration value:<br>malicious: Malicious<br>suspicious: Suspicious<br>benign: Trustworthy</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Comprehensive risk level<br>Enumeration value:<br>malicious: Malicious<br>suspicious: Suspicious<br>benign: Trustworthy</p>
                     * @param _riskLevel <p>Comprehensive risk level<br>Enumeration value:<br>malicious: Malicious<br>suspicious: Suspicious<br>benign: Trustworthy</p>
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
                     * 获取<p>Risk master tag fusion rule ID (9xxxx) is generated by the server from the hit fusion risk tags. It is empty when benign and no rule hits occur. The display name can be obtained via RuleCatalog.</p>
                     * @return PrimaryRuleID <p>Risk master tag fusion rule ID (9xxxx) is generated by the server from the hit fusion risk tags. It is empty when benign and no rule hits occur. The display name can be obtained via RuleCatalog.</p>
                     * 
                     */
                    std::string GetPrimaryRuleID() const;

                    /**
                     * 设置<p>Risk master tag fusion rule ID (9xxxx) is generated by the server from the hit fusion risk tags. It is empty when benign and no rule hits occur. The display name can be obtained via RuleCatalog.</p>
                     * @param _primaryRuleID <p>Risk master tag fusion rule ID (9xxxx) is generated by the server from the hit fusion risk tags. It is empty when benign and no rule hits occur. The display name can be obtained via RuleCatalog.</p>
                     * 
                     */
                    void SetPrimaryRuleID(const std::string& _primaryRuleID);

                    /**
                     * 判断参数 PrimaryRuleID 是否已赋值
                     * @return PrimaryRuleID 是否已赋值
                     * 
                     */
                    bool PrimaryRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Comprehensive handling suggestions for guiding the caller to prioritize actions such as decommissioning, isolation, repair, and recheck. The historical result may be empty. Returns copywriting in English when Language=en-US is passed.</p>
                     * @return Mitigation <p>Comprehensive handling suggestions for guiding the caller to prioritize actions such as decommissioning, isolation, repair, and recheck. The historical result may be empty. Returns copywriting in English when Language=en-US is passed.</p>
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 设置<p>Comprehensive handling suggestions for guiding the caller to prioritize actions such as decommissioning, isolation, repair, and recheck. The historical result may be empty. Returns copywriting in English when Language=en-US is passed.</p>
                     * @param _mitigation <p>Comprehensive handling suggestions for guiding the caller to prioritize actions such as decommissioning, isolation, repair, and recheck. The historical result may be empty. Returns copywriting in English when Language=en-US is passed.</p>
                     * 
                     */
                    void SetMitigation(const std::string& _mitigation);

                    /**
                     * 判断参数 Mitigation 是否已赋值
                     * @return Mitigation 是否已赋值
                     * 
                     */
                    bool MitigationHasBeenSet() const;

                    /**
                     * 获取<p>Comprehensive risk description provides an overview of risks found in this detection. Returns English copy when Language=en-US is passed.</p>
                     * @return RiskDescription <p>Comprehensive risk description provides an overview of risks found in this detection. Returns English copy when Language=en-US is passed.</p>
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置<p>Comprehensive risk description provides an overview of risks found in this detection. Returns English copy when Language=en-US is passed.</p>
                     * @param _riskDescription <p>Comprehensive risk description provides an overview of risks found in this detection. Returns English copy when Language=en-US is passed.</p>
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Security score value ranges from 0 to 100. Supplementary explanation: the higher the score, the more secure.</p>
                     * @return SecurityScore <p>Security score value ranges from 0 to 100. Supplementary explanation: the higher the score, the more secure.</p>
                     * 
                     */
                    int64_t GetSecurityScore() const;

                    /**
                     * 设置<p>Security score value ranges from 0 to 100. Supplementary explanation: the higher the score, the more secure.</p>
                     * @param _securityScore <p>Security score value ranges from 0 to 100. Supplementary explanation: the higher the score, the more secure.</p>
                     * 
                     */
                    void SetSecurityScore(const int64_t& _securityScore);

                    /**
                     * 判断参数 SecurityScore 是否已赋值
                     * @return SecurityScore 是否已赋值
                     * 
                     */
                    bool SecurityScoreHasBeenSet() const;

                    /**
                     * 获取<p>Engine version number used in this scan</p>
                     * @return EngineVersion <p>Engine version number used in this scan</p>
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 设置<p>Engine version number used in this scan</p>
                     * @param _engineVersion <p>Engine version number used in this scan</p>
                     * 
                     */
                    void SetEngineVersion(const int64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>Skill ability tag list describes the ability features or application scenarios of Skill. It is not equal to risk tag and does not participate in risk level judgment. When Language=en-US is passed, Name switches to English while ID remains unchanged.</p>
                     * @return CapabilityTags <p>Skill ability tag list describes the ability features or application scenarios of Skill. It is not equal to risk tag and does not participate in risk level judgment. When Language=en-US is passed, Name switches to English while ID remains unchanged.</p>
                     * 
                     */
                    std::vector<SkillCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 设置<p>Skill ability tag list describes the ability features or application scenarios of Skill. It is not equal to risk tag and does not participate in risk level judgment. When Language=en-US is passed, Name switches to English while ID remains unchanged.</p>
                     * @param _capabilityTags <p>Skill ability tag list describes the ability features or application scenarios of Skill. It is not equal to risk tag and does not participate in risk level judgment. When Language=en-US is passed, Name switches to English while ID remains unchanged.</p>
                     * 
                     */
                    void SetCapabilityTags(const std::vector<SkillCapabilityTag>& _capabilityTags);

                    /**
                     * 判断参数 CapabilityTags 是否已赋值
                     * @return CapabilityTags 是否已赋值
                     * 
                     */
                    bool CapabilityTagsHasBeenSet() const;

                    /**
                     * 获取<p>Complete set of fusion rule directory, including all fusion rule categories (9xxxx). The caller can show category tags accordingly without the need to maintain a mapping table locally. Returns English name when Language=en-US is passed.</p>
                     * @return RuleCatalog <p>Complete set of fusion rule directory, including all fusion rule categories (9xxxx). The caller can show category tags accordingly without the need to maintain a mapping table locally. Returns English name when Language=en-US is passed.</p>
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 设置<p>Complete set of fusion rule directory, including all fusion rule categories (9xxxx). The caller can show category tags accordingly without the need to maintain a mapping table locally. Returns English name when Language=en-US is passed.</p>
                     * @param _ruleCatalog <p>Complete set of fusion rule directory, including all fusion rule categories (9xxxx). The caller can show category tags accordingly without the need to maintain a mapping table locally. Returns English name when Language=en-US is passed.</p>
                     * 
                     */
                    void SetRuleCatalog(const std::vector<SkillRuleCatalogItem>& _ruleCatalog);

                    /**
                     * 判断参数 RuleCatalog 是否已赋值
                     * @return RuleCatalog 是否已赋值
                     * 
                     */
                    bool RuleCatalogHasBeenSet() const;

                    /**
                     * 获取<p>Scan result details, grouped by sub-engine. Each element contains ScanType (engine type) and RuleList (hit rule list). RuleID within the rules uses fusion code (9xxxx) and can be cross-referenced with RuleCatalog. Description returns in English when Language=en-US is passed.</p>
                     * @return ScanItems <p>Scan result details, grouped by sub-engine. Each element contains ScanType (engine type) and RuleList (hit rule list). RuleID within the rules uses fusion code (9xxxx) and can be cross-referenced with RuleCatalog. Description returns in English when Language=en-US is passed.</p>
                     * 
                     */
                    std::vector<SkillScanEngineResult> GetScanItems() const;

                    /**
                     * 设置<p>Scan result details, grouped by sub-engine. Each element contains ScanType (engine type) and RuleList (hit rule list). RuleID within the rules uses fusion code (9xxxx) and can be cross-referenced with RuleCatalog. Description returns in English when Language=en-US is passed.</p>
                     * @param _scanItems <p>Scan result details, grouped by sub-engine. Each element contains ScanType (engine type) and RuleList (hit rule list). RuleID within the rules uses fusion code (9xxxx) and can be cross-referenced with RuleCatalog. Description returns in English when Language=en-US is passed.</p>
                     * 
                     */
                    void SetScanItems(const std::vector<SkillScanEngineResult>& _scanItems);

                    /**
                     * 判断参数 ScanItems 是否已赋值
                     * @return ScanItems 是否已赋值
                     * 
                     */
                    bool ScanItemsHasBeenSet() const;

                    /**
                     * 获取<p>Comprehensive security audit report address (pre-signed URL). The valid period is controlled by the request parameter ReportURLExpireHours.</p>
                     * @return ReportURL <p>Comprehensive security audit report address (pre-signed URL). The valid period is controlled by the request parameter ReportURLExpireHours.</p>
                     * 
                     */
                    std::string GetReportURL() const;

                    /**
                     * 设置<p>Comprehensive security audit report address (pre-signed URL). The valid period is controlled by the request parameter ReportURLExpireHours.</p>
                     * @param _reportURL <p>Comprehensive security audit report address (pre-signed URL). The valid period is controlled by the request parameter ReportURLExpireHours.</p>
                     * 
                     */
                    void SetReportURL(const std::string& _reportURL);

                    /**
                     * 判断参数 ReportURL 是否已赋值
                     * @return ReportURL 是否已赋值
                     * 
                     */
                    bool ReportURLHasBeenSet() const;

                    /**
                     * 获取<p>Scan completion time. Only available when Status=SUCCESS<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return ScannedAt <p>Scan completion time. Only available when Status=SUCCESS<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 设置<p>Scan completion time. Only available when Status=SUCCESS<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _scannedAt <p>Scan completion time. Only available when Status=SUCCESS<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetScannedAt(const std::string& _scannedAt);

                    /**
                     * 判断参数 ScannedAt 是否已赋值
                     * @return ScannedAt 是否已赋值
                     * 
                     */
                    bool ScannedAtHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time. Only available when Status=SCANNING<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return CreatedAt <p>Task creation time. Only available when Status=SCANNING<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Task creation time. Only available when Status=SCANNING<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _createdAt <p>Task creation time. Only available when Status=SCANNING<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
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
                     * 获取<p>Failure time. Only valid when Status=FAILED<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return FailedAt <p>Failure time. Only valid when Status=FAILED<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetFailedAt() const;

                    /**
                     * 设置<p>Failure time. Only valid when Status=FAILED<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _failedAt <p>Failure time. Only valid when Status=FAILED<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetFailedAt(const std::string& _failedAt);

                    /**
                     * 判断参数 FailedAt 是否已赋值
                     * @return FailedAt 是否已赋值
                     * 
                     */
                    bool FailedAtHasBeenSet() const;

                    /**
                     * 获取<p>Failure reason description. Only available when Status=FAILED.</p>
                     * @return Message <p>Failure reason description. Only available when Status=FAILED.</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Failure reason description. Only available when Status=FAILED.</p>
                     * @param _message <p>Failure reason description. Only available when Status=FAILED.</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * <p>Skill name</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>Skill description to help understand its primary purpose</p>
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * <p>SHA256 Hash of the ZIP file<br>Parameter format: sha256:&lt;64-bit hex&gt;</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>The number of actual files after decompressing the original uploaded ZIP file, also within the billing limit. Each file is counted as one limit after a successful scan.</p>
                     */
                    int64_t m_uploadFileCount;
                    bool m_uploadFileCountHasBeenSet;

                    /**
                     * <p>Comprehensive risk level<br>Enumeration value:<br>malicious: Malicious<br>suspicious: Suspicious<br>benign: Trustworthy</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Risk master tag fusion rule ID (9xxxx) is generated by the server from the hit fusion risk tags. It is empty when benign and no rule hits occur. The display name can be obtained via RuleCatalog.</p>
                     */
                    std::string m_primaryRuleID;
                    bool m_primaryRuleIDHasBeenSet;

                    /**
                     * <p>Comprehensive handling suggestions for guiding the caller to prioritize actions such as decommissioning, isolation, repair, and recheck. The historical result may be empty. Returns copywriting in English when Language=en-US is passed.</p>
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * <p>Comprehensive risk description provides an overview of risks found in this detection. Returns English copy when Language=en-US is passed.</p>
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * <p>Security score value ranges from 0 to 100. Supplementary explanation: the higher the score, the more secure.</p>
                     */
                    int64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * <p>Engine version number used in this scan</p>
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Skill ability tag list describes the ability features or application scenarios of Skill. It is not equal to risk tag and does not participate in risk level judgment. When Language=en-US is passed, Name switches to English while ID remains unchanged.</p>
                     */
                    std::vector<SkillCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * <p>Complete set of fusion rule directory, including all fusion rule categories (9xxxx). The caller can show category tags accordingly without the need to maintain a mapping table locally. Returns English name when Language=en-US is passed.</p>
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * <p>Scan result details, grouped by sub-engine. Each element contains ScanType (engine type) and RuleList (hit rule list). RuleID within the rules uses fusion code (9xxxx) and can be cross-referenced with RuleCatalog. Description returns in English when Language=en-US is passed.</p>
                     */
                    std::vector<SkillScanEngineResult> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * <p>Comprehensive security audit report address (pre-signed URL). The valid period is controlled by the request parameter ReportURLExpireHours.</p>
                     */
                    std::string m_reportURL;
                    bool m_reportURLHasBeenSet;

                    /**
                     * <p>Scan completion time. Only available when Status=SUCCESS<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                    /**
                     * <p>Task creation time. Only available when Status=SCANNING<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Failure time. Only valid when Status=FAILED<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_failedAt;
                    bool m_failedAtHasBeenSet;

                    /**
                     * <p>Failure reason description. Only available when Status=FAILED.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SKILLSCANITEM_H_

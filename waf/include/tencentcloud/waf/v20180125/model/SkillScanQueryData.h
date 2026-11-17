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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANQUERYDATA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANQUERYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/SkillScanCapabilityTag.h>
#include <tencentcloud/waf/v20180125/model/SkillRuleCatalogItem.h>
#include <tencentcloud/waf/v20180125/model/SkillScanItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * List of Skill detection results
                */
                class SkillScanQueryData : public AbstractModel
                {
                public:
                    SkillScanQueryData();
                    ~SkillScanQueryData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detection status: success (detection completed with results), scanning (detection in progress), not_found (no record), or failed (detection failed)</p><p>Valid values:</p><ul><li>success: detection completed with results</li><li>scanning: detection in progress</li><li>not_found: no record</li><li>failed: detection failed</li></ul>
                     * @return Status <p>Detection status: success (detection completed with results), scanning (detection in progress), not_found (no record), or failed (detection failed)</p><p>Valid values:</p><ul><li>success: detection completed with results</li><li>scanning: detection in progress</li><li>not_found: no record</li><li>failed: detection failed</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Detection status: success (detection completed with results), scanning (detection in progress), not_found (no record), or failed (detection failed)</p><p>Valid values:</p><ul><li>success: detection completed with results</li><li>scanning: detection in progress</li><li>not_found: no record</li><li>failed: detection failed</li></ul>
                     * @param _status <p>Detection status: success (detection completed with results), scanning (detection in progress), not_found (no record), or failed (detection failed)</p><p>Valid values:</p><ul><li>success: detection completed with results</li><li>scanning: detection in progress</li><li>not_found: no record</li><li>failed: detection failed</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Skill name, used for page display, result list presentation, and manual analysis</p>
                     * @return SkillName <p>Skill name, used for page display, result list presentation, and manual analysis</p>
                     * 
                     */
                    std::string GetSkillName() const;

                    /**
                     * 设置<p>Skill name, used for page display, result list presentation, and manual analysis</p>
                     * @param _skillName <p>Skill name, used for page display, result list presentation, and manual analysis</p>
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
                     * 获取<p>Skill description, usually from Skill metadata or instructions, used to help callers understand the purpose of the Skill</p>
                     * @return SkillDescription <p>Skill description, usually from Skill metadata or instructions, used to help callers understand the purpose of the Skill</p>
                     * 
                     */
                    std::string GetSkillDescription() const;

                    /**
                     * 设置<p>Skill description, usually from Skill metadata or instructions, used to help callers understand the purpose of the Skill</p>
                     * @param _skillDescription <p>Skill description, usually from Skill metadata or instructions, used to help callers understand the purpose of the Skill</p>
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
                     * 获取<p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest</p>
                     * @return ContentHash <p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest</p>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置<p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest</p>
                     * @param _contentHash <p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest</p>
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
                     * 获取<p>Risk level: malicious, suspicious, or benign</p>
                     * @return RiskLevel <p>Risk level: malicious, suspicious, or benign</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level: malicious, suspicious, or benign</p>
                     * @param _riskLevel <p>Risk level: malicious, suspicious, or benign</p>
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
                     * 获取<p>Comprehensive handling suggestion field, located at the top level of data, used to provide overall remediation, mitigation, or manual handling suggestions for this detection result</p>
                     * @return Mitigation <p>Comprehensive handling suggestion field, located at the top level of data, used to provide overall remediation, mitigation, or manual handling suggestions for this detection result</p>
                     * 
                     */
                    std::string GetMitigation() const;

                    /**
                     * 设置<p>Comprehensive handling suggestion field, located at the top level of data, used to provide overall remediation, mitigation, or manual handling suggestions for this detection result</p>
                     * @param _mitigation <p>Comprehensive handling suggestion field, located at the top level of data, used to provide overall remediation, mitigation, or manual handling suggestions for this detection result</p>
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
                     * 获取<p>Security score (0-100, the higher the score, the more secure)</p><p>Value range: [0, 100]</p>
                     * @return SecurityScore <p>Security score (0-100, the higher the score, the more secure)</p><p>Value range: [0, 100]</p>
                     * 
                     */
                    uint64_t GetSecurityScore() const;

                    /**
                     * 设置<p>Security score (0-100, the higher the score, the more secure)</p><p>Value range: [0, 100]</p>
                     * @param _securityScore <p>Security score (0-100, the higher the score, the more secure)</p><p>Value range: [0, 100]</p>
                     * 
                     */
                    void SetSecurityScore(const uint64_t& _securityScore);

                    /**
                     * 判断参数 SecurityScore 是否已赋值
                     * @return SecurityScore 是否已赋值
                     * 
                     */
                    bool SecurityScoreHasBeenSet() const;

                    /**
                     * 获取<p>Engine version used for this scan</p>
                     * @return EngineVersion <p>Engine version used for this scan</p>
                     * 
                     */
                    uint64_t GetEngineVersion() const;

                    /**
                     * 设置<p>Engine version used for this scan</p>
                     * @param _engineVersion <p>Engine version used for this scan</p>
                     * 
                     */
                    void SetEngineVersion(const uint64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>List of capability tags of the Skill. The fixed external return format is [{id,name}]. This field describes the capability features or applicable scenarios of the Skill, facilitating retrieval, display, or classification by callers. It is not equivalent to risk tags, nor does it indicate risk level or rule hit results. When lang=en, only name is switched to English, and id remains unchanged</p>
                     * @return CapabilityTags <p>List of capability tags of the Skill. The fixed external return format is [{id,name}]. This field describes the capability features or applicable scenarios of the Skill, facilitating retrieval, display, or classification by callers. It is not equivalent to risk tags, nor does it indicate risk level or rule hit results. When lang=en, only name is switched to English, and id remains unchanged</p>
                     * 
                     */
                    std::vector<SkillScanCapabilityTag> GetCapabilityTags() const;

                    /**
                     * 设置<p>List of capability tags of the Skill. The fixed external return format is [{id,name}]. This field describes the capability features or applicable scenarios of the Skill, facilitating retrieval, display, or classification by callers. It is not equivalent to risk tags, nor does it indicate risk level or rule hit results. When lang=en, only name is switched to English, and id remains unchanged</p>
                     * @param _capabilityTags <p>List of capability tags of the Skill. The fixed external return format is [{id,name}]. This field describes the capability features or applicable scenarios of the Skill, facilitating retrieval, display, or classification by callers. It is not equivalent to risk tags, nor does it indicate risk level or rule hit results. When lang=en, only name is switched to English, and id remains unchanged</p>
                     * 
                     */
                    void SetCapabilityTags(const std::vector<SkillScanCapabilityTag>& _capabilityTags);

                    /**
                     * 判断参数 CapabilityTags 是否已赋值
                     * @return CapabilityTags 是否已赋值
                     * 
                     */
                    bool CapabilityTagsHasBeenSet() const;

                    /**
                     * 获取<p>Complete set of fusion rule categories. The key is the fusion rule_id (9xxxx), and the value is the risk category name. It contains all fusion rule categories, allowing callers to display category labels without maintaining a local mapping table. When lang=en is passed, English names are returned. This object is a name mapping table and does not express the priority of primary tags</p>
                     * @return RuleCatalog <p>Complete set of fusion rule categories. The key is the fusion rule_id (9xxxx), and the value is the risk category name. It contains all fusion rule categories, allowing callers to display category labels without maintaining a local mapping table. When lang=en is passed, English names are returned. This object is a name mapping table and does not express the priority of primary tags</p>
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 设置<p>Complete set of fusion rule categories. The key is the fusion rule_id (9xxxx), and the value is the risk category name. It contains all fusion rule categories, allowing callers to display category labels without maintaining a local mapping table. When lang=en is passed, English names are returned. This object is a name mapping table and does not express the priority of primary tags</p>
                     * @param _ruleCatalog <p>Complete set of fusion rule categories. The key is the fusion rule_id (9xxxx), and the value is the risk category name. It contains all fusion rule categories, allowing callers to display category labels without maintaining a local mapping table. When lang=en is passed, English names are returned. This object is a name mapping table and does not express the priority of primary tags</p>
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
                     * 获取<p>Scan result details, grouped by sub-engine. Each element contains scan_type (engine type) and rule_list (list of hit rules). The rule_id in the rules uses fusion encoding (9xxxx) and can be cross-referenced with rule_catalog. When lang=en is passed, description returns English text</p>
                     * @return ScanItems <p>Scan result details, grouped by sub-engine. Each element contains scan_type (engine type) and rule_list (list of hit rules). The rule_id in the rules uses fusion encoding (9xxxx) and can be cross-referenced with rule_catalog. When lang=en is passed, description returns English text</p>
                     * 
                     */
                    std::vector<SkillScanItem> GetScanItems() const;

                    /**
                     * 设置<p>Scan result details, grouped by sub-engine. Each element contains scan_type (engine type) and rule_list (list of hit rules). The rule_id in the rules uses fusion encoding (9xxxx) and can be cross-referenced with rule_catalog. When lang=en is passed, description returns English text</p>
                     * @param _scanItems <p>Scan result details, grouped by sub-engine. Each element contains scan_type (engine type) and rule_list (list of hit rules). The rule_id in the rules uses fusion encoding (9xxxx) and can be cross-referenced with rule_catalog. When lang=en is passed, description returns English text</p>
                     * 
                     */
                    void SetScanItems(const std::vector<SkillScanItem>& _scanItems);

                    /**
                     * 判断参数 ScanItems 是否已赋值
                     * @return ScanItems 是否已赋值
                     * 
                     */
                    bool ScanItemsHasBeenSet() const;

                    /**
                     * 获取<p>URL of the comprehensive security audit report. Callers can specify the validity period through report_url_expire_hours. If not passed, a URL with a 1-year validity period is returned by default</p>
                     * @return ReportUrl <p>URL of the comprehensive security audit report. Callers can specify the validity period through report_url_expire_hours. If not passed, a URL with a 1-year validity period is returned by default</p>
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 设置<p>URL of the comprehensive security audit report. Callers can specify the validity period through report_url_expire_hours. If not passed, a URL with a 1-year validity period is returned by default</p>
                     * @param _reportUrl <p>URL of the comprehensive security audit report. Callers can specify the validity period through report_url_expire_hours. If not passed, a URL with a 1-year validity period is returned by default</p>
                     * 
                     */
                    void SetReportUrl(const std::string& _reportUrl);

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取<p>Scan completion time</p>
                     * @return ScannedAt <p>Scan completion time</p>
                     * 
                     */
                    std::string GetScannedAt() const;

                    /**
                     * 设置<p>Scan completion time</p>
                     * @param _scannedAt <p>Scan completion time</p>
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
                     * 获取<p>Task creation time</p>
                     * @return CreatedAt <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Task creation time</p>
                     * @param _createdAt <p>Task creation time</p>
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
                     * 获取<p>Failure time</p>
                     * @return FailedAt <p>Failure time</p>
                     * 
                     */
                    std::string GetFailedAt() const;

                    /**
                     * 设置<p>Failure time</p>
                     * @param _failedAt <p>Failure time</p>
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
                     * 获取<p>Description of the failure reason</p>
                     * @return Message <p>Description of the failure reason</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Description of the failure reason</p>
                     * @param _message <p>Description of the failure reason</p>
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
                     * <p>Detection status: success (detection completed with results), scanning (detection in progress), not_found (no record), or failed (detection failed)</p><p>Valid values:</p><ul><li>success: detection completed with results</li><li>scanning: detection in progress</li><li>not_found: no record</li><li>failed: detection failed</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Skill name, used for page display, result list presentation, and manual analysis</p>
                     */
                    std::string m_skillName;
                    bool m_skillNameHasBeenSet;

                    /**
                     * <p>Skill description, usually from Skill metadata or instructions, used to help callers understand the purpose of the Skill</p>
                     */
                    std::string m_skillDescription;
                    bool m_skillDescriptionHasBeenSet;

                    /**
                     * <p>SHA256 hash of the ZIP file, in the format of sha256:hex_digest</p>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * <p>Risk level: malicious, suspicious, or benign</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Comprehensive handling suggestion field, located at the top level of data, used to provide overall remediation, mitigation, or manual handling suggestions for this detection result</p>
                     */
                    std::string m_mitigation;
                    bool m_mitigationHasBeenSet;

                    /**
                     * <p>Security score (0-100, the higher the score, the more secure)</p><p>Value range: [0, 100]</p>
                     */
                    uint64_t m_securityScore;
                    bool m_securityScoreHasBeenSet;

                    /**
                     * <p>Engine version used for this scan</p>
                     */
                    uint64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>List of capability tags of the Skill. The fixed external return format is [{id,name}]. This field describes the capability features or applicable scenarios of the Skill, facilitating retrieval, display, or classification by callers. It is not equivalent to risk tags, nor does it indicate risk level or rule hit results. When lang=en, only name is switched to English, and id remains unchanged</p>
                     */
                    std::vector<SkillScanCapabilityTag> m_capabilityTags;
                    bool m_capabilityTagsHasBeenSet;

                    /**
                     * <p>Complete set of fusion rule categories. The key is the fusion rule_id (9xxxx), and the value is the risk category name. It contains all fusion rule categories, allowing callers to display category labels without maintaining a local mapping table. When lang=en is passed, English names are returned. This object is a name mapping table and does not express the priority of primary tags</p>
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                    /**
                     * <p>Scan result details, grouped by sub-engine. Each element contains scan_type (engine type) and rule_list (list of hit rules). The rule_id in the rules uses fusion encoding (9xxxx) and can be cross-referenced with rule_catalog. When lang=en is passed, description returns English text</p>
                     */
                    std::vector<SkillScanItem> m_scanItems;
                    bool m_scanItemsHasBeenSet;

                    /**
                     * <p>URL of the comprehensive security audit report. Callers can specify the validity period through report_url_expire_hours. If not passed, a URL with a 1-year validity period is returned by default</p>
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * <p>Scan completion time</p>
                     */
                    std::string m_scannedAt;
                    bool m_scannedAtHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Failure time</p>
                     */
                    std::string m_failedAt;
                    bool m_failedAtHasBeenSet;

                    /**
                     * <p>Description of the failure reason</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SKILLSCANQUERYDATA_H_

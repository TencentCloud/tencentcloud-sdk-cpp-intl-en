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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGCOMPLIANCEPACK_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGCOMPLIANCEPACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * User compliance package information.
                */
                class ConfigCompliancePack : public AbstractModel
                {
                public:
                    ConfigCompliancePack();
                    ~ConfigCompliancePack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Compliance package status</p>
                     * @return Status <p>Compliance package status</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Compliance package status</p>
                     * @param _status <p>Compliance package status</p>
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
                     * 获取<p>Compliance package ID.</p>
                     * @return CompliancePackId <p>Compliance package ID.</p>
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置<p>Compliance package ID.</p>
                     * @param _compliancePackId <p>Compliance package ID.</p>
                     * 
                     */
                    void SetCompliancePackId(const std::string& _compliancePackId);

                    /**
                     * 判断参数 CompliancePackId 是否已赋值
                     * @return CompliancePackId 是否已赋值
                     * 
                     */
                    bool CompliancePackIdHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Compliance package name.</p>
                     * @return CompliancePackName <p>Compliance package name.</p>
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置<p>Compliance package name.</p>
                     * @param _compliancePackName <p>Compliance package name.</p>
                     * 
                     */
                    void SetCompliancePackName(const std::string& _compliancePackName);

                    /**
                     * 判断参数 CompliancePackName 是否已赋值
                     * @return CompliancePackName 是否已赋值
                     * 
                     */
                    bool CompliancePackNameHasBeenSet() const;

                    /**
                     * 获取<p>Risk level.</p>
                     * @return RiskLevel <p>Risk level.</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level.</p>
                     * @param _riskLevel <p>Risk level.</p>
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Evaluation results.</p>
                     * @return ComplianceResult <p>Evaluation results.</p>
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置<p>Evaluation results.</p>
                     * @param _complianceResult <p>Evaluation results.</p>
                     * 
                     */
                    void SetComplianceResult(const std::string& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Non-compliant rule name</p>
                     * @return NoCompliantNames <p>Non-compliant rule name</p>
                     * 
                     */
                    std::vector<std::string> GetNoCompliantNames() const;

                    /**
                     * 设置<p>Non-compliant rule name</p>
                     * @param _noCompliantNames <p>Non-compliant rule name</p>
                     * 
                     */
                    void SetNoCompliantNames(const std::vector<std::string>& _noCompliantNames);

                    /**
                     * 判断参数 NoCompliantNames 是否已赋值
                     * @return NoCompliantNames 是否已赋值
                     * 
                     */
                    bool NoCompliantNamesHasBeenSet() const;

                    /**
                     * 获取<p>Number of compliance package rules</p>
                     * @return RuleCount <p>Number of compliance package rules</p>
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置<p>Number of compliance package rules</p>
                     * @param _ruleCount <p>Number of compliance package rules</p>
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                private:

                    /**
                     * <p>Compliance package status</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Compliance package ID.</p>
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Compliance package name.</p>
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * <p>Risk level.</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Evaluation results.</p>
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Non-compliant rule name</p>
                     */
                    std::vector<std::string> m_noCompliantNames;
                    bool m_noCompliantNamesHasBeenSet;

                    /**
                     * <p>Number of compliance package rules</p>
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGCOMPLIANCEPACK_H_

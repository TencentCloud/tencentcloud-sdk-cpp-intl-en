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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCOMPLIANCEPACK_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCOMPLIANCEPACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/CompliancePackRuleForManage.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * System compliance package information.
                */
                class SystemCompliancePack : public AbstractModel
                {
                public:
                    SystemCompliancePack();
                    ~SystemCompliancePack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compliance package ID.
                     * @return CompliancePackId Compliance package ID.
                     * 
                     */
                    std::string GetCompliancePackId() const;

                    /**
                     * 设置Compliance package ID.
                     * @param _compliancePackId Compliance package ID.
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
                     * 获取Name
                     * @return CompliancePackName Name
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置Name
                     * @param _compliancePackName Name
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
                     * 获取Compliance package risk level 1: high-risk.
2: Medium-risk.
3: Low risk.
                     * @return RiskLevel Compliance package risk level 1: high-risk.
2: Medium-risk.
3: Low risk.
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置Compliance package risk level 1: high-risk.
2: Medium-risk.
3: Low risk.
                     * @param _riskLevel Compliance package risk level 1: high-risk.
2: Medium-risk.
3: Low risk.
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
                     * 获取Compliance package rule information.
                     * @return ConfigRules Compliance package rule information.
                     * 
                     */
                    std::vector<CompliancePackRuleForManage> GetConfigRules() const;

                    /**
                     * 设置Compliance package rule information.
                     * @param _configRules Compliance package rule information.
                     * 
                     */
                    void SetConfigRules(const std::vector<CompliancePackRuleForManage>& _configRules);

                    /**
                     * 判断参数 ConfigRules 是否已赋值
                     * @return ConfigRules 是否已赋值
                     * 
                     */
                    bool ConfigRulesHasBeenSet() const;

                private:

                    /**
                     * Compliance package ID.
                     */
                    std::string m_compliancePackId;
                    bool m_compliancePackIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Compliance package risk level 1: high-risk.
2: Medium-risk.
3: Low risk.
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Compliance package rule information.
                     */
                    std::vector<CompliancePackRuleForManage> m_configRules;
                    bool m_configRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SYSTEMCOMPLIANCEPACK_H_

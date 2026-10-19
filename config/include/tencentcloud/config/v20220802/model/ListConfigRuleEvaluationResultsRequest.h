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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListConfigRuleEvaluationResults request structure.
                */
                class ListConfigRuleEvaluationResultsRequest : public AbstractModel
                {
                public:
                    ListConfigRuleEvaluationResultsRequest();
                    ~ListConfigRuleEvaluationResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID
                     * @return ConfigRuleId Rule ID
                     * 
                     */
                    std::string GetConfigRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _configRuleId Rule ID
                     * 
                     */
                    void SetConfigRuleId(const std::string& _configRuleId);

                    /**
                     * 判断参数 ConfigRuleId 是否已赋值
                     * @return ConfigRuleId 是否已赋值
                     * 
                     */
                    bool ConfigRuleIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Limit Offset.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Offset.
                     * @param _limit Offset.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Current Page
                     * @return Offset Current Page
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Current Page
                     * @param _offset Current Page
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Type.
                     * @return ResourceType Type.
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置Type.
                     * @param _resourceType Type.
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Evaluation result. Valid values: COMPLIANT and NON_COMPLIANT.
                     * @return ComplianceType Evaluation result. Valid values: COMPLIANT and NON_COMPLIANT.
                     * 
                     */
                    std::vector<std::string> GetComplianceType() const;

                    /**
                     * 设置Evaluation result. Valid values: COMPLIANT and NON_COMPLIANT.
                     * @param _complianceType Evaluation result. Valid values: COMPLIANT and NON_COMPLIANT.
                     * 
                     */
                    void SetComplianceType(const std::vector<std::string>& _complianceType);

                    /**
                     * 判断参数 ComplianceType 是否已赋值
                     * @return ComplianceType 是否已赋值
                     * 
                     */
                    bool ComplianceTypeHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    std::string m_configRuleId;
                    bool m_configRuleIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Current Page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Type.
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Evaluation result. Valid values: COMPLIANT and NON_COMPLIANT.
                     */
                    std::vector<std::string> m_complianceType;
                    bool m_complianceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULEEVALUATIONRESULTSREQUEST_H_

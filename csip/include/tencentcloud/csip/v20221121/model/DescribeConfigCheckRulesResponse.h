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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECONFIGCHECKRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECONFIGCHECKRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RiskRuleInfo.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeConfigCheckRules response structure.
                */
                class DescribeConfigCheckRulesResponse : public AbstractModel
                {
                public:
                    DescribeConfigCheckRulesResponse();
                    ~DescribeConfigCheckRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of risk rules
                     * @return TotalCount Number of risk rules
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Risk rule list
                     * @return RuleList Risk rule list
                     * 
                     */
                    std::vector<RiskRuleInfo> GetRuleList() const;

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取Cloud vendor type options
                     * @return ProviderList Cloud vendor type options
                     * 
                     */
                    std::vector<AttributeOptionSet> GetProviderList() const;

                    /**
                     * 判断参数 ProviderList 是否已赋值
                     * @return ProviderList 是否已赋值
                     * 
                     */
                    bool ProviderListHasBeenSet() const;

                    /**
                     * 获取Risk level type option
                     * @return RiskLevelList Risk level type option
                     * 
                     */
                    std::vector<AttributeOptionSet> GetRiskLevelList() const;

                    /**
                     * 判断参数 RiskLevelList 是否已赋值
                     * @return RiskLevelList 是否已赋值
                     * 
                     */
                    bool RiskLevelListHasBeenSet() const;

                    /**
                     * 获取Disposal categorization options
                     * @return DispositionTypeList Disposal categorization options
                     * 
                     */
                    std::vector<AttributeOptionSet> GetDispositionTypeList() const;

                    /**
                     * 判断参数 DispositionTypeList 是否已赋值
                     * @return DispositionTypeList 是否已赋值
                     * 
                     */
                    bool DispositionTypeListHasBeenSet() const;

                    /**
                     * 获取Check type options
                     * @return CheckTypeList Check type options
                     * 
                     */
                    std::vector<AttributeOptionSet> GetCheckTypeList() const;

                    /**
                     * 判断参数 CheckTypeList 是否已赋值
                     * @return CheckTypeList 是否已赋值
                     * 
                     */
                    bool CheckTypeListHasBeenSet() const;

                private:

                    /**
                     * Number of risk rules
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Risk rule list
                     */
                    std::vector<RiskRuleInfo> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * Cloud vendor type options
                     */
                    std::vector<AttributeOptionSet> m_providerList;
                    bool m_providerListHasBeenSet;

                    /**
                     * Risk level type option
                     */
                    std::vector<AttributeOptionSet> m_riskLevelList;
                    bool m_riskLevelListHasBeenSet;

                    /**
                     * Disposal categorization options
                     */
                    std::vector<AttributeOptionSet> m_dispositionTypeList;
                    bool m_dispositionTypeListHasBeenSet;

                    /**
                     * Check type options
                     */
                    std::vector<AttributeOptionSet> m_checkTypeList;
                    bool m_checkTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECONFIGCHECKRULESRESPONSE_H_

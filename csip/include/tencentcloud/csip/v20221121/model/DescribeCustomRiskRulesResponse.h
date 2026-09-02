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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomRiskRuleItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>
#include <tencentcloud/csip/v20221121/model/StandardItem.h>
#include <tencentcloud/csip/v20221121/model/RuleStatisticsItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCustomRiskRules response structure.
                */
                class DescribeCustomRiskRulesResponse : public AbstractModel
                {
                public:
                    DescribeCustomRiskRulesResponse();
                    ~DescribeCustomRiskRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of risk rules</p>
                     * @return TotalCount <p>Number of risk rules</p>
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
                     * 获取<p>Risk rule list</p>
                     * @return RiskRuleList <p>Risk rule list</p>
                     * 
                     */
                    std::vector<CustomRiskRuleItem> GetRiskRuleList() const;

                    /**
                     * 判断参数 RiskRuleList 是否已赋值
                     * @return RiskRuleList 是否已赋值
                     * 
                     */
                    bool RiskRuleListHasBeenSet() const;

                    /**
                     * 获取<p>Cloud service provider options</p>
                     * @return ProviderList <p>Cloud service provider options</p>
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
                     * 获取<p>Asset type options</p>
                     * @return AssetTypeList <p>Asset type options</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Security clause specification</p>
                     * @return StandardNameList <p>Security clause specification</p>
                     * 
                     */
                    std::vector<StandardItem> GetStandardNameList() const;

                    /**
                     * 判断参数 StandardNameList 是否已赋值
                     * @return StandardNameList 是否已赋值
                     * 
                     */
                    bool StandardNameListHasBeenSet() const;

                    /**
                     * 获取<p>Risk level.</p>
                     * @return RuleSeverityList <p>Risk level.</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetRuleSeverityList() const;

                    /**
                     * 判断参数 RuleSeverityList 是否已赋值
                     * @return RuleSeverityList 是否已赋值
                     * 
                     */
                    bool RuleSeverityListHasBeenSet() const;

                    /**
                     * 获取<p>Check type</p>
                     * @return CheckTypeList <p>Check type</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetCheckTypeList() const;

                    /**
                     * 判断参数 CheckTypeList 是否已赋值
                     * @return CheckTypeList 是否已赋值
                     * 
                     */
                    bool CheckTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Security category</p>
                     * @return ClassifyList <p>Security category</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetClassifyList() const;

                    /**
                     * 判断参数 ClassifyList 是否已赋值
                     * @return ClassifyList 是否已赋值
                     * 
                     */
                    bool ClassifyListHasBeenSet() const;

                    /**
                     * 获取<p>Security specification</p>
                     * @return StandardList <p>Security specification</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetStandardList() const;

                    /**
                     * 判断参数 StandardList 是否已赋值
                     * @return StandardList 是否已赋值
                     * 
                     */
                    bool StandardListHasBeenSet() const;

                private:

                    /**
                     * <p>Number of risk rules</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Risk rule list</p>
                     */
                    std::vector<CustomRiskRuleItem> m_riskRuleList;
                    bool m_riskRuleListHasBeenSet;

                    /**
                     * <p>Cloud service provider options</p>
                     */
                    std::vector<AttributeOptionSet> m_providerList;
                    bool m_providerListHasBeenSet;

                    /**
                     * <p>Asset type options</p>
                     */
                    std::vector<AttributeOptionSet> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>Security clause specification</p>
                     */
                    std::vector<StandardItem> m_standardNameList;
                    bool m_standardNameListHasBeenSet;

                    /**
                     * <p>Risk level.</p>
                     */
                    std::vector<RuleStatisticsItem> m_ruleSeverityList;
                    bool m_ruleSeverityListHasBeenSet;

                    /**
                     * <p>Check type</p>
                     */
                    std::vector<RuleStatisticsItem> m_checkTypeList;
                    bool m_checkTypeListHasBeenSet;

                    /**
                     * <p>Security category</p>
                     */
                    std::vector<RuleStatisticsItem> m_classifyList;
                    bool m_classifyListHasBeenSet;

                    /**
                     * <p>Security specification</p>
                     */
                    std::vector<RuleStatisticsItem> m_standardList;
                    bool m_standardListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULESRESPONSE_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RiskRuleItem.h>
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
                * DescribeRiskRules response structure.
                */
                class DescribeRiskRulesResponse : public AbstractModel
                {
                public:
                    DescribeRiskRulesResponse();
                    ~DescribeRiskRulesResponse() = default;
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
                     * @return RiskRuleList Risk rule list
                     * 
                     */
                    std::vector<RiskRuleItem> GetRiskRuleList() const;

                    /**
                     * 判断参数 RiskRuleList 是否已赋值
                     * @return RiskRuleList 是否已赋值
                     * 
                     */
                    bool RiskRuleListHasBeenSet() const;

                    /**
                     * 获取Instance type options
                     * @return InstanceTypeList Instance type options
                     * 
                     */
                    std::vector<AttributeOptionSet> GetInstanceTypeList() const;

                    /**
                     * 判断参数 InstanceTypeList 是否已赋值
                     * @return InstanceTypeList 是否已赋值
                     * 
                     */
                    bool InstanceTypeListHasBeenSet() const;

                private:

                    /**
                     * Number of risk rules
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Risk rule list
                     */
                    std::vector<RiskRuleItem> m_riskRuleList;
                    bool m_riskRuleListHasBeenSet;

                    /**
                     * Instance type options
                     */
                    std::vector<AttributeOptionSet> m_instanceTypeList;
                    bool m_instanceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULESRESPONSE_H_

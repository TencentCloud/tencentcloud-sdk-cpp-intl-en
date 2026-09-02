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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SkillScanAlertItem.h>
#include <tencentcloud/csip/v20221121/model/SkillRuleCatalogItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanAlertList response structure.
                */
                class DescribeSkillScanAlertListResponse : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertListResponse();
                    ~DescribeSkillScanAlertListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of eligible alarms
                     * @return TotalCount Total number of eligible alarms
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
                     * 获取Alarm list
                     * @return AlertList Alarm list
                     * 
                     */
                    std::vector<SkillScanAlertItem> GetAlertList() const;

                    /**
                     * 判断参数 AlertList 是否已赋值
                     * @return AlertList 是否已赋值
                     * 
                     */
                    bool AlertListHasBeenSet() const;

                    /**
                     * 获取Complete set of fusion rule directories (rule_id → rule_name). The frontend translates AlertList[].HitRules[].RuleID accordingly. Language is switched via the common cloud API parameter Language.
                     * @return RuleCatalog Complete set of fusion rule directories (rule_id → rule_name). The frontend translates AlertList[].HitRules[].RuleID accordingly. Language is switched via the common cloud API parameter Language.
                     * 
                     */
                    std::vector<SkillRuleCatalogItem> GetRuleCatalog() const;

                    /**
                     * 判断参数 RuleCatalog 是否已赋值
                     * @return RuleCatalog 是否已赋值
                     * 
                     */
                    bool RuleCatalogHasBeenSet() const;

                private:

                    /**
                     * Total number of eligible alarms
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Alarm list
                     */
                    std::vector<SkillScanAlertItem> m_alertList;
                    bool m_alertListHasBeenSet;

                    /**
                     * Complete set of fusion rule directories (rule_id → rule_name). The frontend translates AlertList[].HitRules[].RuleID accordingly. Language is switched via the common cloud API parameter Language.
                     */
                    std::vector<SkillRuleCatalogItem> m_ruleCatalog;
                    bool m_ruleCatalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTLISTRESPONSE_H_

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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERULESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeRules response structure.
                */
                class DescribeRulesResponse : public AbstractModel
                {
                public:
                    DescribeRulesResponse();
                    ~DescribeRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the site
                     * @return ZoneId ID of the site
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of rules. Rules are sorted in order of execution.
                     * @return RuleItems List of rules. Rules are sorted in order of execution.
                     * 
                     */
                    std::vector<RuleItem> GetRuleItems() const;

                    /**
                     * 判断参数 RuleItems 是否已赋值
                     * @return RuleItems 是否已赋值
                     * 
                     */
                    bool RuleItemsHasBeenSet() const;

                private:

                    /**
                     * ID of the site
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of rules. Rules are sorted in order of execution.
                     */
                    std::vector<RuleItem> m_ruleItems;
                    bool m_ruleItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERULESRESPONSE_H_

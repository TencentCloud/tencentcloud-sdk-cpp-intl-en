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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL7RULESRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL7RULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L7RuleEntry.h>
#include <tencentcloud/dayu/v20180709/model/L7RuleHealth.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribleL7Rules response structure.
                */
                class DescribleL7RulesResponse : public AbstractModel
                {
                public:
                    DescribleL7RulesResponse();
                    ~DescribleL7RulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Forwarding rule list
                     * @return Rules Forwarding rule list
                     * 
                     */
                    std::vector<L7RuleEntry> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Total number of rules
                     * @return Total Total number of rules
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Health check configuration list
                     * @return Healths Health check configuration list
                     * 
                     */
                    std::vector<L7RuleHealth> GetHealths() const;

                    /**
                     * 判断参数 Healths 是否已赋值
                     * @return Healths 是否已赋值
                     * 
                     */
                    bool HealthsHasBeenSet() const;

                private:

                    /**
                     * Forwarding rule list
                     */
                    std::vector<L7RuleEntry> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Total number of rules
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Health check configuration list
                     */
                    std::vector<L7RuleHealth> m_healths;
                    bool m_healthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL7RULESRESPONSE_H_

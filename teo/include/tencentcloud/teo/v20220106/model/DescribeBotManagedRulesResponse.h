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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTMANAGEDRULESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTMANAGEDRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/BotManagedRuleDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeBotManagedRules response structure.
                */
                class DescribeBotManagedRulesResponse : public AbstractModel
                {
                public:
                    DescribeBotManagedRulesResponse();
                    ~DescribeBotManagedRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of bot managed rules returned
                     * @return Count Number of bot managed rules returned
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Bot managed rules
                     * @return Rules Bot managed rules
                     * 
                     */
                    std::vector<BotManagedRuleDetail> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Total number of bot managed rules
                     * @return Total Total number of bot managed rules
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Number of bot managed rules returned
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Bot managed rules
                     */
                    std::vector<BotManagedRuleDetail> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Total number of bot managed rules
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTMANAGEDRULESRESPONSE_H_

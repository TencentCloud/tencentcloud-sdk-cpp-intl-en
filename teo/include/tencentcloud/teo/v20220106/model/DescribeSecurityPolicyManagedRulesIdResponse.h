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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESIDRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ManagedRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyManagedRulesId response structure.
                */
                class DescribeSecurityPolicyManagedRulesIdResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyManagedRulesIdResponse();
                    ~DescribeSecurityPolicyManagedRulesIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of returned items
                     * @return Total Total number of returned items
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Managed rule
                     * @return Rules Managed rule
                     * 
                     */
                    std::vector<ManagedRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Total number of returned items
                     * @return Count Total number of returned items
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * Total number of returned items
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Managed rule
                     */
                    std::vector<ManagedRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Total number of returned items
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESIDRESPONSE_H_

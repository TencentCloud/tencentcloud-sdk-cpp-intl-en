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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCRULESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeL7AccRules response structure.
                */
                class DescribeL7AccRulesResponse : public AbstractModel
                {
                public:
                    DescribeL7AccRulesResponse();
                    ~DescribeL7AccRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of rules.
                     * @return TotalCount Total number of rules.
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
                     * 获取Rule list. rules are executed in top-down order. for details, refer to [rule priority](https://intl.cloud.tencent.com/document/product/1552/70901?from_cn_redirect=1#.e4.bc.98.e5.85.88.e7.ba.a7).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Rules Rule list. rules are executed in top-down order. for details, refer to [rule priority](https://intl.cloud.tencent.com/document/product/1552/70901?from_cn_redirect=1#.e4.bc.98.e5.85.88.e7.ba.a7).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<RuleEngineItem> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Total number of rules.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Rule list. rules are executed in top-down order. for details, refer to [rule priority](https://intl.cloud.tencent.com/document/product/1552/70901?from_cn_redirect=1#.e4.bc.98.e5.85.88.e7.ba.a7).
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<RuleEngineItem> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL7ACCRULESRESPONSE_H_

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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESIDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyManagedRulesId request structure.
                */
                class DescribeSecurityPolicyManagedRulesIdRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyManagedRulesIdRequest();
                    ~DescribeSecurityPolicyManagedRulesIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of rule IDs
                     * @return RuleId List of rule IDs
                     * 
                     */
                    std::vector<int64_t> GetRuleId() const;

                    /**
                     * 设置List of rule IDs
                     * @param _ruleId List of rule IDs
                     * 
                     */
                    void SetRuleId(const std::vector<int64_t>& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * List of rule IDs
                     */
                    std::vector<int64_t> m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESIDREQUEST_H_

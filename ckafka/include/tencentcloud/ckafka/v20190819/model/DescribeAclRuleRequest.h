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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeAclRule request structure.
                */
                class DescribeAclRuleRequest : public AbstractModel
                {
                public:
                    DescribeAclRuleRequest();
                    ~DescribeAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ACL rule name
                     * @return RuleName ACL rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置ACL rule name
                     * @param _ruleName ACL rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取ACL rule matching type
                     * @return PatternType ACL rule matching type
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL rule matching type
                     * @param _patternType ACL rule matching type
                     * 
                     */
                    void SetPatternType(const std::string& _patternType);

                    /**
                     * 判断参数 PatternType 是否已赋值
                     * @return PatternType 是否已赋值
                     * 
                     */
                    bool PatternTypeHasBeenSet() const;

                    /**
                     * 获取Whether to read simplified ACL rules
                     * @return IsSimplified Whether to read simplified ACL rules
                     * 
                     */
                    bool GetIsSimplified() const;

                    /**
                     * 设置Whether to read simplified ACL rules
                     * @param _isSimplified Whether to read simplified ACL rules
                     * 
                     */
                    void SetIsSimplified(const bool& _isSimplified);

                    /**
                     * 判断参数 IsSimplified 是否已赋值
                     * @return IsSimplified 是否已赋值
                     * 
                     */
                    bool IsSimplifiedHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ACL rule matching type
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * Whether to read simplified ACL rules
                     */
                    bool m_isSimplified;
                    bool m_isSimplifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_

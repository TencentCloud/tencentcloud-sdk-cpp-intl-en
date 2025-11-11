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
                     * 获取The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
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
                     * 获取ACL rule-based matching type (PREFIXED: prefix match, PRESET: PRESET policy).
                     * @return PatternType ACL rule-based matching type (PREFIXED: prefix match, PRESET: PRESET policy).
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL rule-based matching type (PREFIXED: prefix match, PRESET: PRESET policy).
                     * @param _patternType ACL rule-based matching type (PREFIXED: prefix match, PRESET: PRESET policy).
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
                     * 获取Specifies whether to read the simplified ACL rule. default value is false, which means not to read the simplified ACL rule.
                     * @return IsSimplified Specifies whether to read the simplified ACL rule. default value is false, which means not to read the simplified ACL rule.
                     * 
                     */
                    bool GetIsSimplified() const;

                    /**
                     * 设置Specifies whether to read the simplified ACL rule. default value is false, which means not to read the simplified ACL rule.
                     * @param _isSimplified Specifies whether to read the simplified ACL rule. default value is false, which means not to read the simplified ACL rule.
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
                     * The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ACL rule-based matching type (PREFIXED: prefix match, PRESET: PRESET policy).
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * Specifies whether to read the simplified ACL rule. default value is false, which means not to read the simplified ACL rule.
                     */
                    bool m_isSimplified;
                    bool m_isSimplifiedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEACLRULEREQUEST_H_

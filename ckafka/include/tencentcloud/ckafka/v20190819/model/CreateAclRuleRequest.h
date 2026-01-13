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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLRULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AclRuleInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateAclRule request structure.
                */
                class CreateAclRuleRequest : public AbstractModel
                {
                public:
                    CreateAclRuleRequest();
                    ~CreateAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
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
                     * 获取ACL resource type. Currently, the only valid value is `Topic`.
                     * @return ResourceType ACL resource type. Currently, the only valid value is `Topic`.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置ACL resource type. Currently, the only valid value is `Topic`.
                     * @param _resourceType ACL resource type. Currently, the only valid value is `Topic`.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取ACL rule-based matching type. currently supports prefix match and PRESET policy. valid values: PREFIXED/PRESET.
                     * @return PatternType ACL rule-based matching type. currently supports prefix match and PRESET policy. valid values: PREFIXED/PRESET.
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL rule-based matching type. currently supports prefix match and PRESET policy. valid values: PREFIXED/PRESET.
                     * @param _patternType ACL rule-based matching type. currently supports prefix match and PRESET policy. valid values: PREFIXED/PRESET.
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
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
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
                     * 获取ACL rule list
                     * @return RuleList ACL rule list
                     * 
                     */
                    std::vector<AclRuleInfo> GetRuleList() const;

                    /**
                     * 设置ACL rule list
                     * @param _ruleList ACL rule list
                     * 
                     */
                    void SetRuleList(const std::vector<AclRuleInfo>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取Indicates the prefix for prefix match. this parameter is required when PatternType value is PREFIXED.
                     * @return Pattern Indicates the prefix for prefix match. this parameter is required when PatternType value is PREFIXED.
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Indicates the prefix for prefix match. this parameter is required when PatternType value is PREFIXED.
                     * @param _pattern Indicates the prefix for prefix match. this parameter is required when PatternType value is PREFIXED.
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Specifies whether to apply the preset ACL rule to newly-added topics. defaults to 0, which means no. a value of 1 means yes.
                     * @return IsApplied Specifies whether to apply the preset ACL rule to newly-added topics. defaults to 0, which means no. a value of 1 means yes.
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置Specifies whether to apply the preset ACL rule to newly-added topics. defaults to 0, which means no. a value of 1 means yes.
                     * @param _isApplied Specifies whether to apply the preset ACL rule to newly-added topics. defaults to 0, which means no. a value of 1 means yes.
                     * 
                     */
                    void SetIsApplied(const int64_t& _isApplied);

                    /**
                     * 判断参数 IsApplied 是否已赋值
                     * @return IsApplied 是否已赋值
                     * 
                     */
                    bool IsAppliedHasBeenSet() const;

                    /**
                     * 获取Remarks for ACL rules
                     * @return Comment Remarks for ACL rules
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Remarks for ACL rules
                     * @param _comment Remarks for ACL rules
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL resource type. Currently, the only valid value is `Topic`.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * ACL rule-based matching type. currently supports prefix match and PRESET policy. valid values: PREFIXED/PRESET.
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ACL rule list
                     */
                    std::vector<AclRuleInfo> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * Indicates the prefix for prefix match. this parameter is required when PatternType value is PREFIXED.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Specifies whether to apply the preset ACL rule to newly-added topics. defaults to 0, which means no. a value of 1 means yes.
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                    /**
                     * Remarks for ACL rules
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEACLRULEREQUEST_H_

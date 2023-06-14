/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Matching type. Valid values: `PREFIXED`(match by prefix), `PRESET` (match by preset policy).
                     * @return PatternType Matching type. Valid values: `PREFIXED`(match by prefix), `PRESET` (match by preset policy).
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置Matching type. Valid values: `PREFIXED`(match by prefix), `PRESET` (match by preset policy).
                     * @param _patternType Matching type. Valid values: `PREFIXED`(match by prefix), `PRESET` (match by preset policy).
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
                     * 获取Prefix value for prefix match
                     * @return Pattern Prefix value for prefix match
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Prefix value for prefix match
                     * @param _pattern Prefix value for prefix match
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
                     * 获取A parameter used to specify whether the preset ACL rule is applied to new topics
                     * @return IsApplied A parameter used to specify whether the preset ACL rule is applied to new topics
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置A parameter used to specify whether the preset ACL rule is applied to new topics
                     * @param _isApplied A parameter used to specify whether the preset ACL rule is applied to new topics
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL resource type. Currently, the only valid value is `Topic`.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Matching type. Valid values: `PREFIXED`(match by prefix), `PRESET` (match by preset policy).
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
                     * Prefix value for prefix match
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * A parameter used to specify whether the preset ACL rule is applied to new topics
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

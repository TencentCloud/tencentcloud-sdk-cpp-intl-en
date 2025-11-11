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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Output parameters of ACL rule list APIs
                */
                class AclRule : public AbstractModel
                {
                public:
                    AclRule();
                    ~AclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACL rule name.
                     * @return RuleName ACL rule name.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置ACL rule name.
                     * @param _ruleName ACL rule name.
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
                     * 获取The ckafka cluster instance Id.
                     * @return InstanceId The ckafka cluster instance Id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id.
                     * @param _instanceId The ckafka cluster instance Id.
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
                     * 获取ACL rule-based matching type. currently only supports prefix match. valid values: PREFIXED.
                     * @return PatternType ACL rule-based matching type. currently only supports prefix match. valid values: PREFIXED.
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL rule-based matching type. currently only supports prefix match. valid values: PREFIXED.
                     * @param _patternType ACL rule-based matching type. currently only supports prefix match. valid values: PREFIXED.
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
                     * 获取Indicates the prefix value for prefix match.
                     * @return Pattern Indicates the prefix value for prefix match.
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Indicates the prefix value for prefix match.
                     * @param _pattern Indicates the prefix value for prefix match.
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
                     * 获取Acl resource type, currently only support Topic. valid values: Topic.
                     * @return ResourceType Acl resource type, currently only support Topic. valid values: Topic.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Acl resource type, currently only support Topic. valid values: Topic.
                     * @param _resourceType Acl resource type, currently only support Topic. valid values: Topic.
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
                     * 获取Specifies the ACL information contained in the rule.
                     * @return AclList Specifies the ACL information contained in the rule.
                     * 
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置Specifies the ACL information contained in the rule.
                     * @param _aclList Specifies the ACL information contained in the rule.
                     * 
                     */
                    void SetAclList(const std::string& _aclList);

                    /**
                     * 判断参数 AclList 是否已赋值
                     * @return AclList 是否已赋值
                     * 
                     */
                    bool AclListHasBeenSet() const;

                    /**
                     * 获取Specifies the time when the rule was created.
                     * @return CreateTimeStamp Specifies the time when the rule was created.
                     * 
                     */
                    std::string GetCreateTimeStamp() const;

                    /**
                     * 设置Specifies the time when the rule was created.
                     * @param _createTimeStamp Specifies the time when the rule was created.
                     * 
                     */
                    void SetCreateTimeStamp(const std::string& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取Specifies whether to apply the preset ACL rule to newly-added topics.
                     * @return IsApplied Specifies whether to apply the preset ACL rule to newly-added topics.
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置Specifies whether to apply the preset ACL rule to newly-added topics.
                     * @param _isApplied Specifies whether to apply the preset ACL rule to newly-added topics.
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
                     * 获取Rule update time.
                     * @return UpdateTimeStamp Rule update time.
                     * 
                     */
                    std::string GetUpdateTimeStamp() const;

                    /**
                     * 设置Rule update time.
                     * @param _updateTimeStamp Rule update time.
                     * 
                     */
                    void SetUpdateTimeStamp(const std::string& _updateTimeStamp);

                    /**
                     * 判断参数 UpdateTimeStamp 是否已赋值
                     * @return UpdateTimeStamp 是否已赋值
                     * 
                     */
                    bool UpdateTimeStampHasBeenSet() const;

                    /**
                     * 获取Specifies the remark of the rule.
                     * @return Comment Specifies the remark of the rule.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Specifies the remark of the rule.
                     * @param _comment Specifies the remark of the rule.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取One of the displayed corresponding TopicName.
                     * @return TopicName One of the displayed corresponding TopicName.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置One of the displayed corresponding TopicName.
                     * @param _topicName One of the displayed corresponding TopicName.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Number of topics to which the ACL rule is applied.
                     * @return TopicCount Number of topics to which the ACL rule is applied.
                     * 
                     */
                    int64_t GetTopicCount() const;

                    /**
                     * 设置Number of topics to which the ACL rule is applied.
                     * @param _topicCount Number of topics to which the ACL rule is applied.
                     * 
                     */
                    void SetTopicCount(const int64_t& _topicCount);

                    /**
                     * 判断参数 TopicCount 是否已赋值
                     * @return TopicCount 是否已赋值
                     * 
                     */
                    bool TopicCountHasBeenSet() const;

                    /**
                     * 获取Specifies the pattern type.
                     * @return PatternTypeTitle Specifies the pattern type.
                     * 
                     */
                    std::string GetPatternTypeTitle() const;

                    /**
                     * 设置Specifies the pattern type.
                     * @param _patternTypeTitle Specifies the pattern type.
                     * 
                     */
                    void SetPatternTypeTitle(const std::string& _patternTypeTitle);

                    /**
                     * 判断参数 PatternTypeTitle 是否已赋值
                     * @return PatternTypeTitle 是否已赋值
                     * 
                     */
                    bool PatternTypeTitleHasBeenSet() const;

                private:

                    /**
                     * ACL rule name.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * The ckafka cluster instance Id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL rule-based matching type. currently only supports prefix match. valid values: PREFIXED.
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * Indicates the prefix value for prefix match.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Acl resource type, currently only support Topic. valid values: Topic.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Specifies the ACL information contained in the rule.
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * Specifies the time when the rule was created.
                     */
                    std::string m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * Specifies whether to apply the preset ACL rule to newly-added topics.
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                    /**
                     * Rule update time.
                     */
                    std::string m_updateTimeStamp;
                    bool m_updateTimeStampHasBeenSet;

                    /**
                     * Specifies the remark of the rule.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * One of the displayed corresponding TopicName.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Number of topics to which the ACL rule is applied.
                     */
                    int64_t m_topicCount;
                    bool m_topicCountHasBeenSet;

                    /**
                     * Specifies the pattern type.
                     */
                    std::string m_patternTypeTitle;
                    bool m_patternTypeTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_

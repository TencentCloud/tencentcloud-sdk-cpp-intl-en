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
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return RuleName ACL rule name.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置ACL rule name.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param RuleName ACL rule name.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param InstanceId Instance ID.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Matching type. Currently, only prefix match is supported. Enumerated value list: PREFIXED
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return PatternType Matching type. Currently, only prefix match is supported. Enumerated value list: PREFIXED
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置Matching type. Currently, only prefix match is supported. Enumerated value list: PREFIXED
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param PatternType Matching type. Currently, only prefix match is supported. Enumerated value list: PREFIXED
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetPatternType(const std::string& _patternType);

                    /**
                     * 判断参数 PatternType 是否已赋值
                     * @return PatternType 是否已赋值
                     */
                    bool PatternTypeHasBeenSet() const;

                    /**
                     * 获取Prefix value for prefix match.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Pattern Prefix value for prefix match.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Prefix value for prefix match.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param Pattern Prefix value for prefix match.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取ACL resource type. Only “Topic” is supported. Enumerated value list: Topic.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ResourceType ACL resource type. Only “Topic” is supported. Enumerated value list: Topic.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置ACL resource type. Only “Topic” is supported. Enumerated value list: Topic.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param ResourceType ACL resource type. Only “Topic” is supported. Enumerated value list: Topic.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取ACL information contained in the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return AclList ACL information contained in the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置ACL information contained in the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param AclList ACL information contained in the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetAclList(const std::string& _aclList);

                    /**
                     * 判断参数 AclList 是否已赋值
                     * @return AclList 是否已赋值
                     */
                    bool AclListHasBeenSet() const;

                    /**
                     * 获取Creation time of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return CreateTimeStamp Creation time of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTimeStamp() const;

                    /**
                     * 设置Creation time of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param CreateTimeStamp Creation time of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetCreateTimeStamp(const std::string& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取A parameter used to specify whether the preset ACL rule is applied to new topics.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return IsApplied A parameter used to specify whether the preset ACL rule is applied to new topics.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置A parameter used to specify whether the preset ACL rule is applied to new topics.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param IsApplied A parameter used to specify whether the preset ACL rule is applied to new topics.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetIsApplied(const int64_t& _isApplied);

                    /**
                     * 判断参数 IsApplied 是否已赋值
                     * @return IsApplied 是否已赋值
                     */
                    bool IsAppliedHasBeenSet() const;

                    /**
                     * 获取Rule update time.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return UpdateTimeStamp Rule update time.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTimeStamp() const;

                    /**
                     * 设置Rule update time.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param UpdateTimeStamp Rule update time.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTimeStamp(const std::string& _updateTimeStamp);

                    /**
                     * 判断参数 UpdateTimeStamp 是否已赋值
                     * @return UpdateTimeStamp 是否已赋值
                     */
                    bool UpdateTimeStampHasBeenSet() const;

                    /**
                     * 获取Remarks of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Comment Remarks of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Remarks of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param Comment Remarks of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取One of the corresponding topic names that is displayed.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TopicName One of the corresponding topic names that is displayed.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置One of the corresponding topic names that is displayed.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TopicName One of the corresponding topic names that is displayed.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取The number of topics that apply this ACL rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TopicCount The number of topics that apply this ACL rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t GetTopicCount() const;

                    /**
                     * 设置The number of topics that apply this ACL rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param TopicCount The number of topics that apply this ACL rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetTopicCount(const int64_t& _topicCount);

                    /**
                     * 判断参数 TopicCount 是否已赋值
                     * @return TopicCount 是否已赋值
                     */
                    bool TopicCountHasBeenSet() const;

                    /**
                     * 获取Name of rule type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PatternTypeTitle Name of rule type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPatternTypeTitle() const;

                    /**
                     * 设置Name of rule type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PatternTypeTitle Name of rule type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPatternTypeTitle(const std::string& _patternTypeTitle);

                    /**
                     * 判断参数 PatternTypeTitle 是否已赋值
                     * @return PatternTypeTitle 是否已赋值
                     */
                    bool PatternTypeTitleHasBeenSet() const;

                private:

                    /**
                     * ACL rule name.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Instance ID.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Matching type. Currently, only prefix match is supported. Enumerated value list: PREFIXED
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * Prefix value for prefix match.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * ACL resource type. Only “Topic” is supported. Enumerated value list: Topic.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * ACL information contained in the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * Creation time of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * A parameter used to specify whether the preset ACL rule is applied to new topics.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                    /**
                     * Rule update time.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTimeStamp;
                    bool m_updateTimeStampHasBeenSet;

                    /**
                     * Remarks of the rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * One of the corresponding topic names that is displayed.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * The number of topics that apply this ACL rule.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicCount;
                    bool m_topicCountHasBeenSet;

                    /**
                     * Name of rule type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_patternTypeTitle;
                    bool m_patternTypeTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_

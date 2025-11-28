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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RetentionPolicy.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Namespace information
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace name.
                     * @return EnvironmentId Namespace name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace name.
                     * @param _environmentId Namespace name.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Remark Description.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Description.
                     * @param _remark Description.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Retention period for unconsumed messages in seconds. Maximum value: 1,296,000 seconds (15 days).
                     * @return MsgTTL Retention period for unconsumed messages in seconds. Maximum value: 1,296,000 seconds (15 days).
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置Retention period for unconsumed messages in seconds. Maximum value: 1,296,000 seconds (15 days).
                     * @param _msgTTL Retention period for unconsumed messages in seconds. Maximum value: 1,296,000 seconds (15 days).
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified.
                     * @return UpdateTime Last modified.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified.
                     * @param _updateTime Last modified.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Namespace ID.
                     * @return NamespaceId Namespace ID.
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace ID.
                     * @param _namespaceId Namespace ID.
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Namespace name.
                     * @return NamespaceName Namespace name.
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name.
                     * @param _namespaceName Namespace name.
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取The number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicNum The number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置The number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicNum The number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Message retention policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionPolicy Message retention policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RetentionPolicy GetRetentionPolicy() const;

                    /**
                     * 设置Message retention policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionPolicy Message retention policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionPolicy(const RetentionPolicy& _retentionPolicy);

                    /**
                     * 判断参数 RetentionPolicy 是否已赋值
                     * @return RetentionPolicy 是否已赋值
                     * 
                     */
                    bool RetentionPolicyHasBeenSet() const;

                    /**
                     * 获取Whether to enable "Auto-Create Subscription"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoSubscriptionCreation Whether to enable "Auto-Create Subscription"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoSubscriptionCreation() const;

                    /**
                     * 设置Whether to enable "Auto-Create Subscription"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoSubscriptionCreation Whether to enable "Auto-Create Subscription"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoSubscriptionCreation(const bool& _autoSubscriptionCreation);

                    /**
                     * 判断参数 AutoSubscriptionCreation 是否已赋值
                     * @return AutoSubscriptionCreation 是否已赋值
                     * 
                     */
                    bool AutoSubscriptionCreationHasBeenSet() const;

                private:

                    /**
                     * Namespace name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Retention period for unconsumed messages in seconds. Maximum value: 1,296,000 seconds (15 days).
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Namespace ID.
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Namespace name.
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * The number of topics.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Message retention policy.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RetentionPolicy m_retentionPolicy;
                    bool m_retentionPolicyHasBeenSet;

                    /**
                     * Whether to enable "Auto-Create Subscription"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoSubscriptionCreation;
                    bool m_autoSubscriptionCreationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_

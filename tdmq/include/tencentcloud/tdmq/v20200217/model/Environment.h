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
                     * 获取Namespace name
                     * @return EnvironmentId Namespace name
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace name
                     * @param EnvironmentId Namespace name
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param Remark Remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days)
                     * @return MsgTTL TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days)
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days)
                     * @param MsgTTL TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days)
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return UpdateTime Modification time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Modification time
                     * @param UpdateTime Modification time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Namespace ID
                     * @return NamespaceId Namespace ID
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace ID
                     * @param NamespaceId Namespace ID
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param NamespaceName Namespace name
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Number of topics
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicNum Number of topics
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Number of topics
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TopicNum Number of topics
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Message retention policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RetentionPolicy Message retention policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RetentionPolicy GetRetentionPolicy() const;

                    /**
                     * 设置Message retention policy
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RetentionPolicy Message retention policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRetentionPolicy(const RetentionPolicy& _retentionPolicy);

                    /**
                     * 判断参数 RetentionPolicy 是否已赋值
                     * @return RetentionPolicy 是否已赋值
                     */
                    bool RetentionPolicyHasBeenSet() const;

                private:

                    /**
                     * Namespace name
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * TTL for unconsumed messages in seconds. Maximum value: 1296000 seconds (i.e., 15 days)
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Namespace ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Number of topics
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Message retention policy
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RetentionPolicy m_retentionPolicy;
                    bool m_retentionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ENVIRONMENT_H_

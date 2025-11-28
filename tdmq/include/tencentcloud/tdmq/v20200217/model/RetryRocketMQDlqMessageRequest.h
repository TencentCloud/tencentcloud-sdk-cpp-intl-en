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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RETRYROCKETMQDLQMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RETRYROCKETMQDLQMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RetryRocketMQDlqMessage request structure.
                */
                class RetryRocketMQDlqMessageRequest : public AbstractModel
                {
                public:
                    RetryRocketMQDlqMessageRequest();
                    ~RetryRocketMQDlqMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Specifies the namespace name.
                     * @return NamespaceId Specifies the namespace name.
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Specifies the namespace name.
                     * @param _namespaceId Specifies the namespace name.
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
                     * 获取Group Name
                     * @return GroupName Group Name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group Name
                     * @param _groupName Group Name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Dead Letter Message ID
                     * @return MessageIds Dead Letter Message ID
                     * 
                     */
                    std::vector<std::string> GetMessageIds() const;

                    /**
                     * 设置Dead Letter Message ID
                     * @param _messageIds Dead Letter Message ID
                     * 
                     */
                    void SetMessageIds(const std::vector<std::string>& _messageIds);

                    /**
                     * 判断参数 MessageIds 是否已赋值
                     * @return MessageIds 是否已赋值
                     * 
                     */
                    bool MessageIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Specifies the namespace name.
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Group Name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Dead Letter Message ID
                     */
                    std::vector<std::string> m_messageIds;
                    bool m_messageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RETRYROCKETMQDLQMESSAGEREQUEST_H_

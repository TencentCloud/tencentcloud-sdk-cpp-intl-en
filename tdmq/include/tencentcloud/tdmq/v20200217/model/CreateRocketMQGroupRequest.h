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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPREQUEST_H_

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
                * CreateRocketMQGroup request structure.
                */
                class CreateRocketMQGroupRequest : public AbstractModel
                {
                public:
                    CreateRocketMQGroupRequest();
                    ~CreateRocketMQGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group name (8–64 characters)
                     * @return GroupId Group name (8–64 characters)
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group name (8–64 characters)
                     * @param _groupId Group name (8–64 characters)
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Namespace. Currently, only one namespace is supported
                     * @return Namespaces Namespace. Currently, only one namespace is supported
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置Namespace. Currently, only one namespace is supported
                     * @param _namespaces Namespace. Currently, only one namespace is supported
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption
                     * @return ReadEnable Whether to enable consumption
                     * 
                     */
                    bool GetReadEnable() const;

                    /**
                     * 设置Whether to enable consumption
                     * @param _readEnable Whether to enable consumption
                     * 
                     */
                    void SetReadEnable(const bool& _readEnable);

                    /**
                     * 判断参数 ReadEnable 是否已赋值
                     * @return ReadEnable 是否已赋值
                     * 
                     */
                    bool ReadEnableHasBeenSet() const;

                    /**
                     * 获取Whether to enable broadcast consumption
                     * @return BroadcastEnable Whether to enable broadcast consumption
                     * 
                     */
                    bool GetBroadcastEnable() const;

                    /**
                     * 设置Whether to enable broadcast consumption
                     * @param _broadcastEnable Whether to enable broadcast consumption
                     * 
                     */
                    void SetBroadcastEnable(const bool& _broadcastEnable);

                    /**
                     * 判断参数 BroadcastEnable 是否已赋值
                     * @return BroadcastEnable 是否已赋值
                     * 
                     */
                    bool BroadcastEnableHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Remarks (up to 128 characters)
                     * @return Remark Remarks (up to 128 characters)
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters)
                     * @param _remark Remarks (up to 128 characters)
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
                     * 获取Group type (`TCP`, `HTTP`)
                     * @return GroupType Group type (`TCP`, `HTTP`)
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Group type (`TCP`, `HTTP`)
                     * @param _groupType Group type (`TCP`, `HTTP`)
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取The maximum number of retries for a group
                     * @return RetryMaxTimes The maximum number of retries for a group
                     * 
                     */
                    uint64_t GetRetryMaxTimes() const;

                    /**
                     * 设置The maximum number of retries for a group
                     * @param _retryMaxTimes The maximum number of retries for a group
                     * 
                     */
                    void SetRetryMaxTimes(const uint64_t& _retryMaxTimes);

                    /**
                     * 判断参数 RetryMaxTimes 是否已赋值
                     * @return RetryMaxTimes 是否已赋值
                     * 
                     */
                    bool RetryMaxTimesHasBeenSet() const;

                private:

                    /**
                     * Group name (8–64 characters)
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Namespace. Currently, only one namespace is supported
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * Whether to enable consumption
                     */
                    bool m_readEnable;
                    bool m_readEnableHasBeenSet;

                    /**
                     * Whether to enable broadcast consumption
                     */
                    bool m_broadcastEnable;
                    bool m_broadcastEnableHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remarks (up to 128 characters)
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Group type (`TCP`, `HTTP`)
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * The maximum number of retries for a group
                     */
                    uint64_t m_retryMaxTimes;
                    bool m_retryMaxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPREQUEST_H_

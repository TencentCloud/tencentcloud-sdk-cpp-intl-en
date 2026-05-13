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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPV2REQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQGroupV2 request structure.
                */
                class CreateRocketMQGroupV2Request : public AbstractModel
                {
                public:
                    CreateRocketMQGroupV2Request();
                    ~CreateRocketMQGroupV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取consumer group name
                     * @return GroupId consumer group name
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置consumer group name
                     * @param _groupId consumer group name
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
                     * 获取Namespace of the consumption group. The 4.x common Cluster Namespace is fixed as: tdmq_default
                     * @return Namespace Namespace of the consumption group. The 4.x common Cluster Namespace is fixed as: tdmq_default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the consumption group. The 4.x common Cluster Namespace is fixed as: tdmq_default
                     * @param _namespace Namespace of the consumption group. The 4.x common Cluster Namespace is fixed as: tdmq_default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Enable consumption
                     * @return ReadEnable Enable consumption
                     * 
                     */
                    bool GetReadEnable() const;

                    /**
                     * 设置Enable consumption
                     * @param _readEnable Enable consumption
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
                     * 获取Enable broadcast consumption
                     * @return BroadcastEnable Enable broadcast consumption
                     * 
                     */
                    bool GetBroadcastEnable() const;

                    /**
                     * 设置Enable broadcast consumption
                     * @param _broadcastEnable Enable broadcast consumption
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Group Type (TCP/HTTP)
                     * @return GroupType Group Type (TCP/HTTP)
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Group Type (TCP/HTTP)
                     * @param _groupType Group Type (TCP/HTTP)
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
                     * 获取Group Max Retry Count
                     * @return RetryMaxTimes Group Max Retry Count
                     * 
                     */
                    uint64_t GetRetryMaxTimes() const;

                    /**
                     * 设置Group Max Retry Count
                     * @param _retryMaxTimes Group Max Retry Count
                     * 
                     */
                    void SetRetryMaxTimes(const uint64_t& _retryMaxTimes);

                    /**
                     * 判断参数 RetryMaxTimes 是否已赋值
                     * @return RetryMaxTimes 是否已赋值
                     * 
                     */
                    bool RetryMaxTimesHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return TagList Tag list
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Tag list
                     * @param _tagList Tag list
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * consumer group name
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Namespace of the consumption group. The 4.x common Cluster Namespace is fixed as: tdmq_default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Enable consumption
                     */
                    bool m_readEnable;
                    bool m_readEnableHasBeenSet;

                    /**
                     * Enable broadcast consumption
                     */
                    bool m_broadcastEnable;
                    bool m_broadcastEnableHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Group Type (TCP/HTTP)
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Group Max Retry Count
                     */
                    uint64_t m_retryMaxTimes;
                    bool m_retryMaxTimesHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQGROUPV2REQUEST_H_

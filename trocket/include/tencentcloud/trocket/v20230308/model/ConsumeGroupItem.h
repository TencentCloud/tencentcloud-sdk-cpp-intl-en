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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/RetryPolicy.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Consumer group information
                */
                class ConsumeGroupItem : public AbstractModel
                {
                public:
                    ConsumeGroupItem();
                    ~ConsumeGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Consumer group name
                     * @return ConsumerGroup Consumer group name
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group name
                     * @param _consumerGroup Consumer group name
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Enable consumption
                     * @return ConsumeEnable Enable consumption
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置Enable consumption
                     * @param _consumeEnable Enable consumption
                     * 
                     */
                    void SetConsumeEnable(const bool& _consumeEnable);

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取Ordered delivery: true
Concurrent delivery: false.
                     * @return ConsumeMessageOrderly Ordered delivery: true
Concurrent delivery: false.
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置Ordered delivery: true
Concurrent delivery: false.
                     * @param _consumeMessageOrderly Ordered delivery: true
Concurrent delivery: false.
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取Maximum number of retries
                     * @return MaxRetryTimes Maximum number of retries
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置Maximum number of retries
                     * @param _maxRetryTimes Maximum number of retries
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

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
                     * 获取ID of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterIdV4 ID of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterIdV4() const;

                    /**
                     * 设置ID of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterIdV4 ID of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterIdV4(const std::string& _clusterIdV4);

                    /**
                     * 判断参数 ClusterIdV4 是否已赋值
                     * @return ClusterIdV4 是否已赋值
                     * 
                     */
                    bool ClusterIdV4HasBeenSet() const;

                    /**
                     * 获取Namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceV4 Namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置Namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespaceV4 Namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取Consumer group name of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsumerGroupV4 Consumer group name of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsumerGroupV4() const;

                    /**
                     * 设置Consumer group name of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consumerGroupV4 Consumer group name of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConsumerGroupV4(const std::string& _consumerGroupV4);

                    /**
                     * 判断参数 ConsumerGroupV4 是否已赋值
                     * @return ConsumerGroupV4 是否已赋值
                     * 
                     */
                    bool ConsumerGroupV4HasBeenSet() const;

                    /**
                     * 获取Complete namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullNamespaceV4 Complete namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置Complete namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullNamespaceV4 Complete namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                    /**
                     * 获取Number of subscribed topics.
                     * @return SubscribeTopicNum Number of subscribed topics.
                     * 
                     */
                    int64_t GetSubscribeTopicNum() const;

                    /**
                     * 设置Number of subscribed topics.
                     * @param _subscribeTopicNum Number of subscribed topics.
                     * 
                     */
                    void SetSubscribeTopicNum(const int64_t& _subscribeTopicNum);

                    /**
                     * 判断参数 SubscribeTopicNum 是否已赋值
                     * @return SubscribeTopicNum 是否已赋值
                     * 
                     */
                    bool SubscribeTopicNumHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of bound tags
                     * @return TagList List of bound tags
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置List of bound tags
                     * @param _tagList List of bound tags
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取Retry policy
                     * @return RetryPolicy Retry policy
                     * 
                     */
                    RetryPolicy GetRetryPolicy() const;

                    /**
                     * 设置Retry policy
                     * @param _retryPolicy Retry policy
                     * 
                     */
                    void SetRetryPolicy(const RetryPolicy& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Consumer group name
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Enable consumption
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * Ordered delivery: true
Concurrent delivery: false.
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * Maximum number of retries
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * ID of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterIdV4;
                    bool m_clusterIdV4HasBeenSet;

                    /**
                     * Namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * Consumer group name of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consumerGroupV4;
                    bool m_consumerGroupV4HasBeenSet;

                    /**
                     * Complete namespace of a 4.x cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * Number of subscribed topics.
                     */
                    int64_t m_subscribeTopicNum;
                    bool m_subscribeTopicNumHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of bound tags
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * Retry policy
                     */
                    RetryPolicy m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_

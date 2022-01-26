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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTopicSyncReplica request structure.
                */
                class DescribeTopicSyncReplicaRequest : public AbstractModel
                {
                public:
                    DescribeTopicSyncReplicaRequest();
                    ~DescribeTopicSyncReplicaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param TopicName Topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Offset. If this parameter is left empty, 0 will be used by default.
                     * @return Offset Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. If this parameter is left empty, 0 will be used by default.
                     * @param Offset Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * @return Limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     * @param Limit Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filters unsynced replicas only
                     * @return OutOfSyncReplicaOnly Filters unsynced replicas only
                     */
                    bool GetOutOfSyncReplicaOnly() const;

                    /**
                     * 设置Filters unsynced replicas only
                     * @param OutOfSyncReplicaOnly Filters unsynced replicas only
                     */
                    void SetOutOfSyncReplicaOnly(const bool& _outOfSyncReplicaOnly);

                    /**
                     * 判断参数 OutOfSyncReplicaOnly 是否已赋值
                     * @return OutOfSyncReplicaOnly 是否已赋值
                     */
                    bool OutOfSyncReplicaOnlyHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Offset. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. If this parameter is left empty, 10 will be used by default. The maximum value is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters unsynced replicas only
                     */
                    bool m_outOfSyncReplicaOnly;
                    bool m_outOfSyncReplicaOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETOPICSYNCREPLICAREQUEST_H_

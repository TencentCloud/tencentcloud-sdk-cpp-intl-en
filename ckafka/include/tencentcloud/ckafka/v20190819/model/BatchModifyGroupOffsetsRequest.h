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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Partitions.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * BatchModifyGroupOffsets request structure.
                */
                class BatchModifyGroupOffsetsRequest : public AbstractModel
                {
                public:
                    BatchModifyGroupOffsetsRequest();
                    ~BatchModifyGroupOffsetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Consumer group name.
                     * @return GroupName Consumer group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Consumer group name.
                     * @param _groupName Consumer group name.
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
                     * 获取Instance name.
                     * @return InstanceId Instance name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceId Instance name.
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
                     * 获取Partition information.
                     * @return Partitions Partition information.
                     * 
                     */
                    std::vector<Partitions> GetPartitions() const;

                    /**
                     * 设置Partition information.
                     * @param _partitions Partition information.
                     * 
                     */
                    void SetPartitions(const std::vector<Partitions>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取Name of the specified topic. Default value: names of all topics.
                     * @return TopicName Name of the specified topic. Default value: names of all topics.
                     * 
                     */
                    std::vector<std::string> GetTopicName() const;

                    /**
                     * 设置Name of the specified topic. Default value: names of all topics.
                     * @param _topicName Name of the specified topic. Default value: names of all topics.
                     * 
                     */
                    void SetTopicName(const std::vector<std::string>& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * Consumer group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Partition information.
                     */
                    std::vector<Partitions> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * Name of the specified topic. Default value: names of all topics.
                     */
                    std::vector<std::string> m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYGROUPOFFSETSREQUEST_H_

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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPARTITIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPARTITIONREQUEST_H_

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
                * CreatePartition request structure.
                */
                class CreatePartitionRequest : public AbstractModel
                {
                public:
                    CreatePartitionRequest();
                    ~CreatePartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
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
                     * 获取Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1) api.
                     * @return TopicName Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1) api.
                     * @param _topicName Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1) api.
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
                     * 获取Topic partition count. the input parameter is the number of partitions after modification rather than adding partitions. therefore, the input parameter must exceed the current topic partition count.
                     * @return PartitionNum Topic partition count. the input parameter is the number of partitions after modification rather than adding partitions. therefore, the input parameter must exceed the current topic partition count.
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Topic partition count. the input parameter is the number of partitions after modification rather than adding partitions. therefore, the input parameter must exceed the current topic partition count.
                     * @param _partitionNum Topic partition count. the input parameter is the number of partitions after modification rather than adding partitions. therefore, the input parameter must exceed the current topic partition count.
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.com/document/product/597/40847?from_cn_redirect=1) api.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic partition count. the input parameter is the number of partitions after modification rather than adding partitions. therefore, the input parameter must exceed the current topic partition count.
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEPARTITIONREQUEST_H_

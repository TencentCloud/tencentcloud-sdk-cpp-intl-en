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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGEBYOFFSETREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGEBYOFFSETREQUEST_H_

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
                * FetchMessageByOffset request structure.
                */
                class FetchMessageByOffsetRequest : public AbstractModel
                {
                public:
                    FetchMessageByOffsetRequest();
                    ~FetchMessageByOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @return InstanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     * @param _instanceId The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
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
                     * 获取Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.comom/document/product/597/40847?from_cn_redirect=1) api.
                     * @return Topic Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.comom/document/product/597/40847?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.comom/document/product/597/40847?from_cn_redirect=1) api.
                     * @param _topic Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.comom/document/product/597/40847?from_cn_redirect=1) api.
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Partition ID
                     * @return Partition Partition ID
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Partition ID
                     * @param _partition Partition ID
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Specifies the position information.
                     * @return Offset Specifies the position information.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the position information.
                     * @param _offset Specifies the position information.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * The ckafka cluster instance Id, which can be obtained through the [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1) api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the topic name, which can be obtained through the [DescribeTopic](https://www.tencentcloud.comom/document/product/597/40847?from_cn_redirect=1) api.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Partition ID
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Specifies the position information.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGEBYOFFSETREQUEST_H_

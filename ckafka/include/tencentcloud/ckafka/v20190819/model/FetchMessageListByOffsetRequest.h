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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_

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
                * FetchMessageListByOffset request structure.
                */
                class FetchMessageListByOffsetRequest : public AbstractModel
                {
                public:
                    FetchMessageListByOffsetRequest();
                    ~FetchMessageListByOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
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
                     * 获取<p>Topic name</p>
                     * @return Topic <p>Topic name</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>Topic name</p>
                     * @param _topic <p>Topic name</p>
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
                     * 获取<p>Partition id</p>
                     * @return Partition <p>Partition id</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>Partition id</p>
                     * @param _partition <p>Partition id</p>
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
                     * 获取<p>Location info</p>
                     * @return Offset <p>Location info</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Location info</p>
                     * @param _offset <p>Location info</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of query results. Default value: 20. Maximum value: 20.</p>
                     * @return SinglePartitionRecordNumber <p>Maximum number of query results. Default value: 20. Maximum value: 20.</p>
                     * 
                     */
                    int64_t GetSinglePartitionRecordNumber() const;

                    /**
                     * 设置<p>Maximum number of query results. Default value: 20. Maximum value: 20.</p>
                     * @param _singlePartitionRecordNumber <p>Maximum number of query results. Default value: 20. Maximum value: 20.</p>
                     * 
                     */
                    void SetSinglePartitionRecordNumber(const int64_t& _singlePartitionRecordNumber);

                    /**
                     * 判断参数 SinglePartitionRecordNumber 是否已赋值
                     * @return SinglePartitionRecordNumber 是否已赋值
                     * 
                     */
                    bool SinglePartitionRecordNumberHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Topic name</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>Partition id</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>Location info</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Maximum number of query results. Default value: 20. Maximum value: 20.</p>
                     */
                    int64_t m_singlePartitionRecordNumber;
                    bool m_singlePartitionRecordNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHMESSAGELISTBYOFFSETREQUEST_H_

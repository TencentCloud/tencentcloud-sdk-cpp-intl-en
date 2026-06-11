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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MERGEPARTITIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MERGEPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * MergePartition request structure.
                */
                class MergePartitionRequest : public AbstractModel
                {
                public:
                    MergePartitionRequest();
                    ~MergePartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return TopicId Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _topicId Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Merged partition id (find the next partition whose InclusiveBeginKey equals the ExclusiveEndKey of the corresponding partition id in the input parameter, and the found partition must be a read-write partition (Status:readwrite), set the input partition id and the found partition id to read-only partition (Status:readonly), then create a new read-write partition). [Get partition list](https://www.tencentcloud.com/document/product/614/56470?from_cn_redirect=1)

1. PartitionId can only be a read-write partition (Status can be readonly or readwrite), and the next read-write partition of PartitionId can be found (the InclusiveBeginKey of the next partition equals to the ExclusiveEndKey of PartitionId).
2. The PartitionId cannot be the last partition (the ExclusiveEndKey of PartitionId cannot be ffffffffffffffffffffffffffffffff).
3. The number of topic partitions is limited (50 by default). After merging, it must not exceed the maximum partition, otherwise merging is not allowed.
                     * @return PartitionId Merged partition id (find the next partition whose InclusiveBeginKey equals the ExclusiveEndKey of the corresponding partition id in the input parameter, and the found partition must be a read-write partition (Status:readwrite), set the input partition id and the found partition id to read-only partition (Status:readonly), then create a new read-write partition). [Get partition list](https://www.tencentcloud.com/document/product/614/56470?from_cn_redirect=1)

1. PartitionId can only be a read-write partition (Status can be readonly or readwrite), and the next read-write partition of PartitionId can be found (the InclusiveBeginKey of the next partition equals to the ExclusiveEndKey of PartitionId).
2. The PartitionId cannot be the last partition (the ExclusiveEndKey of PartitionId cannot be ffffffffffffffffffffffffffffffff).
3. The number of topic partitions is limited (50 by default). After merging, it must not exceed the maximum partition, otherwise merging is not allowed.
                     * 
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置Merged partition id (find the next partition whose InclusiveBeginKey equals the ExclusiveEndKey of the corresponding partition id in the input parameter, and the found partition must be a read-write partition (Status:readwrite), set the input partition id and the found partition id to read-only partition (Status:readonly), then create a new read-write partition). [Get partition list](https://www.tencentcloud.com/document/product/614/56470?from_cn_redirect=1)

1. PartitionId can only be a read-write partition (Status can be readonly or readwrite), and the next read-write partition of PartitionId can be found (the InclusiveBeginKey of the next partition equals to the ExclusiveEndKey of PartitionId).
2. The PartitionId cannot be the last partition (the ExclusiveEndKey of PartitionId cannot be ffffffffffffffffffffffffffffffff).
3. The number of topic partitions is limited (50 by default). After merging, it must not exceed the maximum partition, otherwise merging is not allowed.
                     * @param _partitionId Merged partition id (find the next partition whose InclusiveBeginKey equals the ExclusiveEndKey of the corresponding partition id in the input parameter, and the found partition must be a read-write partition (Status:readwrite), set the input partition id and the found partition id to read-only partition (Status:readonly), then create a new read-write partition). [Get partition list](https://www.tencentcloud.com/document/product/614/56470?from_cn_redirect=1)

1. PartitionId can only be a read-write partition (Status can be readonly or readwrite), and the next read-write partition of PartitionId can be found (the InclusiveBeginKey of the next partition equals to the ExclusiveEndKey of PartitionId).
2. The PartitionId cannot be the last partition (the ExclusiveEndKey of PartitionId cannot be ffffffffffffffffffffffffffffffff).
3. The number of topic partitions is limited (50 by default). After merging, it must not exceed the maximum partition, otherwise merging is not allowed.
                     * 
                     */
                    void SetPartitionId(const int64_t& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Merged partition id (find the next partition whose InclusiveBeginKey equals the ExclusiveEndKey of the corresponding partition id in the input parameter, and the found partition must be a read-write partition (Status:readwrite), set the input partition id and the found partition id to read-only partition (Status:readonly), then create a new read-write partition). [Get partition list](https://www.tencentcloud.com/document/product/614/56470?from_cn_redirect=1)

1. PartitionId can only be a read-write partition (Status can be readonly or readwrite), and the next read-write partition of PartitionId can be found (the InclusiveBeginKey of the next partition equals to the ExclusiveEndKey of PartitionId).
2. The PartitionId cannot be the last partition (the ExclusiveEndKey of PartitionId cannot be ffffffffffffffffffffffffffffffff).
3. The number of topic partitions is limited (50 by default). After merging, it must not exceed the maximum partition, otherwise merging is not allowed.
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MERGEPARTITIONREQUEST_H_

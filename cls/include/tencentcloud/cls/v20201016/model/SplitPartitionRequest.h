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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SPLITPARTITIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SPLITPARTITIONREQUEST_H_

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
                * SplitPartition request structure.
                */
                class SplitPartitionRequest : public AbstractModel
                {
                public:
                    SplitPartitionRequest();
                    ~SplitPartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取ID of the partition to be split
                     * @return PartitionId ID of the partition to be split
                     * 
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置ID of the partition to be split
                     * @param _partitionId ID of the partition to be split
                     * 
                     */
                    void SetPartitionId(const int64_t& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                    /**
                     * 获取Partition split hash key position, which is meaningful only if `Number=2` is set
                     * @return SplitKey Partition split hash key position, which is meaningful only if `Number=2` is set
                     * 
                     */
                    std::string GetSplitKey() const;

                    /**
                     * 设置Partition split hash key position, which is meaningful only if `Number=2` is set
                     * @param _splitKey Partition split hash key position, which is meaningful only if `Number=2` is set
                     * 
                     */
                    void SetSplitKey(const std::string& _splitKey);

                    /**
                     * 判断参数 SplitKey 是否已赋值
                     * @return SplitKey 是否已赋值
                     * 
                     */
                    bool SplitKeyHasBeenSet() const;

                    /**
                     * 获取Number of partitions to split into, which is optional. Default value: 2
                     * @return Number Number of partitions to split into, which is optional. Default value: 2
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置Number of partitions to split into, which is optional. Default value: 2
                     * @param _number Number of partitions to split into, which is optional. Default value: 2
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * ID of the partition to be split
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * Partition split hash key position, which is meaningful only if `Number=2` is set
                     */
                    std::string m_splitKey;
                    bool m_splitKeyHasBeenSet;

                    /**
                     * Number of partitions to split into, which is optional. Default value: 2
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SPLITPARTITIONREQUEST_H_

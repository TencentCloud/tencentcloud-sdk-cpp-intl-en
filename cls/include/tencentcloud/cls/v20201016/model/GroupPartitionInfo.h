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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GROUPPARTITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GROUPPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Consumption group distinguish information over kafka protocol
                */
                class GroupPartitionInfo : public AbstractModel
                {
                public:
                    GroupPartitionInfo();
                    ~GroupPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition ID
                     * @return PartitionId Partition ID
                     * 
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置Partition ID
                     * @param _partitionId Partition ID
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
                     * 获取Latest data timestamp of the partition, unit: s
                     * @return CommitTimestamp Latest data timestamp of the partition, unit: s
                     * 
                     */
                    int64_t GetCommitTimestamp() const;

                    /**
                     * 设置Latest data timestamp of the partition, unit: s
                     * @param _commitTimestamp Latest data timestamp of the partition, unit: s
                     * 
                     */
                    void SetCommitTimestamp(const int64_t& _commitTimestamp);

                    /**
                     * 判断参数 CommitTimestamp 是否已赋值
                     * @return CommitTimestamp 是否已赋值
                     * 
                     */
                    bool CommitTimestampHasBeenSet() const;

                    /**
                     * 获取consumer
                     * @return Consumer consumer
                     * 
                     */
                    std::string GetConsumer() const;

                    /**
                     * 设置consumer
                     * @param _consumer consumer
                     * 
                     */
                    void SetConsumer(const std::string& _consumer);

                    /**
                     * 判断参数 Consumer 是否已赋值
                     * @return Consumer 是否已赋值
                     * 
                     */
                    bool ConsumerHasBeenSet() const;

                private:

                    /**
                     * Partition ID
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * Latest data timestamp of the partition, unit: s
                     */
                    int64_t m_commitTimestamp;
                    bool m_commitTimestampHasBeenSet;

                    /**
                     * consumer
                     */
                    std::string m_consumer;
                    bool m_consumerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GROUPPARTITIONINFO_H_

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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETPARTITION_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Group offset partition object
                */
                class GroupOffsetPartition : public AbstractModel
                {
                public:
                    GroupOffsetPartition();
                    ~GroupOffsetPartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic `partitionId`
                     * @return Partition Topic `partitionId`
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Topic `partitionId`
                     * @param _partition Topic `partitionId`
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
                     * 获取Offset position submitted by consumer
                     * @return Offset Offset position submitted by consumer
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset position submitted by consumer
                     * @param _offset Offset position submitted by consumer
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
                     * 获取Metadata can be passed in for other purposes when the consumer submits messages. Currently, this parameter is usually an empty string
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Metadata Metadata can be passed in for other purposes when the consumer submits messages. Currently, this parameter is usually an empty string
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置Metadata can be passed in for other purposes when the consumer submits messages. Currently, this parameter is usually an empty string
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _metadata Metadata can be passed in for other purposes when the consumer submits messages. Currently, this parameter is usually an empty string
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取Error code
                     * @return ErrorCode Error code
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Error code
                     * @param _errorCode Error code
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Latest offset of current partition
                     * @return LogEndOffset Latest offset of current partition
                     * 
                     */
                    int64_t GetLogEndOffset() const;

                    /**
                     * 设置Latest offset of current partition
                     * @param _logEndOffset Latest offset of current partition
                     * 
                     */
                    void SetLogEndOffset(const int64_t& _logEndOffset);

                    /**
                     * 判断参数 LogEndOffset 是否已赋值
                     * @return LogEndOffset 是否已赋值
                     * 
                     */
                    bool LogEndOffsetHasBeenSet() const;

                    /**
                     * 获取Number of unconsumed messages
                     * @return Lag Number of unconsumed messages
                     * 
                     */
                    int64_t GetLag() const;

                    /**
                     * 设置Number of unconsumed messages
                     * @param _lag Number of unconsumed messages
                     * 
                     */
                    void SetLag(const int64_t& _lag);

                    /**
                     * 判断参数 Lag 是否已赋值
                     * @return Lag 是否已赋值
                     * 
                     */
                    bool LagHasBeenSet() const;

                private:

                    /**
                     * Topic `partitionId`
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Offset position submitted by consumer
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Metadata can be passed in for other purposes when the consumer submits messages. Currently, this parameter is usually an empty string
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * Error code
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Latest offset of current partition
                     */
                    int64_t m_logEndOffset;
                    bool m_logEndOffsetHasBeenSet;

                    /**
                     * Number of unconsumed messages
                     */
                    int64_t m_lag;
                    bool m_lagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPOFFSETPARTITION_H_

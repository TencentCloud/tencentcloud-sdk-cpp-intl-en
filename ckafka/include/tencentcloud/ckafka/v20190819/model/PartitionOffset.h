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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_PARTITIONOFFSET_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_PARTITIONOFFSET_H_

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
                * Partition and offset
                */
                class PartitionOffset : public AbstractModel
                {
                public:
                    PartitionOffset();
                    ~PartitionOffset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition, such as "0" or "1"
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Partition Partition, such as "0" or "1"
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置Partition, such as "0" or "1"
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _partition Partition, such as "0" or "1"
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Offset, such as 100
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Offset Offset, such as 100
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, such as 100
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _offset Offset, such as 100
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Partition, such as "0" or "1"
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Offset, such as 100
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_PARTITIONOFFSET_H_

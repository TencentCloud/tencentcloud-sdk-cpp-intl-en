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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PARTITION_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/RangeInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/ListInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Partition information of the table
                */
                class Partition : public AbstractModel
                {
                public:
                    Partition();
                    ~Partition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition type:
●Range: The partition column is usually of time or integer type. Four writing methods are supported.
●List: The partition value is an enumeration value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionType Partition type:
●Range: The partition column is usually of time or integer type. Four writing methods are supported.
●List: The partition value is an enumeration value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置Partition type:
●Range: The partition column is usually of time or integer type. Four writing methods are supported.
●List: The partition value is an enumeration value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionType Partition type:
●Range: The partition column is usually of time or integer type. Four writing methods are supported.
●List: The partition value is an enumeration value.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically partition

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoPartition Whether to automatically partition

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoPartition() const;

                    /**
                     * 设置Whether to automatically partition

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoPartition Whether to automatically partition

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoPartition(const bool& _autoPartition);

                    /**
                     * 判断参数 AutoPartition 是否已赋值
                     * @return AutoPartition 是否已赋值
                     * 
                     */
                    bool AutoPartitionHasBeenSet() const;

                    /**
                     * 获取Partition information when the partition type is Range

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RangeInfos Partition information when the partition type is Range

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RangeInfo> GetRangeInfos() const;

                    /**
                     * 设置Partition information when the partition type is Range

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rangeInfos Partition information when the partition type is Range

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRangeInfos(const std::vector<RangeInfo>& _rangeInfos);

                    /**
                     * 判断参数 RangeInfos 是否已赋值
                     * @return RangeInfos 是否已赋值
                     * 
                     */
                    bool RangeInfosHasBeenSet() const;

                    /**
                     * 获取Partition information when the partition type is List

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListInfos Partition information when the partition type is List

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ListInfo> GetListInfos() const;

                    /**
                     * 设置Partition information when the partition type is List

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listInfos Partition information when the partition type is List

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetListInfos(const std::vector<ListInfo>& _listInfos);

                    /**
                     * 判断参数 ListInfos 是否已赋值
                     * @return ListInfos 是否已赋值
                     * 
                     */
                    bool ListInfosHasBeenSet() const;

                private:

                    /**
                     * Partition type:
●Range: The partition column is usually of time or integer type. Four writing methods are supported.
●List: The partition value is an enumeration value.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * Whether to automatically partition

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoPartition;
                    bool m_autoPartitionHasBeenSet;

                    /**
                     * Partition information when the partition type is Range

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RangeInfo> m_rangeInfos;
                    bool m_rangeInfosHasBeenSet;

                    /**
                     * Partition information when the partition type is List

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ListInfo> m_listInfos;
                    bool m_listInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_PARTITION_H_

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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONINFO_H_

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
                * Log topic partition information
                */
                class PartitionInfo : public AbstractModel
                {
                public:
                    PartitionInfo();
                    ~PartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition ID
                     * @return PartitionId Partition ID
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置Partition ID
                     * @param PartitionId Partition ID
                     */
                    void SetPartitionId(const int64_t& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     */
                    bool PartitionIdHasBeenSet() const;

                    /**
                     * 获取Partition status. Valid values: `readwrite`, `readonly`
                     * @return Status Partition status. Valid values: `readwrite`, `readonly`
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Partition status. Valid values: `readwrite`, `readonly`
                     * @param Status Partition status. Valid values: `readwrite`, `readonly`
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Partition hash start key
                     * @return InclusiveBeginKey Partition hash start key
                     */
                    std::string GetInclusiveBeginKey() const;

                    /**
                     * 设置Partition hash start key
                     * @param InclusiveBeginKey Partition hash start key
                     */
                    void SetInclusiveBeginKey(const std::string& _inclusiveBeginKey);

                    /**
                     * 判断参数 InclusiveBeginKey 是否已赋值
                     * @return InclusiveBeginKey 是否已赋值
                     */
                    bool InclusiveBeginKeyHasBeenSet() const;

                    /**
                     * 获取Partition hash end key
                     * @return ExclusiveEndKey Partition hash end key
                     */
                    std::string GetExclusiveEndKey() const;

                    /**
                     * 设置Partition hash end key
                     * @param ExclusiveEndKey Partition hash end key
                     */
                    void SetExclusiveEndKey(const std::string& _exclusiveEndKey);

                    /**
                     * 判断参数 ExclusiveEndKey 是否已赋值
                     * @return ExclusiveEndKey 是否已赋值
                     */
                    bool ExclusiveEndKeyHasBeenSet() const;

                    /**
                     * 获取Partition creation time
                     * @return CreateTime Partition creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Partition creation time
                     * @param CreateTime Partition creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified of read-only partition
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LastWriteTime Last modified of read-only partition
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastWriteTime() const;

                    /**
                     * 设置Last modified of read-only partition
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LastWriteTime Last modified of read-only partition
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastWriteTime(const std::string& _lastWriteTime);

                    /**
                     * 判断参数 LastWriteTime 是否已赋值
                     * @return LastWriteTime 是否已赋值
                     */
                    bool LastWriteTimeHasBeenSet() const;

                private:

                    /**
                     * Partition ID
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * Partition status. Valid values: `readwrite`, `readonly`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Partition hash start key
                     */
                    std::string m_inclusiveBeginKey;
                    bool m_inclusiveBeginKeyHasBeenSet;

                    /**
                     * Partition hash end key
                     */
                    std::string m_exclusiveEndKey;
                    bool m_exclusiveEndKeyHasBeenSet;

                    /**
                     * Partition creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified of read-only partition
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastWriteTime;
                    bool m_lastWriteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONINFO_H_

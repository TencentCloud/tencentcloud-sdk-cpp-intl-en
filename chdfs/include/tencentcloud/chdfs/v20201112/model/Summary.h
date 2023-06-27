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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_SUMMARY_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_SUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * Details about the storage usage of the current lifecycle rule path
                */
                class Summary : public AbstractModel
                {
                public:
                    Summary();
                    ~Summary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Capacity usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CapacityUsed Capacity usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 设置Capacity usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _capacityUsed Capacity usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCapacityUsed(const uint64_t& _capacityUsed);

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS STANDARD storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StandardCapacityUsed COS STANDARD storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStandardCapacityUsed() const;

                    /**
                     * 设置COS STANDARD storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _standardCapacityUsed COS STANDARD storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandardCapacityUsed(const uint64_t& _standardCapacityUsed);

                    /**
                     * 判断参数 StandardCapacityUsed 是否已赋值
                     * @return StandardCapacityUsed 是否已赋值
                     * 
                     */
                    bool StandardCapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS STANDARD_IA storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DegradeCapacityUsed COS STANDARD_IA storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDegradeCapacityUsed() const;

                    /**
                     * 设置COS STANDARD_IA storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _degradeCapacityUsed COS STANDARD_IA storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDegradeCapacityUsed(const uint64_t& _degradeCapacityUsed);

                    /**
                     * 判断参数 DegradeCapacityUsed 是否已赋值
                     * @return DegradeCapacityUsed 是否已赋值
                     * 
                     */
                    bool DegradeCapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ArchiveCapacityUsed COS ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetArchiveCapacityUsed() const;

                    /**
                     * 设置COS ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _archiveCapacityUsed COS ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetArchiveCapacityUsed(const uint64_t& _archiveCapacityUsed);

                    /**
                     * 判断参数 ArchiveCapacityUsed 是否已赋值
                     * @return ArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool ArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS DEEP ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeepArchiveCapacityUsed COS DEEP ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDeepArchiveCapacityUsed() const;

                    /**
                     * 设置COS DEEP ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deepArchiveCapacityUsed COS DEEP ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeepArchiveCapacityUsed(const uint64_t& _deepArchiveCapacityUsed);

                    /**
                     * 判断参数 DeepArchiveCapacityUsed 是否已赋值
                     * @return DeepArchiveCapacityUsed 是否已赋值
                     * 
                     */
                    bool DeepArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取COS INTELLIGENT TIERING storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntelligentCapacityUsed COS INTELLIGENT TIERING storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntelligentCapacityUsed() const;

                    /**
                     * 设置COS INTELLIGENT TIERING storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intelligentCapacityUsed COS INTELLIGENT TIERING storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntelligentCapacityUsed(const uint64_t& _intelligentCapacityUsed);

                    /**
                     * 判断参数 IntelligentCapacityUsed 是否已赋值
                     * @return IntelligentCapacityUsed 是否已赋值
                     * 
                     */
                    bool IntelligentCapacityUsedHasBeenSet() const;

                private:

                    /**
                     * Capacity usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * COS STANDARD storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_standardCapacityUsed;
                    bool m_standardCapacityUsedHasBeenSet;

                    /**
                     * COS STANDARD_IA storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_degradeCapacityUsed;
                    bool m_degradeCapacityUsedHasBeenSet;

                    /**
                     * COS ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_archiveCapacityUsed;
                    bool m_archiveCapacityUsedHasBeenSet;

                    /**
                     * COS DEEP ARCHIVE storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_deepArchiveCapacityUsed;
                    bool m_deepArchiveCapacityUsedHasBeenSet;

                    /**
                     * COS INTELLIGENT TIERING storage usage in bytes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intelligentCapacityUsed;
                    bool m_intelligentCapacityUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_SUMMARY_H_

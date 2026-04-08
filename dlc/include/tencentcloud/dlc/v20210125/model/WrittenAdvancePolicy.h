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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WRITTENADVANCEPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WRITTENADVANCEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SortOrder.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 
                */
                class WrittenAdvancePolicy : public AbstractModel
                {
                public:
                    WrittenAdvancePolicy();
                    ~WrittenAdvancePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return CompactEnable 
                     * 
                     */
                    std::string GetCompactEnable() const;

                    /**
                     * 设置
                     * @param _compactEnable 
                     * 
                     */
                    void SetCompactEnable(const std::string& _compactEnable);

                    /**
                     * 判断参数 CompactEnable 是否已赋值
                     * @return CompactEnable 是否已赋值
                     * 
                     */
                    bool CompactEnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeleteEnable 
                     * 
                     */
                    std::string GetDeleteEnable() const;

                    /**
                     * 设置
                     * @param _deleteEnable 
                     * 
                     */
                    void SetDeleteEnable(const std::string& _deleteEnable);

                    /**
                     * 判断参数 DeleteEnable 是否已赋值
                     * @return DeleteEnable 是否已赋值
                     * 
                     */
                    bool DeleteEnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return MinInputFiles 
                     * 
                     */
                    int64_t GetMinInputFiles() const;

                    /**
                     * 设置
                     * @param _minInputFiles 
                     * 
                     */
                    void SetMinInputFiles(const int64_t& _minInputFiles);

                    /**
                     * 判断参数 MinInputFiles 是否已赋值
                     * @return MinInputFiles 是否已赋值
                     * 
                     */
                    bool MinInputFilesHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetFileSizeBytes 
                     * 
                     */
                    int64_t GetTargetFileSizeBytes() const;

                    /**
                     * 设置
                     * @param _targetFileSizeBytes 
                     * 
                     */
                    void SetTargetFileSizeBytes(const int64_t& _targetFileSizeBytes);

                    /**
                     * 判断参数 TargetFileSizeBytes 是否已赋值
                     * @return TargetFileSizeBytes 是否已赋值
                     * 
                     */
                    bool TargetFileSizeBytesHasBeenSet() const;

                    /**
                     * 获取
                     * @return RetainLast 
                     * 
                     */
                    int64_t GetRetainLast() const;

                    /**
                     * 设置
                     * @param _retainLast 
                     * 
                     */
                    void SetRetainLast(const int64_t& _retainLast);

                    /**
                     * 判断参数 RetainLast 是否已赋值
                     * @return RetainLast 是否已赋值
                     * 
                     */
                    bool RetainLastHasBeenSet() const;

                    /**
                     * 获取
                     * @return BeforeDays 
                     * 
                     */
                    int64_t GetBeforeDays() const;

                    /**
                     * 设置
                     * @param _beforeDays 
                     * 
                     */
                    void SetBeforeDays(const int64_t& _beforeDays);

                    /**
                     * 判断参数 BeforeDays 是否已赋值
                     * @return BeforeDays 是否已赋值
                     * 
                     */
                    bool BeforeDaysHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExpiredSnapshotsIntervalMin 
                     * 
                     */
                    int64_t GetExpiredSnapshotsIntervalMin() const;

                    /**
                     * 设置
                     * @param _expiredSnapshotsIntervalMin 
                     * 
                     */
                    void SetExpiredSnapshotsIntervalMin(const int64_t& _expiredSnapshotsIntervalMin);

                    /**
                     * 判断参数 ExpiredSnapshotsIntervalMin 是否已赋值
                     * @return ExpiredSnapshotsIntervalMin 是否已赋值
                     * 
                     */
                    bool ExpiredSnapshotsIntervalMinHasBeenSet() const;

                    /**
                     * 获取
                     * @return RemoveOrphanIntervalMin 
                     * 
                     */
                    int64_t GetRemoveOrphanIntervalMin() const;

                    /**
                     * 设置
                     * @param _removeOrphanIntervalMin 
                     * 
                     */
                    void SetRemoveOrphanIntervalMin(const int64_t& _removeOrphanIntervalMin);

                    /**
                     * 判断参数 RemoveOrphanIntervalMin 是否已赋值
                     * @return RemoveOrphanIntervalMin 是否已赋值
                     * 
                     */
                    bool RemoveOrphanIntervalMinHasBeenSet() const;

                    /**
                     * 获取
                     * @return CowCompactEnable 
                     * 
                     */
                    std::string GetCowCompactEnable() const;

                    /**
                     * 设置
                     * @param _cowCompactEnable 
                     * 
                     */
                    void SetCowCompactEnable(const std::string& _cowCompactEnable);

                    /**
                     * 判断参数 CowCompactEnable 是否已赋值
                     * @return CowCompactEnable 是否已赋值
                     * 
                     */
                    bool CowCompactEnableHasBeenSet() const;

                    /**
                     * 获取
                     * @return CompactStrategy 
                     * 
                     */
                    std::string GetCompactStrategy() const;

                    /**
                     * 设置
                     * @param _compactStrategy 
                     * 
                     */
                    void SetCompactStrategy(const std::string& _compactStrategy);

                    /**
                     * 判断参数 CompactStrategy 是否已赋值
                     * @return CompactStrategy 是否已赋值
                     * 
                     */
                    bool CompactStrategyHasBeenSet() const;

                    /**
                     * 获取
                     * @return SortOrders 
                     * 
                     */
                    std::vector<SortOrder> GetSortOrders() const;

                    /**
                     * 设置
                     * @param _sortOrders 
                     * 
                     */
                    void SetSortOrders(const std::vector<SortOrder>& _sortOrders);

                    /**
                     * 判断参数 SortOrders 是否已赋值
                     * @return SortOrders 是否已赋值
                     * 
                     */
                    bool SortOrdersHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_compactEnable;
                    bool m_compactEnableHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_deleteEnable;
                    bool m_deleteEnableHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_minInputFiles;
                    bool m_minInputFilesHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_targetFileSizeBytes;
                    bool m_targetFileSizeBytesHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_retainLast;
                    bool m_retainLastHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_beforeDays;
                    bool m_beforeDaysHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_expiredSnapshotsIntervalMin;
                    bool m_expiredSnapshotsIntervalMinHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_removeOrphanIntervalMin;
                    bool m_removeOrphanIntervalMinHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_cowCompactEnable;
                    bool m_cowCompactEnableHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_compactStrategy;
                    bool m_compactStrategyHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SortOrder> m_sortOrders;
                    bool m_sortOrdersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WRITTENADVANCEPOLICY_H_

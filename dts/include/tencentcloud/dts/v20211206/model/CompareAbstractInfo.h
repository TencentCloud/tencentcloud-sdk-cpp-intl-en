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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareOptions.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Summary information of data consistency check
                */
                class CompareAbstractInfo : public AbstractModel
                {
                public:
                    CompareAbstractInfo();
                    ~CompareAbstractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration parameters of the check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Options Configuration parameters of the check task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareOptions GetOptions() const;

                    /**
                     * 设置Configuration parameters of the check task
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Options Configuration parameters of the check task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOptions(const CompareOptions& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取Consistency check objects
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Objects Consistency check objects
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareObject GetObjects() const;

                    /**
                     * 设置Consistency check objects
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Objects Consistency check objects
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetObjects(const CompareObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Comparison conclusion. Valid values: `same`, `different`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Conclusion Comparison conclusion. Valid values: `same`, `different`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetConclusion() const;

                    /**
                     * 设置Comparison conclusion. Valid values: `same`, `different`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Conclusion Comparison conclusion. Valid values: `same`, `different`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConclusion(const std::string& _conclusion);

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. Valid values: `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Status Task status. Valid values: `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Total number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalTables Total number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalTables() const;

                    /**
                     * 设置Total number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TotalTables Total number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalTables(const uint64_t& _totalTables);

                    /**
                     * 判断参数 TotalTables 是否已赋值
                     * @return TotalTables 是否已赋值
                     */
                    bool TotalTablesHasBeenSet() const;

                    /**
                     * 获取Number of checked tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckedTables Number of checked tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCheckedTables() const;

                    /**
                     * 设置Number of checked tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CheckedTables Number of checked tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCheckedTables(const uint64_t& _checkedTables);

                    /**
                     * 判断参数 CheckedTables 是否已赋值
                     * @return CheckedTables 是否已赋值
                     */
                    bool CheckedTablesHasBeenSet() const;

                    /**
                     * 获取Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DifferentTables Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDifferentTables() const;

                    /**
                     * 设置Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DifferentTables Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDifferentTables(const uint64_t& _differentTables);

                    /**
                     * 判断参数 DifferentTables 是否已赋值
                     * @return DifferentTables 是否已赋值
                     */
                    bool DifferentTablesHasBeenSet() const;

                    /**
                     * 获取Number of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SkippedTables Number of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSkippedTables() const;

                    /**
                     * 设置Number of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SkippedTables Number of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSkippedTables(const uint64_t& _skippedTables);

                    /**
                     * 判断参数 SkippedTables 是否已赋值
                     * @return SkippedTables 是否已赋值
                     */
                    bool SkippedTablesHasBeenSet() const;

                    /**
                     * 获取The estimated number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NearlyTableCount The estimated number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetNearlyTableCount() const;

                    /**
                     * 设置The estimated number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NearlyTableCount The estimated number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNearlyTableCount(const uint64_t& _nearlyTableCount);

                    /**
                     * 判断参数 NearlyTableCount 是否已赋值
                     * @return NearlyTableCount 是否已赋值
                     */
                    bool NearlyTableCountHasBeenSet() const;

                    /**
                     * 获取Number of inconsistent data rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DifferentRows Number of inconsistent data rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDifferentRows() const;

                    /**
                     * 设置Number of inconsistent data rows
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DifferentRows Number of inconsistent data rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDifferentRows(const uint64_t& _differentRows);

                    /**
                     * 判断参数 DifferentRows 是否已赋值
                     * @return DifferentRows 是否已赋值
                     */
                    bool DifferentRowsHasBeenSet() const;

                    /**
                     * 获取Source database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcSampleRows Source database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSrcSampleRows() const;

                    /**
                     * 设置Source database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SrcSampleRows Source database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSrcSampleRows(const uint64_t& _srcSampleRows);

                    /**
                     * 判断参数 SrcSampleRows 是否已赋值
                     * @return SrcSampleRows 是否已赋值
                     */
                    bool SrcSampleRowsHasBeenSet() const;

                    /**
                     * 获取Target database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstSampleRows Target database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDstSampleRows() const;

                    /**
                     * 设置Target database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DstSampleRows Target database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDstSampleRows(const uint64_t& _dstSampleRows);

                    /**
                     * 判断参数 DstSampleRows 是否已赋值
                     * @return DstSampleRows 是否已赋值
                     */
                    bool DstSampleRowsHasBeenSet() const;

                    /**
                     * 获取Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartedAt Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param StartedAt Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinishedAt End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FinishedAt End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     */
                    bool FinishedAtHasBeenSet() const;

                private:

                    /**
                     * Configuration parameters of the check task
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareOptions m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * Consistency check objects
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Comparison conclusion. Valid values: `same`, `different`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * Task status. Valid values: `success`, `failed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Total number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalTables;
                    bool m_totalTablesHasBeenSet;

                    /**
                     * Number of checked tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_checkedTables;
                    bool m_checkedTablesHasBeenSet;

                    /**
                     * Number of inconsistent tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_differentTables;
                    bool m_differentTablesHasBeenSet;

                    /**
                     * Number of skipped tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_skippedTables;
                    bool m_skippedTablesHasBeenSet;

                    /**
                     * The estimated number of tables
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_nearlyTableCount;
                    bool m_nearlyTableCountHasBeenSet;

                    /**
                     * Number of inconsistent data rows
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_differentRows;
                    bool m_differentRowsHasBeenSet;

                    /**
                     * Source database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_srcSampleRows;
                    bool m_srcSampleRowsHasBeenSet;

                    /**
                     * Target database row count, which takes effect only when the comparison type is **Row count comparison**.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_dstSampleRows;
                    bool m_dstSampleRowsHasBeenSet;

                    /**
                     * Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREABSTRACTINFO_H_

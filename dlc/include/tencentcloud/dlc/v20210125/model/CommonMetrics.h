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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Common task metrics
                */
                class CommonMetrics : public AbstractModel
                {
                public:
                    CommonMetrics();
                    ~CommonMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task creation time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTaskTime The task creation time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCreateTaskTime() const;

                    /**
                     * 设置The task creation time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTaskTime The task creation time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTaskTime(const double& _createTaskTime);

                    /**
                     * 判断参数 CreateTaskTime 是否已赋值
                     * @return CreateTaskTime 是否已赋值
                     * 
                     */
                    bool CreateTaskTimeHasBeenSet() const;

                    /**
                     * 获取The processing time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessTime The processing time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetProcessTime() const;

                    /**
                     * 设置The processing time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processTime The processing time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessTime(const double& _processTime);

                    /**
                     * 判断参数 ProcessTime 是否已赋值
                     * @return ProcessTime 是否已赋值
                     * 
                     */
                    bool ProcessTimeHasBeenSet() const;

                    /**
                     * 获取The queue time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueTime The queue time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetQueueTime() const;

                    /**
                     * 设置The queue time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueTime The queue time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueTime(const double& _queueTime);

                    /**
                     * 判断参数 QueueTime 是否已赋值
                     * @return QueueTime 是否已赋值
                     * 
                     */
                    bool QueueTimeHasBeenSet() const;

                    /**
                     * 获取The execution duration in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionTime The execution duration in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetExecutionTime() const;

                    /**
                     * 设置The execution duration in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionTime The execution duration in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionTime(const double& _executionTime);

                    /**
                     * 判断参数 ExecutionTime 是否已赋值
                     * @return ExecutionTime 是否已赋值
                     * 
                     */
                    bool ExecutionTimeHasBeenSet() const;

                    /**
                     * 获取Whether the result cache is hit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsResultCacheHit Whether the result cache is hit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsResultCacheHit() const;

                    /**
                     * 设置Whether the result cache is hit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isResultCacheHit Whether the result cache is hit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsResultCacheHit(const bool& _isResultCacheHit);

                    /**
                     * 判断参数 IsResultCacheHit 是否已赋值
                     * @return IsResultCacheHit 是否已赋值
                     * 
                     */
                    bool IsResultCacheHitHasBeenSet() const;

                    /**
                     * 获取The volume of matched materialized views, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MatchedMVBytes The volume of matched materialized views, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMatchedMVBytes() const;

                    /**
                     * 设置The volume of matched materialized views, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _matchedMVBytes The volume of matched materialized views, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMatchedMVBytes(const int64_t& _matchedMVBytes);

                    /**
                     * 判断参数 MatchedMVBytes 是否已赋值
                     * @return MatchedMVBytes 是否已赋值
                     * 
                     */
                    bool MatchedMVBytesHasBeenSet() const;

                    /**
                     * 获取The list of matched materialized views.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MatchedMVs The list of matched materialized views.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMatchedMVs() const;

                    /**
                     * 设置The list of matched materialized views.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _matchedMVs The list of matched materialized views.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMatchedMVs(const std::string& _matchedMVs);

                    /**
                     * 判断参数 MatchedMVs 是否已赋值
                     * @return MatchedMVs 是否已赋值
                     * 
                     */
                    bool MatchedMVsHasBeenSet() const;

                    /**
                     * 获取The result data in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AffectedBytes The result data in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAffectedBytes() const;

                    /**
                     * 设置The result data in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _affectedBytes The result data in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAffectedBytes(const std::string& _affectedBytes);

                    /**
                     * 判断参数 AffectedBytes 是否已赋值
                     * @return AffectedBytes 是否已赋值
                     * 
                     */
                    bool AffectedBytesHasBeenSet() const;

                    /**
                     * 获取	The number of rows in the result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AffectedRows 	The number of rows in the result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAffectedRows() const;

                    /**
                     * 设置	The number of rows in the result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _affectedRows 	The number of rows in the result.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAffectedRows(const int64_t& _affectedRows);

                    /**
                     * 判断参数 AffectedRows 是否已赋值
                     * @return AffectedRows 是否已赋值
                     * 
                     */
                    bool AffectedRowsHasBeenSet() const;

                    /**
                     * 获取The volume of the data scanned, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessedBytes The volume of the data scanned, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProcessedBytes() const;

                    /**
                     * 设置The volume of the data scanned, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processedBytes The volume of the data scanned, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessedBytes(const int64_t& _processedBytes);

                    /**
                     * 判断参数 ProcessedBytes 是否已赋值
                     * @return ProcessedBytes 是否已赋值
                     * 
                     */
                    bool ProcessedBytesHasBeenSet() const;

                    /**
                     * 获取	The number of scanned rows.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessedRows 	The number of scanned rows.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProcessedRows() const;

                    /**
                     * 设置	The number of scanned rows.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _processedRows 	The number of scanned rows.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProcessedRows(const int64_t& _processedRows);

                    /**
                     * 判断参数 ProcessedRows 是否已赋值
                     * @return ProcessedRows 是否已赋值
                     * 
                     */
                    bool ProcessedRowsHasBeenSet() const;

                private:

                    /**
                     * The task creation time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_createTaskTime;
                    bool m_createTaskTimeHasBeenSet;

                    /**
                     * The processing time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_processTime;
                    bool m_processTimeHasBeenSet;

                    /**
                     * The queue time in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_queueTime;
                    bool m_queueTimeHasBeenSet;

                    /**
                     * The execution duration in ms.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * Whether the result cache is hit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isResultCacheHit;
                    bool m_isResultCacheHitHasBeenSet;

                    /**
                     * The volume of matched materialized views, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_matchedMVBytes;
                    bool m_matchedMVBytesHasBeenSet;

                    /**
                     * The list of matched materialized views.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_matchedMVs;
                    bool m_matchedMVsHasBeenSet;

                    /**
                     * The result data in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_affectedBytes;
                    bool m_affectedBytesHasBeenSet;

                    /**
                     * 	The number of rows in the result.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_affectedRows;
                    bool m_affectedRowsHasBeenSet;

                    /**
                     * The volume of the data scanned, in bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_processedBytes;
                    bool m_processedBytesHasBeenSet;

                    /**
                     * 	The number of scanned rows.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_processedRows;
                    bool m_processedRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_

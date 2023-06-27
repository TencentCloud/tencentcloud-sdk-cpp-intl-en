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
                * 
                */
                class CommonMetrics : public AbstractModel
                {
                public:
                    CommonMetrics();
                    ~CommonMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return CreateTaskTime 
                     * 
                     */
                    double GetCreateTaskTime() const;

                    /**
                     * 设置
                     * @param _createTaskTime 
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
                     * 获取
                     * @return ProcessTime 
                     * 
                     */
                    double GetProcessTime() const;

                    /**
                     * 设置
                     * @param _processTime 
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
                     * 获取
                     * @return QueueTime 
                     * 
                     */
                    double GetQueueTime() const;

                    /**
                     * 设置
                     * @param _queueTime 
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
                     * 获取
                     * @return ExecutionTime 
                     * 
                     */
                    double GetExecutionTime() const;

                    /**
                     * 设置
                     * @param _executionTime 
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
                     * 获取
                     * @return IsResultCacheHit 
                     * 
                     */
                    bool GetIsResultCacheHit() const;

                    /**
                     * 设置
                     * @param _isResultCacheHit 
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
                     * 获取
                     * @return MatchedMVBytes 
                     * 
                     */
                    int64_t GetMatchedMVBytes() const;

                    /**
                     * 设置
                     * @param _matchedMVBytes 
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
                     * 获取
                     * @return MatchedMVs 
                     * 
                     */
                    std::string GetMatchedMVs() const;

                    /**
                     * 设置
                     * @param _matchedMVs 
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
                     * 获取
                     * @return AffectedBytes 
                     * 
                     */
                    std::string GetAffectedBytes() const;

                    /**
                     * 设置
                     * @param _affectedBytes 
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
                     * 获取
                     * @return AffectedRows 
                     * 
                     */
                    int64_t GetAffectedRows() const;

                    /**
                     * 设置
                     * @param _affectedRows 
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
                     * 获取
                     * @return ProcessedBytes 
                     * 
                     */
                    int64_t GetProcessedBytes() const;

                    /**
                     * 设置
                     * @param _processedBytes 
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
                     * 获取
                     * @return ProcessedRows 
                     * 
                     */
                    int64_t GetProcessedRows() const;

                    /**
                     * 设置
                     * @param _processedRows 
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
                     * 
                     */
                    double m_createTaskTime;
                    bool m_createTaskTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_processTime;
                    bool m_processTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_queueTime;
                    bool m_queueTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_executionTime;
                    bool m_executionTimeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isResultCacheHit;
                    bool m_isResultCacheHitHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_matchedMVBytes;
                    bool m_matchedMVBytesHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_matchedMVs;
                    bool m_matchedMVsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_affectedBytes;
                    bool m_affectedBytesHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_affectedRows;
                    bool m_affectedRowsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_processedBytes;
                    bool m_processedBytesHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_processedRows;
                    bool m_processedRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COMMONMETRICS_H_

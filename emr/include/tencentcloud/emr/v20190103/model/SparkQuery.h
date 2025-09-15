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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SPARKQUERY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SPARKQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Spark query details.
                */
                class SparkQuery : public AbstractModel
                {
                public:
                    SparkQuery();
                    ~SparkQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Execution statement.
                     * @return Statement Execution statement.
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置Execution statement.
                     * @param _statement Execution statement.
                     * 
                     */
                    void SetStatement(const std::string& _statement);

                    /**
                     * 判断参数 Statement 是否已赋值
                     * @return Statement 是否已赋值
                     * 
                     */
                    bool StatementHasBeenSet() const;

                    /**
                     * 获取Execution duration (ms).
                     * @return Duration Execution duration (ms).
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Execution duration (ms).
                     * @param _duration Execution duration (ms).
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Execution status.
                     * @return Status Execution status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Execution status.
                     * @param _status Execution status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Query ID.
                     * @return Id Query ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Query ID.
                     * @param _id Query ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Number of scanned partitions.
                     * @return ScanPartitionNum Number of scanned partitions.
                     * 
                     */
                    int64_t GetScanPartitionNum() const;

                    /**
                     * 设置Number of scanned partitions.
                     * @param _scanPartitionNum Number of scanned partitions.
                     * 
                     */
                    void SetScanPartitionNum(const int64_t& _scanPartitionNum);

                    /**
                     * 判断参数 ScanPartitionNum 是否已赋值
                     * @return ScanPartitionNum 是否已赋值
                     * 
                     */
                    bool ScanPartitionNumHasBeenSet() const;

                    /**
                     * 获取Total number of scanned rows.
                     * @return ScanRowNum Total number of scanned rows.
                     * 
                     */
                    int64_t GetScanRowNum() const;

                    /**
                     * 设置Total number of scanned rows.
                     * @param _scanRowNum Total number of scanned rows.
                     * 
                     */
                    void SetScanRowNum(const int64_t& _scanRowNum);

                    /**
                     * 判断参数 ScanRowNum 是否已赋值
                     * @return ScanRowNum 是否已赋值
                     * 
                     */
                    bool ScanRowNumHasBeenSet() const;

                    /**
                     * 获取Total number of scanned files.
                     * @return ScanFileNum Total number of scanned files.
                     * 
                     */
                    int64_t GetScanFileNum() const;

                    /**
                     * 设置Total number of scanned files.
                     * @param _scanFileNum Total number of scanned files.
                     * 
                     */
                    void SetScanFileNum(const int64_t& _scanFileNum);

                    /**
                     * 判断参数 ScanFileNum 是否已赋值
                     * @return ScanFileNum 是否已赋值
                     * 
                     */
                    bool ScanFileNumHasBeenSet() const;

                    /**
                     * 获取Total data volume scanned by query (bytes).
                     * @return ScanTotalData Total data volume scanned by query (bytes).
                     * 
                     */
                    int64_t GetScanTotalData() const;

                    /**
                     * 设置Total data volume scanned by query (bytes).
                     * @param _scanTotalData Total data volume scanned by query (bytes).
                     * 
                     */
                    void SetScanTotalData(const int64_t& _scanTotalData);

                    /**
                     * 判断参数 ScanTotalData 是否已赋值
                     * @return ScanTotalData 是否已赋值
                     * 
                     */
                    bool ScanTotalDataHasBeenSet() const;

                    /**
                     * 获取Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetApplicationId() const;

                    /**
                     * 设置Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationId(const std::vector<std::string>& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Total number of output rows.
                     * @return OutputRowNum Total number of output rows.
                     * 
                     */
                    int64_t GetOutputRowNum() const;

                    /**
                     * 设置Total number of output rows.
                     * @param _outputRowNum Total number of output rows.
                     * 
                     */
                    void SetOutputRowNum(const int64_t& _outputRowNum);

                    /**
                     * 判断参数 OutputRowNum 是否已赋值
                     * @return OutputRowNum 是否已赋值
                     * 
                     */
                    bool OutputRowNumHasBeenSet() const;

                    /**
                     * 获取Total number of output files.
                     * @return OutputFileNum Total number of output files.
                     * 
                     */
                    int64_t GetOutputFileNum() const;

                    /**
                     * 设置Total number of output files.
                     * @param _outputFileNum Total number of output files.
                     * 
                     */
                    void SetOutputFileNum(const int64_t& _outputFileNum);

                    /**
                     * 判断参数 OutputFileNum 是否已赋值
                     * @return OutputFileNum 是否已赋值
                     * 
                     */
                    bool OutputFileNumHasBeenSet() const;

                    /**
                     * 获取Number of output partitions.
                     * @return OutputPartitionNum Number of output partitions.
                     * 
                     */
                    int64_t GetOutputPartitionNum() const;

                    /**
                     * 设置Number of output partitions.
                     * @param _outputPartitionNum Number of output partitions.
                     * 
                     */
                    void SetOutputPartitionNum(const int64_t& _outputPartitionNum);

                    /**
                     * 判断参数 OutputPartitionNum 是否已赋值
                     * @return OutputPartitionNum 是否已赋值
                     * 
                     */
                    bool OutputPartitionNumHasBeenSet() const;

                    /**
                     * 获取Total output data volume (bytes).
                     * @return OutputTotalData Total output data volume (bytes).
                     * 
                     */
                    int64_t GetOutputTotalData() const;

                    /**
                     * 设置Total output data volume (bytes).
                     * @param _outputTotalData Total output data volume (bytes).
                     * 
                     */
                    void SetOutputTotalData(const int64_t& _outputTotalData);

                    /**
                     * 判断参数 OutputTotalData 是否已赋值
                     * @return OutputTotalData 是否已赋值
                     * 
                     */
                    bool OutputTotalDataHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return BeginTime Start time.
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置Start time.
                     * @param _beginTime Start time.
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Execution statement.
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * Execution duration (ms).
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Execution status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Query ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Number of scanned partitions.
                     */
                    int64_t m_scanPartitionNum;
                    bool m_scanPartitionNumHasBeenSet;

                    /**
                     * Total number of scanned rows.
                     */
                    int64_t m_scanRowNum;
                    bool m_scanRowNumHasBeenSet;

                    /**
                     * Total number of scanned files.
                     */
                    int64_t m_scanFileNum;
                    bool m_scanFileNumHasBeenSet;

                    /**
                     * Total data volume scanned by query (bytes).
                     */
                    int64_t m_scanTotalData;
                    bool m_scanTotalDataHasBeenSet;

                    /**
                     * Application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Total number of output rows.
                     */
                    int64_t m_outputRowNum;
                    bool m_outputRowNumHasBeenSet;

                    /**
                     * Total number of output files.
                     */
                    int64_t m_outputFileNum;
                    bool m_outputFileNumHasBeenSet;

                    /**
                     * Number of output partitions.
                     */
                    int64_t m_outputPartitionNum;
                    bool m_outputPartitionNumHasBeenSet;

                    /**
                     * Total output data volume (bytes).
                     */
                    int64_t m_outputTotalData;
                    bool m_outputTotalDataHasBeenSet;

                    /**
                     * Start time.
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SPARKQUERY_H_

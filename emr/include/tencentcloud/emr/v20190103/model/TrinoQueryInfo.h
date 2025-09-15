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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TRINOQUERYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TRINOQUERYINFO_H_

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
                * Trino query information.
                */
                class TrinoQueryInfo : public AbstractModel
                {
                public:
                    TrinoQueryInfo();
                    ~TrinoQueryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取catalog
                     * @return Catalog catalog
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog
                     * @param _catalog catalog
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取IP address used for submission.
                     * @return ClientIpAddr IP address used for submission.
                     * 
                     */
                    std::string GetClientIpAddr() const;

                    /**
                     * 设置IP address used for submission.
                     * @param _clientIpAddr IP address used for submission.
                     * 
                     */
                    void SetClientIpAddr(const std::string& _clientIpAddr);

                    /**
                     * 判断参数 ClientIpAddr 是否已赋值
                     * @return ClientIpAddr 是否已赋值
                     * 
                     */
                    bool ClientIpAddrHasBeenSet() const;

                    /**
                     * 获取Number of segments.
                     * @return CompletedSplits Number of segments.
                     * 
                     */
                    std::string GetCompletedSplits() const;

                    /**
                     * 设置Number of segments.
                     * @param _completedSplits Number of segments.
                     * 
                     */
                    void SetCompletedSplits(const std::string& _completedSplits);

                    /**
                     * 判断参数 CompletedSplits 是否已赋值
                     * @return CompletedSplits 是否已赋值
                     * 
                     */
                    bool CompletedSplitsHasBeenSet() const;

                    /**
                     * 获取CPU time.
                     * @return CpuTime CPU time.
                     * 
                     */
                    int64_t GetCpuTime() const;

                    /**
                     * 设置CPU time.
                     * @param _cpuTime CPU time.
                     * 
                     */
                    void SetCpuTime(const int64_t& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取Cumulative memory.
                     * @return CumulativeMemory Cumulative memory.
                     * 
                     */
                    int64_t GetCumulativeMemory() const;

                    /**
                     * 设置Cumulative memory.
                     * @param _cumulativeMemory Cumulative memory.
                     * 
                     */
                    void SetCumulativeMemory(const int64_t& _cumulativeMemory);

                    /**
                     * 判断参数 CumulativeMemory 是否已赋值
                     * @return CumulativeMemory 是否已赋值
                     * 
                     */
                    bool CumulativeMemoryHasBeenSet() const;

                    /**
                     * 获取Execution duration.
                     * @return DurationMillis Execution duration.
                     * 
                     */
                    int64_t GetDurationMillis() const;

                    /**
                     * 设置Execution duration.
                     * @param _durationMillis Execution duration.
                     * 
                     */
                    void SetDurationMillis(const int64_t& _durationMillis);

                    /**
                     * 判断参数 DurationMillis 是否已赋值
                     * @return DurationMillis 是否已赋值
                     * 
                     */
                    bool DurationMillisHasBeenSet() const;

                    /**
                     * 获取End time (seconds).
                     * @return EndTime End time (seconds).
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time (seconds).
                     * @param _endTime End time (seconds).
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 获取Internal transmission volume.
                     * @return InternalNetworkBytes Internal transmission volume.
                     * 
                     */
                    int64_t GetInternalNetworkBytes() const;

                    /**
                     * 设置Internal transmission volume.
                     * @param _internalNetworkBytes Internal transmission volume.
                     * 
                     */
                    void SetInternalNetworkBytes(const int64_t& _internalNetworkBytes);

                    /**
                     * 判断参数 InternalNetworkBytes 是否已赋值
                     * @return InternalNetworkBytes 是否已赋值
                     * 
                     */
                    bool InternalNetworkBytesHasBeenSet() const;

                    /**
                     * 获取Number of output bytes.
                     * @return OutputBytes Number of output bytes.
                     * 
                     */
                    int64_t GetOutputBytes() const;

                    /**
                     * 设置Number of output bytes.
                     * @param _outputBytes Number of output bytes.
                     * 
                     */
                    void SetOutputBytes(const int64_t& _outputBytes);

                    /**
                     * 判断参数 OutputBytes 是否已赋值
                     * @return OutputBytes 是否已赋值
                     * 
                     */
                    bool OutputBytesHasBeenSet() const;

                    /**
                     * 获取Peak memory.
                     * @return PeakUserMemoryBytes Peak memory.
                     * 
                     */
                    int64_t GetPeakUserMemoryBytes() const;

                    /**
                     * 设置Peak memory.
                     * @param _peakUserMemoryBytes Peak memory.
                     * 
                     */
                    void SetPeakUserMemoryBytes(const int64_t& _peakUserMemoryBytes);

                    /**
                     * 判断参数 PeakUserMemoryBytes 是否已赋值
                     * @return PeakUserMemoryBytes 是否已赋值
                     * 
                     */
                    bool PeakUserMemoryBytesHasBeenSet() const;

                    /**
                     * 获取Physical input volume.
                     * @return PhysicalInputBytes Physical input volume.
                     * 
                     */
                    int64_t GetPhysicalInputBytes() const;

                    /**
                     * 设置Physical input volume.
                     * @param _physicalInputBytes Physical input volume.
                     * 
                     */
                    void SetPhysicalInputBytes(const int64_t& _physicalInputBytes);

                    /**
                     * 判断参数 PhysicalInputBytes 是否已赋值
                     * @return PhysicalInputBytes 是否已赋值
                     * 
                     */
                    bool PhysicalInputBytesHasBeenSet() const;

                    /**
                     * 获取Processed input volume.
                     * @return ProcessedInputBytes Processed input volume.
                     * 
                     */
                    int64_t GetProcessedInputBytes() const;

                    /**
                     * 设置Processed input volume.
                     * @param _processedInputBytes Processed input volume.
                     * 
                     */
                    void SetProcessedInputBytes(const int64_t& _processedInputBytes);

                    /**
                     * 判断参数 ProcessedInputBytes 是否已赋值
                     * @return ProcessedInputBytes 是否已赋值
                     * 
                     */
                    bool ProcessedInputBytesHasBeenSet() const;

                    /**
                     * 获取Compilation duration.
                     * @return SqlCompileTime Compilation duration.
                     * 
                     */
                    int64_t GetSqlCompileTime() const;

                    /**
                     * 设置Compilation duration.
                     * @param _sqlCompileTime Compilation duration.
                     * 
                     */
                    void SetSqlCompileTime(const int64_t& _sqlCompileTime);

                    /**
                     * 判断参数 SqlCompileTime 是否已赋值
                     * @return SqlCompileTime 是否已赋值
                     * 
                     */
                    bool SqlCompileTimeHasBeenSet() const;

                    /**
                     * 获取Start time (seconds).
                     * @return StartTime Start time (seconds).
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time (seconds).
                     * @param _startTime Start time (seconds).
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Execution status.
                     * @return State Execution status.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Execution status.
                     * @param _state Execution status.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

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
                     * 获取User who submits requests.
                     * @return User User who submits requests.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User who submits requests.
                     * @param _user User who submits requests.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Number of bytes written.
                     * @return WrittenBytes Number of bytes written.
                     * 
                     */
                    int64_t GetWrittenBytes() const;

                    /**
                     * 设置Number of bytes written.
                     * @param _writtenBytes Number of bytes written.
                     * 
                     */
                    void SetWrittenBytes(const int64_t& _writtenBytes);

                    /**
                     * 判断参数 WrittenBytes 是否已赋值
                     * @return WrittenBytes 是否已赋值
                     * 
                     */
                    bool WrittenBytesHasBeenSet() const;

                private:

                    /**
                     * catalog
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * IP address used for submission.
                     */
                    std::string m_clientIpAddr;
                    bool m_clientIpAddrHasBeenSet;

                    /**
                     * Number of segments.
                     */
                    std::string m_completedSplits;
                    bool m_completedSplitsHasBeenSet;

                    /**
                     * CPU time.
                     */
                    int64_t m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * Cumulative memory.
                     */
                    int64_t m_cumulativeMemory;
                    bool m_cumulativeMemoryHasBeenSet;

                    /**
                     * Execution duration.
                     */
                    int64_t m_durationMillis;
                    bool m_durationMillisHasBeenSet;

                    /**
                     * End time (seconds).
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Query ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Internal transmission volume.
                     */
                    int64_t m_internalNetworkBytes;
                    bool m_internalNetworkBytesHasBeenSet;

                    /**
                     * Number of output bytes.
                     */
                    int64_t m_outputBytes;
                    bool m_outputBytesHasBeenSet;

                    /**
                     * Peak memory.
                     */
                    int64_t m_peakUserMemoryBytes;
                    bool m_peakUserMemoryBytesHasBeenSet;

                    /**
                     * Physical input volume.
                     */
                    int64_t m_physicalInputBytes;
                    bool m_physicalInputBytesHasBeenSet;

                    /**
                     * Processed input volume.
                     */
                    int64_t m_processedInputBytes;
                    bool m_processedInputBytesHasBeenSet;

                    /**
                     * Compilation duration.
                     */
                    int64_t m_sqlCompileTime;
                    bool m_sqlCompileTimeHasBeenSet;

                    /**
                     * Start time (seconds).
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Execution status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Execution statement.
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * User who submits requests.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Number of bytes written.
                     */
                    int64_t m_writtenBytes;
                    bool m_writtenBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TRINOQUERYINFO_H_

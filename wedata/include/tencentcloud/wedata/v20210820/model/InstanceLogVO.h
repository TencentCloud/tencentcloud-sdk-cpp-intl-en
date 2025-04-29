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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance log content.
                */
                class InstanceLogVO : public AbstractModel
                {
                public:
                    InstanceLogVO();
                    ~InstanceLogVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique id of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceKey Unique id of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Unique id of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceKey Unique id of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取**Instance status**.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceState **Instance status**.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInstanceState() const;

                    /**
                     * 设置**Instance status**.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceState **Instance status**.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceState(const uint64_t& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Instance running trigger type.

-RERUN indicates data replenishment.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN means empty run for re-run.
-ADDITION_SKIP_RUN indicates data replenishment - empty run.
-PERIODIC_SKIP_RUN indicates an empty run in a periodic cycle.
-APERIODIC_SKIP_RUN indicates a non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunType Instance running trigger type.

-RERUN indicates data replenishment.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN means empty run for re-run.
-ADDITION_SKIP_RUN indicates data replenishment - empty run.
-PERIODIC_SKIP_RUN indicates an empty run in a periodic cycle.
-APERIODIC_SKIP_RUN indicates a non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置Instance running trigger type.

-RERUN indicates data replenishment.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN means empty run for re-run.
-ADDITION_SKIP_RUN indicates data replenishment - empty run.
-PERIODIC_SKIP_RUN indicates an empty run in a periodic cycle.
-APERIODIC_SKIP_RUN indicates a non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runType Instance running trigger type.

-RERUN indicates data replenishment.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN means empty run for re-run.
-ADDITION_SKIP_RUN indicates data replenishment - empty run.
-PERIODIC_SKIP_RUN indicates an empty run in a periodic cycle.
-APERIODIC_SKIP_RUN indicates a non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunType(const std::string& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取Start time of running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time of running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Indicates the operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Indicates the operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Indicates the operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Indicates the operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Run code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CodeInfo Run code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodeInfo() const;

                    /**
                     * 设置Run code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codeInfo Run code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodeInfo(const std::string& _codeInfo);

                    /**
                     * 判断参数 CodeInfo 是否已赋值
                     * @return CodeInfo 是否已赋值
                     * 
                     */
                    bool CodeInfoHasBeenSet() const;

                    /**
                     * 获取File size for running code.
Unit: KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CodeFileSize File size for running code.
Unit: KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodeFileSize() const;

                    /**
                     * 设置File size for running code.
Unit: KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codeFileSize File size for running code.
Unit: KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodeFileSize(const std::string& _codeFileSize);

                    /**
                     * 判断参数 CodeFileSize 是否已赋值
                     * @return CodeFileSize 是否已赋值
                     * 
                     */
                    bool CodeFileSizeHasBeenSet() const;

                    /**
                     * 获取Log node information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BrokerIp Log node information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Log node information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _brokerIp Log node information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取Log content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogInfo Log content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogInfo() const;

                    /**
                     * 设置Log content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logInfo Log content.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogInfo(const std::string& _logInfo);

                    /**
                     * 判断参数 LogInfo 是否已赋值
                     * @return LogInfo 是否已赋值
                     * 
                     */
                    bool LogInfoHasBeenSet() const;

                    /**
                     * 获取Log file size.
KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogFileSize Log file size.
KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogFileSize() const;

                    /**
                     * 设置Log file size.
KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logFileSize Log file size.
KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogFileSize(const std::string& _logFileSize);

                    /**
                     * 判断参数 LogFileSize 是否已赋值
                     * @return LogFileSize 是否已赋值
                     * 
                     */
                    bool LogFileSizeHasBeenSet() const;

                    /**
                     * 获取Row count of returned logs this time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LineCount Row count of returned logs this time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLineCount() const;

                    /**
                     * 设置Row count of returned logs this time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lineCount Row count of returned logs this time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLineCount(const uint64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Specifies that you can use the field value of ExtInfo in the returned information from the previous query for the second and subsequent queries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtInfo Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Specifies that you can use the field value of ExtInfo in the returned information from the previous query for the second and subsequent queries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Specifies that you can use the field value of ExtInfo in the returned information from the previous query for the second and subsequent queries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extInfo Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Specifies that you can use the field value of ExtInfo in the returned information from the previous query for the second and subsequent queries.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取Paging query for logs. indicates whether it is the last page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsEnd Paging query for logs. indicates whether it is the last page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置Paging query for logs. indicates whether it is the last page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isEnd Paging query for logs. indicates whether it is the last page.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsEnd(const bool& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * 
                     */
                    bool IsEndHasBeenSet() const;

                private:

                    /**
                     * Unique id of an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **Instance status**.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Instance running trigger type.

-RERUN indicates data replenishment.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN means empty run for re-run.
-ADDITION_SKIP_RUN indicates data replenishment - empty run.
-PERIODIC_SKIP_RUN indicates an empty run in a periodic cycle.
-APERIODIC_SKIP_RUN indicates a non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * Start time of running.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Indicates the operation completion time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Run code content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codeInfo;
                    bool m_codeInfoHasBeenSet;

                    /**
                     * File size for running code.
Unit: KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codeFileSize;
                    bool m_codeFileSizeHasBeenSet;

                    /**
                     * Log node information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Log content.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logInfo;
                    bool m_logInfoHasBeenSet;

                    /**
                     * Log file size.
KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logFileSize;
                    bool m_logFileSizeHasBeenSet;

                    /**
                     * Row count of returned logs this time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * Used when performing a paging query for logs. it has no specific business meaning.

Specifies that the value is null for the first query. 
Specifies that you can use the field value of ExtInfo in the returned information from the previous query for the second and subsequent queries.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * Paging query for logs. indicates whether it is the last page.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGVO_H_

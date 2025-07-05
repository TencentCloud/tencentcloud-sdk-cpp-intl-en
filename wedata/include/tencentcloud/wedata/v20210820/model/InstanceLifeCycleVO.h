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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeDetailDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Details of a scheduled instance.
                */
                class InstanceLifeCycleVO : public AbstractModel
                {
                public:
                    InstanceLifeCycleVO();
                    ~InstanceLifeCycleVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceKey Unique identifier of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Unique identifier of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceKey Unique identifier of the instance.
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
                     * 获取Instance status.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceState Instance status.

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
                     * 设置Instance status.

-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22] indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceState Instance status.

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
                     * 获取Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LifeRoundNum Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifeRoundNum Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取Instance running trigger type.

-RERUN indicates rerunning.
-ADDITION indicates data replenishment.
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

-RERUN indicates rerunning.
-ADDITION indicates data replenishment.
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

-RERUN indicates rerunning.
-ADDITION indicates data replenishment.
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

-RERUN indicates rerunning.
-ADDITION indicates data replenishment.
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
                     * 获取Number of retries after failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tries Number of retries after failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置Number of retries after failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tries Number of retries after failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取List of instance lifecycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LifeCycleDetailList List of instance lifecycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceLifeDetailDto> GetLifeCycleDetailList() const;

                    /**
                     * 设置List of instance lifecycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifeCycleDetailList List of instance lifecycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLifeCycleDetailList(const std::vector<InstanceLifeDetailDto>& _lifeCycleDetailList);

                    /**
                     * 判断参数 LifeCycleDetailList 是否已赋值
                     * @return LifeCycleDetailList 是否已赋值
                     * 
                     */
                    bool LifeCycleDetailListHasBeenSet() const;

                    /**
                     * 获取Instance code file.
The file content specifies the code used for running the execution instance this time. only some tasks support it.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CodeFileName Instance code file.
The file content specifies the code used for running the execution instance this time. only some tasks support it.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置Instance code file.
The file content specifies the code used for running the execution instance this time. only some tasks support it.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codeFileName Instance code file.
The file content specifies the code used for running the execution instance this time. only some tasks support it.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodeFileName(const std::string& _codeFileName);

                    /**
                     * 判断参数 CodeFileName 是否已赋值
                     * @return CodeFileName 是否已赋值
                     * 
                     */
                    bool CodeFileNameHasBeenSet() const;

                    /**
                     * 获取Dispatch execution ID.
The unified execution platform dispatches execution to the new version executor with a unique ID to identify a specific execution, while the existing old executors do not have this ID when dispatching execution.
If it is unknown whether the executor version supports this ID, contact tencent cloud's operations team.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionJobId Dispatch execution ID.
The unified execution platform dispatches execution to the new version executor with a unique ID to identify a specific execution, while the existing old executors do not have this ID when dispatching execution.
If it is unknown whether the executor version supports this ID, contact tencent cloud's operations team.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置Dispatch execution ID.
The unified execution platform dispatches execution to the new version executor with a unique ID to identify a specific execution, while the existing old executors do not have this ID when dispatching execution.
If it is unknown whether the executor version supports this ID, contact tencent cloud's operations team.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionJobId Dispatch execution ID.
The unified execution platform dispatches execution to the new version executor with a unique ID to identify a specific execution, while the existing old executors do not have this ID when dispatching execution.
If it is unknown whether the executor version supports this ID, contact tencent cloud's operations team.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取The execution node where the log resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BrokerIp The execution node where the log resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置The execution node where the log resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _brokerIp The execution node where the log resides.
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
                     * 获取Log file name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginFileName Log file name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置Log file name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originFileName Log file name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取Instance log type.

-run: indicates the state of functioning. 
-kill: terminates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogType Instance log type.

-run: indicates the state of functioning. 
-kill: terminates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Instance log type.

-run: indicates the state of functioning. 
-kill: terminates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logType Instance log type.

-run: indicates the state of functioning. 
-kill: terminates.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CostTime Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _costTime Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Instance status.

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
                     * Instance lifetime number, which identifies one-time execution of the instance.

For example: the number of the first run of a periodic instance is 0. when the user reruns the instance later, the number of the second execution is 1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * Instance running trigger type.

-RERUN indicates rerunning.
-ADDITION indicates data replenishment.
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
                     * Number of retries after failure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * List of instance lifecycle.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceLifeDetailDto> m_lifeCycleDetailList;
                    bool m_lifeCycleDetailListHasBeenSet;

                    /**
                     * Instance code file.
The file content specifies the code used for running the execution instance this time. only some tasks support it.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * Dispatch execution ID.
The unified execution platform dispatches execution to the new version executor with a unique ID to identify a specific execution, while the existing old executors do not have this ID when dispatching execution.
If it is unknown whether the executor version supports this ID, contact tencent cloud's operations team.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * The execution node where the log resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * Log file name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * Instance log type.

-run: indicates the state of functioning. 
-kill: terminates.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Time spent.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEVO_H_

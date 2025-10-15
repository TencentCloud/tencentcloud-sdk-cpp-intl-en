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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCEEXECUTION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCEEXECUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/InstanceExecutionPhase.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the details of an instance.
                */
                class InstanceExecution : public AbstractModel
                {
                public:
                    InstanceExecution();
                    ~InstanceExecution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance unique identifier.

                     * @return InstanceKey Instance unique identifier.

                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Instance unique identifier.

                     * @param _instanceKey Instance unique identifier.

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
                     * 获取**Instance lifecycle number, identifies one-time execution of the instance.**.

For example, the first run of a periodic instance is numbered 0. if the user reruns the instance subsequently, the second execution is numbered 1.

                     * @return LifeRoundNum **Instance lifecycle number, identifies one-time execution of the instance.**.

For example, the first run of a periodic instance is numbered 0. if the user reruns the instance subsequently, the second execution is numbered 1.

                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置**Instance lifecycle number, identifies one-time execution of the instance.**.

For example, the first run of a periodic instance is numbered 0. if the user reruns the instance subsequently, the second execution is numbered 1.

                     * @param _lifeRoundNum **Instance lifecycle number, identifies one-time execution of the instance.**.

For example, the first run of a periodic instance is numbered 0. if the user reruns the instance subsequently, the second execution is numbered 1.

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
                     * 获取**Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.

                     * @return InstanceState **Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.

                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置**Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.

                     * @param _instanceState **Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.

                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取**Trigger type for instance running**.

-RERUN indicates a rerun.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN indicates rerun - empty run.
-ADDITION_SKIP_RUN indicates a supplementary empty run.
-PERIODIC_SKIP_RUN indicates cycle - empty run.
-APERIODIC_SKIP_RUN indicates non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
                     * @return RunType **Trigger type for instance running**.

-RERUN indicates a rerun.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN indicates rerun - empty run.
-ADDITION_SKIP_RUN indicates a supplementary empty run.
-PERIODIC_SKIP_RUN indicates cycle - empty run.
-APERIODIC_SKIP_RUN indicates non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置**Trigger type for instance running**.

-RERUN indicates a rerun.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN indicates rerun - empty run.
-ADDITION_SKIP_RUN indicates a supplementary empty run.
-PERIODIC_SKIP_RUN indicates cycle - empty run.
-APERIODIC_SKIP_RUN indicates non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
                     * @param _runType **Trigger type for instance running**.

-RERUN indicates a rerun.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN indicates rerun - empty run.
-ADDITION_SKIP_RUN indicates a supplementary empty run.
-PERIODIC_SKIP_RUN indicates cycle - empty run.
-APERIODIC_SKIP_RUN indicates non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
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
                     * 获取Specifies the number of retry attempts on failure.

                     * @return Tries Specifies the number of retry attempts on failure.

                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置Specifies the number of retry attempts on failure.

                     * @param _tries Specifies the number of retry attempts on failure.

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
                     * 获取**Specifies the lifecycle list for instance execution.**.

                     * @return ExecutionPhaseList **Specifies the lifecycle list for instance execution.**.

                     * 
                     */
                    std::vector<InstanceExecutionPhase> GetExecutionPhaseList() const;

                    /**
                     * 设置**Specifies the lifecycle list for instance execution.**.

                     * @param _executionPhaseList **Specifies the lifecycle list for instance execution.**.

                     * 
                     */
                    void SetExecutionPhaseList(const std::vector<InstanceExecutionPhase>& _executionPhaseList);

                    /**
                     * 判断参数 ExecutionPhaseList 是否已赋值
                     * @return ExecutionPhaseList 是否已赋值
                     * 
                     */
                    bool ExecutionPhaseListHasBeenSet() const;

                    /**
                     * 获取Time spent, in milliseconds.

                     * @return CostTime Time spent, in milliseconds.

                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置Time spent, in milliseconds.

                     * @param _costTime Time spent, in milliseconds.

                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                private:

                    /**
                     * Instance unique identifier.

                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **Instance lifecycle number, identifies one-time execution of the instance.**.

For example, the first run of a periodic instance is numbered 0. if the user reruns the instance subsequently, the second execution is numbered 1.

                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * **Instance status**.
-WAIT_EVENT: specifies the wait for event.
-WAIT_UPSTREAM: waiting for upstream.
- WAIT_RUN: awaiting execution.
- RUNNING: indicates the instance is RUNNING.
- SKIP_RUNNING: SKIP RUNNING.
- FAILED_RETRY: RETRY on failure.
- EXPIRED: failed.
-COMPLETED: success.

                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * **Trigger type for instance running**.

-RERUN indicates a rerun.
-ADDITION indicates supplementary recording.
-PERIODIC indicates a period.
-APERIODIC indicates non-periodic.
-RERUN_SKIP_RUN indicates rerun - empty run.
-ADDITION_SKIP_RUN indicates a supplementary empty run.
-PERIODIC_SKIP_RUN indicates cycle - empty run.
-APERIODIC_SKIP_RUN indicates non-periodic empty run.
-MANUAL_TRIGGER indicates manual triggering.
-RERUN_MANUAL_TRIGGER indicates manual triggering - rerun.
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * Specifies the number of retry attempts on failure.

                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * **Specifies the lifecycle list for instance execution.**.

                     */
                    std::vector<InstanceExecutionPhase> m_executionPhaseList;
                    bool m_executionPhaseListHasBeenSet;

                    /**
                     * Time spent, in milliseconds.

                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCEEXECUTION_H_

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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTIMEINSTANCECNTTOP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTIMEINSTANCECNTTOP_H_

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
                * Specify Time Window Instance Duration Ranking
                */
                class RuntimeInstanceCntTop : public AbstractModel
                {
                public:
                    RuntimeInstanceCntTop();
                    ~RuntimeInstanceCntTop() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName 1
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Task Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleUnit Task Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置Task Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleUnit Task Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return State Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _state Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Time Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RunTime Time Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRunTime() const;

                    /**
                     * 设置Time Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _runTime Time Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRunTime(const uint64_t& _runTime);

                    /**
                     * 判断参数 RunTime 是否已赋值
                     * @return RunTime 是否已赋值
                     * 
                     */
                    bool RunTimeHasBeenSet() const;

                    /**
                     * 获取Instance Running TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CurRunTime Instance Running TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurRunTime() const;

                    /**
                     * 设置Instance Running TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _curRunTime Instance Running TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurRunTime(const std::string& _curRunTime);

                    /**
                     * 判断参数 CurRunTime 是否已赋值
                     * @return CurRunTime 是否已赋值
                     * 
                     */
                    bool CurRunTimeHasBeenSet() const;

                    /**
                     * 获取Waiting for Scheduling Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WaitScheduleTime Waiting for Scheduling Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetWaitScheduleTime() const;

                    /**
                     * 设置Waiting for Scheduling Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _waitScheduleTime Waiting for Scheduling Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWaitScheduleTime(const uint64_t& _waitScheduleTime);

                    /**
                     * 判断参数 WaitScheduleTime 是否已赋值
                     * @return WaitScheduleTime 是否已赋值
                     * 
                     */
                    bool WaitScheduleTimeHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Task Cycle Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Time Consumption
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_runTime;
                    bool m_runTimeHasBeenSet;

                    /**
                     * Instance Running TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_curRunTime;
                    bool m_curRunTimeHasBeenSet;

                    /**
                     * Waiting for Scheduling Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_waitScheduleTime;
                    bool m_waitScheduleTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RUNTIMEINSTANCECNTTOP_H_

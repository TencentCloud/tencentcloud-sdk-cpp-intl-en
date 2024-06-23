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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeDetailDto.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLogInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance Lifecycle Details
                */
                class InstanceLifeCycleOpsDto : public AbstractModel
                {
                public:
                    InstanceLifeCycleOpsDto();
                    ~InstanceLifeCycleOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Data Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CurRunDate Data Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Data Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _curRunDate Data Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Instance Lifecycle Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LifeRound Instance Lifecycle Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetLifeRound() const;

                    /**
                     * 设置Instance Lifecycle Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lifeRound Instance Lifecycle Count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLifeRound(const int64_t& _lifeRound);

                    /**
                     * 判断参数 LifeRound 是否已赋值
                     * @return LifeRound 是否已赋值
                     * 
                     */
                    bool LifeRoundHasBeenSet() const;

                    /**
                     * 获取Run Type Rerun/Supplement/Periodic/Non-periodic
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RunType Run Type Rerun/Supplement/Periodic/Non-periodic
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置Run Type Rerun/Supplement/Periodic/Non-periodic
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _runType Run Type Rerun/Supplement/Periodic/Non-periodic
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Number of Reruns
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tries Number of Reruns
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTries() const;

                    /**
                     * 设置Number of Reruns
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tries Number of Reruns
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTries(const int64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLifeDetailDtoList Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<InstanceLifeDetailDto> GetInstanceLifeDetailDtoList() const;

                    /**
                     * 设置Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceLifeDetailDtoList Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceLifeDetailDtoList(const std::vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList);

                    /**
                     * 判断参数 InstanceLifeDetailDtoList 是否已赋值
                     * @return InstanceLifeDetailDtoList 是否已赋值
                     * 
                     */
                    bool InstanceLifeDetailDtoListHasBeenSet() const;

                    /**
                     * 获取Runner Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RunnerState Runner Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRunnerState() const;

                    /**
                     * 设置Runner Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _runnerState Runner Status
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRunnerState(const std::string& _runnerState);

                    /**
                     * 判断参数 RunnerState 是否已赋值
                     * @return RunnerState 是否已赋值
                     * 
                     */
                    bool RunnerStateHasBeenSet() const;

                    /**
                     * 获取Error codeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorDesc Error codeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置Error codeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorDesc Error codeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取Error Alert Level
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErrorCodeLevel Error Alert Level
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetErrorCodeLevel() const;

                    /**
                     * 设置Error Alert Level
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _errorCodeLevel Error Alert Level
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErrorCodeLevel(const std::string& _errorCodeLevel);

                    /**
                     * 判断参数 ErrorCodeLevel 是否已赋值
                     * @return ErrorCodeLevel 是否已赋值
                     * 
                     */
                    bool ErrorCodeLevelHasBeenSet() const;

                    /**
                     * 获取Instance Log Summary
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLogListOpsDto Instance Log Summary
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceLogInfo GetInstanceLogListOpsDto() const;

                    /**
                     * 设置Instance Log Summary
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceLogListOpsDto Instance Log Summary
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceLogListOpsDto(const InstanceLogInfo& _instanceLogListOpsDto);

                    /**
                     * 判断参数 InstanceLogListOpsDto 是否已赋值
                     * @return InstanceLogListOpsDto 是否已赋值
                     * 
                     */
                    bool InstanceLogListOpsDtoHasBeenSet() const;

                    /**
                     * 获取Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceState Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceState Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Data Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Instance Lifecycle Count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_lifeRound;
                    bool m_lifeRoundHasBeenSet;

                    /**
                     * Run Type Rerun/Supplement/Periodic/Non-periodic
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * Number of Reruns
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Instance LifecycleNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<InstanceLifeDetailDto> m_instanceLifeDetailDtoList;
                    bool m_instanceLifeDetailDtoListHasBeenSet;

                    /**
                     * Runner Status
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_runnerState;
                    bool m_runnerStateHasBeenSet;

                    /**
                     * Error codeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * Error Alert Level
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_errorCodeLevel;
                    bool m_errorCodeLevelHasBeenSet;

                    /**
                     * Instance Log Summary
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    InstanceLogInfo m_instanceLogListOpsDto;
                    bool m_instanceLogListOpsDtoHasBeenSet;

                    /**
                     * Instance StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEOPSDTO_H_

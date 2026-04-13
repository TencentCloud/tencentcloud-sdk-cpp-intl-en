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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task details.
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current task step name.
                     * @return CurrentStep Current task step name.
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置Current task step name.
                     * @param _currentStep Current task step name.
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取Describes the step description of the current task you own.
                     * @return AllSteps Describes the step description of the current task you own.
                     * 
                     */
                    std::string GetAllSteps() const;

                    /**
                     * 设置Describes the step description of the current task you own.
                     * @param _allSteps Describes the step description of the current task you own.
                     * 
                     */
                    void SetAllSteps(const std::string& _allSteps);

                    /**
                     * 判断参数 AllSteps 是否已赋值
                     * @return AllSteps 是否已赋值
                     * 
                     */
                    bool AllStepsHasBeenSet() const;

                    /**
                     * 获取Input of the task.
                     * @return Input Input of the task.
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置Input of the task.
                     * @param _input Input of the task.
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output parameter of the task.
                     * @return Output Output parameter of the task.
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Output parameter of the task.
                     * @param _output Output parameter of the task.
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Specifies the switch time after instance configurations are modified. default value: 0.
This task does not require switching.
Switch immediately.
2: switch at specified time.
3: switch during maintenance time window.
                     * @return SwitchTag Specifies the switch time after instance configurations are modified. default value: 0.
This task does not require switching.
Switch immediately.
2: switch at specified time.
3: switch during maintenance time window.
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置Specifies the switch time after instance configurations are modified. default value: 0.
This task does not require switching.
Switch immediately.
2: switch at specified time.
3: switch during maintenance time window.
                     * @param _switchTag Specifies the switch time after instance configurations are modified. default value: 0.
This task does not require switching.
Switch immediately.
2: switch at specified time.
3: switch during maintenance time window.
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取Specifies the switch time.
                     * @return SwitchTime Specifies the switch time.
                     * 
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置Specifies the switch time.
                     * @param _switchTime Specifies the switch time.
                     * 
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     * 
                     */
                    bool SwitchTimeHasBeenSet() const;

                    /**
                     * 获取Note of the task.
                     * @return Message Note of the task.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Note of the task.
                     * @param _message Note of the task.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Current task step name.
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * Describes the step description of the current task you own.
                     */
                    std::string m_allSteps;
                    bool m_allStepsHasBeenSet;

                    /**
                     * Input of the task.
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output parameter of the task.
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Specifies the switch time after instance configurations are modified. default value: 0.
This task does not require switching.
Switch immediately.
2: switch at specified time.
3: switch during maintenance time window.
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * Specifies the switch time.
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                    /**
                     * Note of the task.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_TASKDETAIL_H_

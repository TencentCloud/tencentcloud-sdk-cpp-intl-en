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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_

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
                * Parameter modification event information
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
                     * @return ParamName Parameter name.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name.
                     * @param _paramName Parameter name.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Original parameter value.
                     * @return OldValue Original parameter value.
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置Original parameter value.
                     * @param _oldValue Original parameter value.
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取This modification specifies the expected parameter value.
                     * @return NewValue This modification specifies the expected parameter value.
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置This modification specifies the expected parameter value.
                     * @param _newValue This modification specifies the expected parameter value.
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取Specifies the start time for backend parameter modification.
                     * @return ModifyTime Specifies the start time for backend parameter modification.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Specifies the start time for backend parameter modification.
                     * @param _modifyTime Specifies the start time for backend parameter modification.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the start of effective time for the backend parameter.
                     * @return EffectiveTime Specifies the start of effective time for the backend parameter.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Specifies the start of effective time for the backend parameter.
                     * @param _effectiveTime Specifies the start of effective time for the backend parameter.
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取Modification status. valid values: in progress, success, paused.
                     * @return State Modification status. valid values: in progress, success, paused.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Modification status. valid values: in progress, success, paused.
                     * @param _state Modification status. valid values: in progress, success, paused.
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
                     * 获取Operator (normal: user sub UIN).
                     * @return Operator Operator (normal: user sub UIN).
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator (normal: user sub UIN).
                     * @param _operator Operator (normal: user sub UIN).
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Time log.
                     * @return EventLog Time log.
                     * 
                     */
                    std::string GetEventLog() const;

                    /**
                     * 设置Time log.
                     * @param _eventLog Time log.
                     * 
                     */
                    void SetEventLog(const std::string& _eventLog);

                    /**
                     * 判断参数 EventLog 是否已赋值
                     * @return EventLog 是否已赋值
                     * 
                     */
                    bool EventLogHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Original parameter value.
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * This modification specifies the expected parameter value.
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * Specifies the start time for backend parameter modification.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Specifies the start of effective time for the backend parameter.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Modification status. valid values: in progress, success, paused.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Operator (normal: user sub UIN).
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Time log.
                     */
                    std::string m_eventLog;
                    bool m_eventLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_

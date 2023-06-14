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
                     * 获取Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ParamName Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _paramName Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Original parameter value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OldValue Original parameter value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置Original parameter value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _oldValue Original parameter value
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取New parameter value in this modification event
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NewValue New parameter value in this modification event
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置New parameter value in this modification event
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _newValue New parameter value in this modification event
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Start time of parameter modification
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ModifyTime Start time of parameter modification
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Start time of parameter modification
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _modifyTime Start time of parameter modification
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Start time when the modified parameter takes effect
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EffectiveTime Start time when the modified parameter takes effect
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Start time when the modified parameter takes effect
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _effectiveTime Start time when the modified parameter takes effect
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Modification status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return State Modification status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Modification status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _state Modification status
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Operator (generally, the value is the UIN of a sub-user)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Operator Operator (generally, the value is the UIN of a sub-user)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator (generally, the value is the UIN of a sub-user)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _operator Operator (generally, the value is the UIN of a sub-user)
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Event log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EventLog Event log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventLog() const;

                    /**
                     * 设置Event log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _eventLog Event log
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Original parameter value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * New parameter value in this modification event
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * Start time of parameter modification
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Start time when the modified parameter takes effect
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * Modification status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Operator (generally, the value is the UIN of a sub-user)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Event log
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_eventLog;
                    bool m_eventLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_

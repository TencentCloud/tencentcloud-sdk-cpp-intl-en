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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTINPUT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentUserInputValue.h>
#include <tencentcloud/adp/v20260520/model/AgentSystemVariable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent input value. Supports direct assignment and reference.
                */
                class AgentInput : public AbstractModel
                {
                public:
                    AgentInput();
                    ~AgentInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input source type: 0 user input, 3 custom variable (API parameter)</p>
                     * @return InputType <p>Input source type: 0 user input, 3 custom variable (API parameter)</p>
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置<p>Input source type: 0 user input, 3 custom variable (API parameter)</p>
                     * @param _inputType <p>Input source type: 0 user input, 3 custom variable (API parameter)</p>
                     * 
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<p>User handwriting input</p>
                     * @return UserInputValue <p>User handwriting input</p>
                     * 
                     */
                    AgentUserInputValue GetUserInputValue() const;

                    /**
                     * 设置<p>User handwriting input</p>
                     * @param _userInputValue <p>User handwriting input</p>
                     * 
                     */
                    void SetUserInputValue(const AgentUserInputValue& _userInputValue);

                    /**
                     * 判断参数 UserInputValue 是否已赋值
                     * @return UserInputValue 是否已赋值
                     * 
                     */
                    bool UserInputValueHasBeenSet() const;

                    /**
                     * 获取<p>System parameter</p>
                     * @return SystemVariable <p>System parameter</p>
                     * 
                     */
                    AgentSystemVariable GetSystemVariable() const;

                    /**
                     * 设置<p>System parameter</p>
                     * @param _systemVariable <p>System parameter</p>
                     * 
                     */
                    void SetSystemVariable(const AgentSystemVariable& _systemVariable);

                    /**
                     * 判断参数 SystemVariable 是否已赋值
                     * @return SystemVariable 是否已赋值
                     * 
                     */
                    bool SystemVariableHasBeenSet() const;

                    /**
                     * 获取<p>Custom Variable (API parameter)</p>
                     * @return CustomVariableId <p>Custom Variable (API parameter)</p>
                     * 
                     */
                    std::string GetCustomVariableId() const;

                    /**
                     * 设置<p>Custom Variable (API parameter)</p>
                     * @param _customVariableId <p>Custom Variable (API parameter)</p>
                     * 
                     */
                    void SetCustomVariableId(const std::string& _customVariableId);

                    /**
                     * 判断参数 CustomVariableId 是否已赋值
                     * @return CustomVariableId 是否已赋值
                     * 
                     */
                    bool CustomVariableIdHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable parameter</p>
                     * @return EnvVariableId <p>Environment variable parameter</p>
                     * 
                     */
                    std::string GetEnvVariableId() const;

                    /**
                     * 设置<p>Environment variable parameter</p>
                     * @param _envVariableId <p>Environment variable parameter</p>
                     * 
                     */
                    void SetEnvVariableId(const std::string& _envVariableId);

                    /**
                     * 判断参数 EnvVariableId 是否已赋值
                     * @return EnvVariableId 是否已赋值
                     * 
                     */
                    bool EnvVariableIdHasBeenSet() const;

                    /**
                     * 获取<p>Application variable parameters</p>
                     * @return AppVariableId <p>Application variable parameters</p>
                     * 
                     */
                    std::string GetAppVariableId() const;

                    /**
                     * 设置<p>Application variable parameters</p>
                     * @param _appVariableId <p>Application variable parameters</p>
                     * 
                     */
                    void SetAppVariableId(const std::string& _appVariableId);

                    /**
                     * 判断参数 AppVariableId 是否已赋值
                     * @return AppVariableId 是否已赋值
                     * 
                     */
                    bool AppVariableIdHasBeenSet() const;

                private:

                    /**
                     * <p>Input source type: 0 user input, 3 custom variable (API parameter)</p>
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>User handwriting input</p>
                     */
                    AgentUserInputValue m_userInputValue;
                    bool m_userInputValueHasBeenSet;

                    /**
                     * <p>System parameter</p>
                     */
                    AgentSystemVariable m_systemVariable;
                    bool m_systemVariableHasBeenSet;

                    /**
                     * <p>Custom Variable (API parameter)</p>
                     */
                    std::string m_customVariableId;
                    bool m_customVariableIdHasBeenSet;

                    /**
                     * <p>Environment variable parameter</p>
                     */
                    std::string m_envVariableId;
                    bool m_envVariableIdHasBeenSet;

                    /**
                     * <p>Application variable parameters</p>
                     */
                    std::string m_appVariableId;
                    bool m_appVariableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTINPUT_H_

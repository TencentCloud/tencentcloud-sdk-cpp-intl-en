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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Remote command execution object.
                */
                class LifecycleCommand : public AbstractModel
                {
                public:
                    LifecycleCommand();
                    ~LifecycleCommand() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Remote command ID. It’s required to execute a command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CommandId Remote command ID. It’s required to execute a command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Remote command ID. It’s required to execute a command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _commandId Remote command ID. It’s required to execute a command.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Custom parameter. The field type is JSON encoded string. For example, {"varA": "222"}.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
If this parameter is not specified, the `DefaultParameters` of `Command` is used.
Up to 20 customer parameters allowed. The parameter name can contain up to 64 characters, including [a-z], [A-Z], [0-9] and [-_].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Parameters Custom parameter. The field type is JSON encoded string. For example, {"varA": "222"}.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
If this parameter is not specified, the `DefaultParameters` of `Command` is used.
Up to 20 customer parameters allowed. The parameter name can contain up to 64 characters, including [a-z], [A-Z], [0-9] and [-_].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameter. The field type is JSON encoded string. For example, {"varA": "222"}.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
If this parameter is not specified, the `DefaultParameters` of `Command` is used.
Up to 20 customer parameters allowed. The parameter name can contain up to 64 characters, including [a-z], [A-Z], [0-9] and [-_].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parameters Custom parameter. The field type is JSON encoded string. For example, {"varA": "222"}.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
If this parameter is not specified, the `DefaultParameters` of `Command` is used.
Up to 20 customer parameters allowed. The parameter name can contain up to 64 characters, including [a-z], [A-Z], [0-9] and [-_].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * Remote command ID. It’s required to execute a command.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Custom parameter. The field type is JSON encoded string. For example, {"varA": "222"}.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
If this parameter is not specified, the `DefaultParameters` of `Command` is used.
Up to 20 customer parameters allowed. The parameter name can contain up to 64 characters, including [a-z], [A-Z], [0-9] and [-_].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_

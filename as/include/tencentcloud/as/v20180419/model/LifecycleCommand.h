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
                     * 获取Remote command ID. this item is required if you select to execute command.
                     * @return CommandId Remote command ID. this item is required if you select to execute command.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Remote command ID. this item is required if you select to execute command.
                     * @param _commandId Remote command ID. this item is required if you select to execute command.
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
                     * 获取Custom parameter. field type is json encoded string, for example: {"varA": "222"}.
key specifies the custom parameter name, and value specifies the default. both are string type.
If the parameter value is not provided, the DefaultParameters of Command will be used to replace it.
Custom parameters support a maximum of 20 entries. the custom parameter name must meet the following standard: number of characters has a cap of 64, value range [a-zA-Z0-9-_].
                     * @return Parameters Custom parameter. field type is json encoded string, for example: {"varA": "222"}.
key specifies the custom parameter name, and value specifies the default. both are string type.
If the parameter value is not provided, the DefaultParameters of Command will be used to replace it.
Custom parameters support a maximum of 20 entries. the custom parameter name must meet the following standard: number of characters has a cap of 64, value range [a-zA-Z0-9-_].
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameter. field type is json encoded string, for example: {"varA": "222"}.
key specifies the custom parameter name, and value specifies the default. both are string type.
If the parameter value is not provided, the DefaultParameters of Command will be used to replace it.
Custom parameters support a maximum of 20 entries. the custom parameter name must meet the following standard: number of characters has a cap of 64, value range [a-zA-Z0-9-_].
                     * @param _parameters Custom parameter. field type is json encoded string, for example: {"varA": "222"}.
key specifies the custom parameter name, and value specifies the default. both are string type.
If the parameter value is not provided, the DefaultParameters of Command will be used to replace it.
Custom parameters support a maximum of 20 entries. the custom parameter name must meet the following standard: number of characters has a cap of 64, value range [a-zA-Z0-9-_].
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
                     * Remote command ID. this item is required if you select to execute command.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Custom parameter. field type is json encoded string, for example: {"varA": "222"}.
key specifies the custom parameter name, and value specifies the default. both are string type.
If the parameter value is not provided, the DefaultParameters of Command will be used to replace it.
Custom parameters support a maximum of 20 entries. the custom parameter name must meet the following standard: number of characters has a cap of 64, value range [a-zA-Z0-9-_].
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_

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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HANDLEFUNCTIONRUNTIMEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HANDLEFUNCTIONRUNTIMEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionEnvironmentVariable.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HandleFunctionRuntimeEnvironment request structure.
                */
                class HandleFunctionRuntimeEnvironmentRequest : public AbstractModel
                {
                public:
                    HandleFunctionRuntimeEnvironmentRequest();
                    ~HandleFunctionRuntimeEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Operation type. Valid values:
<li>setEnvironmentVariable: Set an environment variable. If the environment variable exists, it will be modified; otherwise, it will be added.</li>
<li>deleteEnvironmentVariable: Delete an environment variable.</li>
<li>clearEnvironmentVariable: Clear an environment variable.</li>
<li>resetEnvironmentVariable: Reset an environment variable.</li>
                     * @return Operation Operation type. Valid values:
<li>setEnvironmentVariable: Set an environment variable. If the environment variable exists, it will be modified; otherwise, it will be added.</li>
<li>deleteEnvironmentVariable: Delete an environment variable.</li>
<li>clearEnvironmentVariable: Clear an environment variable.</li>
<li>resetEnvironmentVariable: Reset an environment variable.</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type. Valid values:
<li>setEnvironmentVariable: Set an environment variable. If the environment variable exists, it will be modified; otherwise, it will be added.</li>
<li>deleteEnvironmentVariable: Delete an environment variable.</li>
<li>clearEnvironmentVariable: Clear an environment variable.</li>
<li>resetEnvironmentVariable: Reset an environment variable.</li>
                     * @param _operation Operation type. Valid values:
<li>setEnvironmentVariable: Set an environment variable. If the environment variable exists, it will be modified; otherwise, it will be added.</li>
<li>deleteEnvironmentVariable: Delete an environment variable.</li>
<li>clearEnvironmentVariable: Clear an environment variable.</li>
<li>resetEnvironmentVariable: Reset an environment variable.</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Environment variable list. The runtime environment of a function supports up to 64 variables. This parameter is required when the value of Operation is setEnvironmentVariable, deleteEnvironmentVariable, or resetEnvironmentVariable.
                     * @return EnvironmentVariables Environment variable list. The runtime environment of a function supports up to 64 variables. This parameter is required when the value of Operation is setEnvironmentVariable, deleteEnvironmentVariable, or resetEnvironmentVariable.
                     * 
                     */
                    std::vector<FunctionEnvironmentVariable> GetEnvironmentVariables() const;

                    /**
                     * 设置Environment variable list. The runtime environment of a function supports up to 64 variables. This parameter is required when the value of Operation is setEnvironmentVariable, deleteEnvironmentVariable, or resetEnvironmentVariable.
                     * @param _environmentVariables Environment variable list. The runtime environment of a function supports up to 64 variables. This parameter is required when the value of Operation is setEnvironmentVariable, deleteEnvironmentVariable, or resetEnvironmentVariable.
                     * 
                     */
                    void SetEnvironmentVariables(const std::vector<FunctionEnvironmentVariable>& _environmentVariables);

                    /**
                     * 判断参数 EnvironmentVariables 是否已赋值
                     * @return EnvironmentVariables 是否已赋值
                     * 
                     */
                    bool EnvironmentVariablesHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Operation type. Valid values:
<li>setEnvironmentVariable: Set an environment variable. If the environment variable exists, it will be modified; otherwise, it will be added.</li>
<li>deleteEnvironmentVariable: Delete an environment variable.</li>
<li>clearEnvironmentVariable: Clear an environment variable.</li>
<li>resetEnvironmentVariable: Reset an environment variable.</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Environment variable list. The runtime environment of a function supports up to 64 variables. This parameter is required when the value of Operation is setEnvironmentVariable, deleteEnvironmentVariable, or resetEnvironmentVariable.
                     */
                    std::vector<FunctionEnvironmentVariable> m_environmentVariables;
                    bool m_environmentVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HANDLEFUNCTIONRUNTIMEENVIRONMENTREQUEST_H_

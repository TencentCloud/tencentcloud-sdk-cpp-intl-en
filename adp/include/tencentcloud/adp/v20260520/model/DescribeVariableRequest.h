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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeVariable request structure.
                */
                class DescribeVariableRequest : public AbstractModel
                {
                public:
                    DescribeVariableRequest();
                    ~DescribeVariableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取app_id
                     * @return AppId app_id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置app_id
                     * @param _appId app_id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取variable_id
                     * @return VariableId variable_id
                     * 
                     */
                    std::string GetVariableId() const;

                    /**
                     * 设置variable_id
                     * @param _variableId variable_id
                     * 
                     */
                    void SetVariableId(const std::string& _variableId);

                    /**
                     * 判断参数 VariableId 是否已赋值
                     * @return VariableId 是否已赋值
                     * 
                     */
                    bool VariableIdHasBeenSet() const;

                    /**
                     * 获取module_type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters
                     * @return ModuleType module_type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters
                     * 
                     */
                    int64_t GetModuleType() const;

                    /**
                     * 设置module_type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters
                     * @param _moduleType module_type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters
                     * 
                     */
                    void SetModuleType(const int64_t& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                private:

                    /**
                     * app_id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * variable_id
                     */
                    std::string m_variableId;
                    bool m_variableIdHasBeenSet;

                    /**
                     * module_type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters
                     */
                    int64_t m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLEREQUEST_H_

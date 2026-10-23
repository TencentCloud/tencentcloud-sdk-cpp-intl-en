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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONECUSTOMVARIABLESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONECUSTOMVARIABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariable.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperation.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyZoneCustomVariables request structure.
                */
                class ModifyZoneCustomVariablesRequest : public AbstractModel
                {
                public:
                    ModifyZoneCustomVariablesRequest();
                    ~ModifyZoneCustomVariablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>List of site-level custom variables. CustomVariable.Name must use user.zone. as a prefix. Variables are initialized sequentially in array order. InitialValue can only reference variables before the current variable. It does not support referencing the current variable itself or variables after it.</p>
                     * @return CustomVariables <p>List of site-level custom variables. CustomVariable.Name must use user.zone. as a prefix. Variables are initialized sequentially in array order. InitialValue can only reference variables before the current variable. It does not support referencing the current variable itself or variables after it.</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 设置<p>List of site-level custom variables. CustomVariable.Name must use user.zone. as a prefix. Variables are initialized sequentially in array order. InitialValue can only reference variables before the current variable. It does not support referencing the current variable itself or variables after it.</p>
                     * @param _customVariables <p>List of site-level custom variables. CustomVariable.Name must use user.zone. as a prefix. Variables are initialized sequentially in array order. InitialValue can only reference variables before the current variable. It does not support referencing the current variable itself or variables after it.</p>
                     * 
                     */
                    void SetCustomVariables(const std::vector<CustomVariable>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>Site-level custom variable calculation rules. The calculation supports references to defined site-level custom variables. This list currently only supports filling in one rule; additional entries are invalid.</p>
                     * @return CustomVariableOperations <p>Site-level custom variable calculation rules. The calculation supports references to defined site-level custom variables. This list currently only supports filling in one rule; additional entries are invalid.</p>
                     * 
                     */
                    std::vector<CustomVariableOperation> GetCustomVariableOperations() const;

                    /**
                     * 设置<p>Site-level custom variable calculation rules. The calculation supports references to defined site-level custom variables. This list currently only supports filling in one rule; additional entries are invalid.</p>
                     * @param _customVariableOperations <p>Site-level custom variable calculation rules. The calculation supports references to defined site-level custom variables. This list currently only supports filling in one rule; additional entries are invalid.</p>
                     * 
                     */
                    void SetCustomVariableOperations(const std::vector<CustomVariableOperation>& _customVariableOperations);

                    /**
                     * 判断参数 CustomVariableOperations 是否已赋值
                     * @return CustomVariableOperations 是否已赋值
                     * 
                     */
                    bool CustomVariableOperationsHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>List of site-level custom variables. CustomVariable.Name must use user.zone. as a prefix. Variables are initialized sequentially in array order. InitialValue can only reference variables before the current variable. It does not support referencing the current variable itself or variables after it.</p>
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>Site-level custom variable calculation rules. The calculation supports references to defined site-level custom variables. This list currently only supports filling in one rule; additional entries are invalid.</p>
                     */
                    std::vector<CustomVariableOperation> m_customVariableOperations;
                    bool m_customVariableOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONECUSTOMVARIABLESREQUEST_H_

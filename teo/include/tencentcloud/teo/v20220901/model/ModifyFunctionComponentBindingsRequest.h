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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONCOMPONENTBINDINGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONCOMPONENTBINDINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionComponentBinding.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyFunctionComponentBindings request structure.
                */
                class ModifyFunctionComponentBindingsRequest : public AbstractModel
                {
                public:
                    ModifyFunctionComponentBindingsRequest();
                    ~ModifyFunctionComponentBindingsRequest() = default;
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
<li>bind: bind component;</li>
<li>bind-override: Bind a component. If the binding already exists, it is a rebind action; otherwise, it is a bind action.</li>
<li>unbind: Unbind a component;</li>
<li>rebind: Reset the binding relationship. Clear all existing bindings and set to the passed in bound list. If an empty list is passed in, clear all bindings.</li>

                     * @return Operation Operation type. Valid values:
<li>bind: bind component;</li>
<li>bind-override: Bind a component. If the binding already exists, it is a rebind action; otherwise, it is a bind action.</li>
<li>unbind: Unbind a component;</li>
<li>rebind: Reset the binding relationship. Clear all existing bindings and set to the passed in bound list. If an empty list is passed in, clear all bindings.</li>

                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type. Valid values:
<li>bind: bind component;</li>
<li>bind-override: Bind a component. If the binding already exists, it is a rebind action; otherwise, it is a bind action.</li>
<li>unbind: Unbind a component;</li>
<li>rebind: Reset the binding relationship. Clear all existing bindings and set to the passed in bound list. If an empty list is passed in, clear all bindings.</li>

                     * @param _operation Operation type. Valid values:
<li>bind: bind component;</li>
<li>bind-override: Bind a component. If the binding already exists, it is a rebind action; otherwise, it is a bind action.</li>
<li>unbind: Unbind a component;</li>
<li>rebind: Reset the binding relationship. Clear all existing bindings and set to the passed in bound list. If an empty list is passed in, clear all bindings.</li>

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
                     * 获取Bound list of function components to operate. When Operation is rebind and an empty list is input, it means to clear ALL bindings.
                     * @return FunctionComponentBindings Bound list of function components to operate. When Operation is rebind and an empty list is input, it means to clear ALL bindings.
                     * 
                     */
                    std::vector<FunctionComponentBinding> GetFunctionComponentBindings() const;

                    /**
                     * 设置Bound list of function components to operate. When Operation is rebind and an empty list is input, it means to clear ALL bindings.
                     * @param _functionComponentBindings Bound list of function components to operate. When Operation is rebind and an empty list is input, it means to clear ALL bindings.
                     * 
                     */
                    void SetFunctionComponentBindings(const std::vector<FunctionComponentBinding>& _functionComponentBindings);

                    /**
                     * 判断参数 FunctionComponentBindings 是否已赋值
                     * @return FunctionComponentBindings 是否已赋值
                     * 
                     */
                    bool FunctionComponentBindingsHasBeenSet() const;

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
<li>bind: bind component;</li>
<li>bind-override: Bind a component. If the binding already exists, it is a rebind action; otherwise, it is a bind action.</li>
<li>unbind: Unbind a component;</li>
<li>rebind: Reset the binding relationship. Clear all existing bindings and set to the passed in bound list. If an empty list is passed in, clear all bindings.</li>

                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Bound list of function components to operate. When Operation is rebind and an empty list is input, it means to clear ALL bindings.
                     */
                    std::vector<FunctionComponentBinding> m_functionComponentBindings;
                    bool m_functionComponentBindingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYFUNCTIONCOMPONENTBINDINGSREQUEST_H_

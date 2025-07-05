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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYINFOREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyInfo request structure.
                */
                class ModifyAlarmPolicyInfoRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyInfoRequest();
                    ~ModifyAlarmPolicyInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name. Enter "monitor" here
                     * @return Module Module name. Enter "monitor" here
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name. Enter "monitor" here
                     * @param _module Module name. Enter "monitor" here
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID
                     * @return PolicyId Alarm policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID
                     * @param _policyId Alarm policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Field to be modified. Valid values: NAME (policy name), REMARK (policy remarks)
                     * @return Key Field to be modified. Valid values: NAME (policy name), REMARK (policy remarks)
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Field to be modified. Valid values: NAME (policy name), REMARK (policy remarks)
                     * @param _key Field to be modified. Valid values: NAME (policy name), REMARK (policy remarks)
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Value after modification
                     * @return Value Value after modification
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value after modification
                     * @param _value Value after modification
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Module name. Enter "monitor" here
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Field to be modified. Valid values: NAME (policy name), REMARK (policy remarks)
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value after modification
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYINFOREQUEST_H_

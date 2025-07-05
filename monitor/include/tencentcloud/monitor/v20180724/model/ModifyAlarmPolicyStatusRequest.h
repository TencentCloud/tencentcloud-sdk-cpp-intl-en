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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYSTATUSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYSTATUSREQUEST_H_

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
                * ModifyAlarmPolicyStatus request structure.
                */
                class ModifyAlarmPolicyStatusRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyStatusRequest();
                    ~ModifyAlarmPolicyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name, which is fixed at "monitor"
                     * @return Module Module name, which is fixed at "monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name, which is fixed at "monitor"
                     * @param _module Module name, which is fixed at "monitor"
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
                     * 获取Status. Valid values: 0 (disabled), 1 (enabled)
                     * @return Enable Status. Valid values: 0 (disabled), 1 (enabled)
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Status. Valid values: 0 (disabled), 1 (enabled)
                     * @param _enable Status. Valid values: 0 (disabled), 1 (enabled)
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * Module name, which is fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Status. Valid values: 0 (disabled), 1 (enabled)
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYSTATUSREQUEST_H_

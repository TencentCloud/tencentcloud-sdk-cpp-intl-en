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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYDEFENDSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYDEFENDSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyDefendStatus request structure.
                */
                class ModifyDefendStatusRequest : public AbstractModel
                {
                public:
                    ModifyDefendStatusRequest();
                    ~ModifyDefendStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable protection.
                     * @return SwitchOn Whether to enable protection.
                     * 
                     */
                    bool GetSwitchOn() const;

                    /**
                     * 设置Whether to enable protection.
                     * @param _switchOn Whether to enable protection.
                     * 
                     */
                    void SetSwitchOn(const bool& _switchOn);

                    /**
                     * 判断参数 SwitchOn 是否已赋值
                     * @return SwitchOn 是否已赋值
                     * 
                     */
                    bool SwitchOnHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values:<li>Cluster;</li> <li>Node.</li>
                     * @return InstanceType Instance type. Valid values:<li>Cluster;</li> <li>Node.</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type. Valid values:<li>Cluster;</li> <li>Node.</li>
                     * @param _instanceType Instance type. Valid values:<li>Cluster;</li> <li>Node.</li>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Whether all instances are involved.
                     * @return IsAll Whether all instances are involved.
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置Whether all instances are involved.
                     * @param _isAll Whether all instances are involved.
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取Instance ID list
                     * @return InstanceIDs Instance ID list
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置Instance ID list
                     * @param _instanceIDs Instance ID list
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                private:

                    /**
                     * Whether to enable protection.
                     */
                    bool m_switchOn;
                    bool m_switchOnHasBeenSet;

                    /**
                     * Instance type. Valid values:<li>Cluster;</li> <li>Node.</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Whether all instances are involved.
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * Instance ID list
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYDEFENDSTATUSREQUEST_H_

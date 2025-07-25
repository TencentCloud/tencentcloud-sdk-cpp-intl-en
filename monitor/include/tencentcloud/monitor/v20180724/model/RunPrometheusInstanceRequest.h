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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_RUNPROMETHEUSINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_RUNPROMETHEUSINSTANCEREQUEST_H_

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
                * RunPrometheusInstance request structure.
                */
                class RunPrometheusInstanceRequest : public AbstractModel
                {
                public:
                    RunPrometheusInstanceRequest();
                    ~RunPrometheusInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID. Initialization is performed with the subnet used by the instance by default and can also be performed with the subnet passed in by this parameter.
                     * @return SubnetId Subnet ID. Initialization is performed with the subnet used by the instance by default and can also be performed with the subnet passed in by this parameter.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. Initialization is performed with the subnet used by the instance by default and can also be performed with the subnet passed in by this parameter.
                     * @param _subnetId Subnet ID. Initialization is performed with the subnet used by the instance by default and can also be performed with the subnet passed in by this parameter.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Subnet ID. Initialization is performed with the subnet used by the instance by default and can also be performed with the subnet passed in by this parameter.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_RUNPROMETHEUSINSTANCEREQUEST_H_

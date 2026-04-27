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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ModifyInstanceAttribute request structure.
                */
                class ModifyInstanceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAttributeRequest();
                    ~ModifyInstanceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取New instance name, 1-60 characters. Import at least one with NewPublicIp.
                     * @return InstanceName New instance name, 1-60 characters. Import at least one with NewPublicIp.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置New instance name, 1-60 characters. Import at least one with NewPublicIp.
                     * @param _instanceName New instance name, 1-60 characters. Import at least one with NewPublicIp.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取New public IP address (select from available IP addresses of the public network instance bound to the instance). Provide at least one of this or InstanceName.
                     * @return NewPublicIp New public IP address (select from available IP addresses of the public network instance bound to the instance). Provide at least one of this or InstanceName.
                     * 
                     */
                    std::string GetNewPublicIp() const;

                    /**
                     * 设置New public IP address (select from available IP addresses of the public network instance bound to the instance). Provide at least one of this or InstanceName.
                     * @param _newPublicIp New public IP address (select from available IP addresses of the public network instance bound to the instance). Provide at least one of this or InstanceName.
                     * 
                     */
                    void SetNewPublicIp(const std::string& _newPublicIp);

                    /**
                     * 判断参数 NewPublicIp 是否已赋值
                     * @return NewPublicIp 是否已赋值
                     * 
                     */
                    bool NewPublicIpHasBeenSet() const;

                    /**
                     * 获取IP type, ipv4 or ipv6. Default is ipv4. Valid only when NewPublicIp is specified.
                     * @return IpType IP type, ipv4 or ipv6. Default is ipv4. Valid only when NewPublicIp is specified.
                     * 
                     */
                    std::string GetIpType() const;

                    /**
                     * 设置IP type, ipv4 or ipv6. Default is ipv4. Valid only when NewPublicIp is specified.
                     * @param _ipType IP type, ipv4 or ipv6. Default is ipv4. Valid only when NewPublicIp is specified.
                     * 
                     */
                    void SetIpType(const std::string& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * New instance name, 1-60 characters. Import at least one with NewPublicIp.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * New public IP address (select from available IP addresses of the public network instance bound to the instance). Provide at least one of this or InstanceName.
                     */
                    std::string m_newPublicIp;
                    bool m_newPublicIpHasBeenSet;

                    /**
                     * IP type, ipv4 or ipv6. Default is ipv4. Valid only when NewPublicIp is specified.
                     */
                    std::string m_ipType;
                    bool m_ipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_MODIFYINSTANCEATTRIBUTEREQUEST_H_

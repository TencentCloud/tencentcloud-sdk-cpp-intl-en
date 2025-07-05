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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENMACHINESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENMACHINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScreenMachines request structure.
                */
                class DescribeScreenMachinesRequest : public AbstractModel
                {
                public:
                    DescribeScreenMachinesRequest();
                    ~DescribeScreenMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Host region
                     * @return MachineRegion Host region
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置Host region
                     * @param _machineRegion Host region
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取Private IP address or host alias
                     * @return MachineIpOrAlias Private IP address or host alias
                     * 
                     */
                    std::string GetMachineIpOrAlias() const;

                    /**
                     * 设置Private IP address or host alias
                     * @param _machineIpOrAlias Private IP address or host alias
                     * 
                     */
                    void SetMachineIpOrAlias(const std::string& _machineIpOrAlias);

                    /**
                     * 判断参数 MachineIpOrAlias 是否已赋值
                     * @return MachineIpOrAlias 是否已赋值
                     * 
                     */
                    bool MachineIpOrAliasHasBeenSet() const;

                    /**
                     * 获取Risky host type. 0: all types; 1: risky host; 2: host with potential risks; 3: host that is shut down or offline; 4: host with no risk.
                     * @return SecurityStatus Risky host type. 0: all types; 1: risky host; 2: host with potential risks; 3: host that is shut down or offline; 4: host with no risk.
                     * 
                     */
                    uint64_t GetSecurityStatus() const;

                    /**
                     * 设置Risky host type. 0: all types; 1: risky host; 2: host with potential risks; 3: host that is shut down or offline; 4: host with no risk.
                     * @param _securityStatus Risky host type. 0: all types; 1: risky host; 2: host with potential risks; 3: host that is shut down or offline; 4: host with no risk.
                     * 
                     */
                    void SetSecurityStatus(const uint64_t& _securityStatus);

                    /**
                     * 判断参数 SecurityStatus 是否已赋值
                     * @return SecurityStatus 是否已赋值
                     * 
                     */
                    bool SecurityStatusHasBeenSet() const;

                private:

                    /**
                     * Host region
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * Private IP address or host alias
                     */
                    std::string m_machineIpOrAlias;
                    bool m_machineIpOrAliasHasBeenSet;

                    /**
                     * Risky host type. 0: all types; 1: risky host; 2: host with potential risks; 3: host that is shut down or offline; 4: host with no risk.
                     */
                    uint64_t m_securityStatus;
                    bool m_securityStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENMACHINESREQUEST_H_

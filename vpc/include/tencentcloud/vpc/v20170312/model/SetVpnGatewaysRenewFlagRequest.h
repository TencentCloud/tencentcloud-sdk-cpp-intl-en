/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SETVPNGATEWAYSRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SETVPNGATEWAYSRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SetVpnGatewaysRenewFlag request structure.
                */
                class SetVpnGatewaysRenewFlagRequest : public AbstractModel
                {
                public:
                    SetVpnGatewaysRenewFlagRequest();
                    ~SetVpnGatewaysRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPN gateway IDs
                     * @return VpnGatewayIds VPN gateway IDs
                     */
                    std::vector<std::string> GetVpnGatewayIds() const;

                    /**
                     * 设置VPN gateway IDs
                     * @param VpnGatewayIds VPN gateway IDs
                     */
                    void SetVpnGatewayIds(const std::vector<std::string>& _vpnGatewayIds);

                    /**
                     * 判断参数 VpnGatewayIds 是否已赋值
                     * @return VpnGatewayIds 是否已赋值
                     */
                    bool VpnGatewayIdsHasBeenSet() const;

                    /**
                     * 获取Status of auto-renewal
Values: `0` (Follow original), `1` (Enable auto-renewal), `2` (Disable auto-renewal) 
                     * @return AutoRenewFlag Status of auto-renewal
Values: `0` (Follow original), `1` (Enable auto-renewal), `2` (Disable auto-renewal) 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Status of auto-renewal
Values: `0` (Follow original), `1` (Enable auto-renewal), `2` (Disable auto-renewal) 
                     * @param AutoRenewFlag Status of auto-renewal
Values: `0` (Follow original), `1` (Enable auto-renewal), `2` (Disable auto-renewal) 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取VPNGW type: `IPSEC`, `SSL`
                     * @return Type VPNGW type: `IPSEC`, `SSL`
                     */
                    std::string GetType() const;

                    /**
                     * 设置VPNGW type: `IPSEC`, `SSL`
                     * @param Type VPNGW type: `IPSEC`, `SSL`
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * VPN gateway IDs
                     */
                    std::vector<std::string> m_vpnGatewayIds;
                    bool m_vpnGatewayIdsHasBeenSet;

                    /**
                     * Status of auto-renewal
Values: `0` (Follow original), `1` (Enable auto-renewal), `2` (Disable auto-renewal) 
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * VPNGW type: `IPSEC`, `SSL`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SETVPNGATEWAYSRENEWFLAGREQUEST_H_

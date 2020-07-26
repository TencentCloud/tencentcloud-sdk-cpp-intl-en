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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The direct connect gateway object.
                */
                class DirectConnectGateway : public AbstractModel
                {
                public:
                    DirectConnectGateway();
                    ~DirectConnectGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The direct connect gateway ID.
                     * @return DirectConnectGatewayId The direct connect gateway ID.
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The direct connect gateway ID.
                     * @param DirectConnectGatewayId The direct connect gateway ID.
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取The direct connect gateway name.
                     * @return DirectConnectGatewayName The direct connect gateway name.
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置The direct connect gateway name.
                     * @param DirectConnectGatewayName The direct connect gateway name.
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取The ID of the VPC instance associated with the direct connect gateway.
                     * @return VpcId The ID of the VPC instance associated with the direct connect gateway.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The ID of the VPC instance associated with the direct connect gateway.
                     * @param VpcId The ID of the VPC instance associated with the direct connect gateway.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     * @return NetworkType The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     * @param NetworkType The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取The ID of the associated network instance:
<li>When the `NetworkType` is `VPC`, this value is the VPC instance ID</li>
<li>When the `NetworkType` is `CCN`, this value is the CCN instance ID</li>
                     * @return NetworkInstanceId The ID of the associated network instance:
<li>When the `NetworkType` is `VPC`, this value is the VPC instance ID</li>
<li>When the `NetworkType` is `CCN`, this value is the CCN instance ID</li>
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置The ID of the associated network instance:
<li>When the `NetworkType` is `VPC`, this value is the VPC instance ID</li>
<li>When the `NetworkType` is `CCN`, this value is the CCN instance ID</li>
                     * @param NetworkInstanceId The ID of the associated network instance:
<li>When the `NetworkType` is `VPC`, this value is the VPC instance ID</li>
<li>When the `NetworkType` is `CCN`, this value is the CCN instance ID</li>
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取The gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT type</li>
The NAT type supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     * @return GatewayType The gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT type</li>
The NAT type supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置The gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT type</li>
The NAT type supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     * @param GatewayType The gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT type</li>
The NAT type supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param CreateTime The creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The direct connect gateway IP.
                     * @return DirectConnectGatewayIp The direct connect gateway IP.
                     */
                    std::string GetDirectConnectGatewayIp() const;

                    /**
                     * 设置The direct connect gateway IP.
                     * @param DirectConnectGatewayIp The direct connect gateway IP.
                     */
                    void SetDirectConnectGatewayIp(const std::string& _directConnectGatewayIp);

                    /**
                     * 判断参数 DirectConnectGatewayIp 是否已赋值
                     * @return DirectConnectGatewayIp 是否已赋值
                     */
                    bool DirectConnectGatewayIpHasBeenSet() const;

                    /**
                     * 获取The ID of the CCN instance associated with the direct connect gateway.
                     * @return CcnId The ID of the CCN instance associated with the direct connect gateway.
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置The ID of the CCN instance associated with the direct connect gateway.
                     * @param CcnId The ID of the CCN instance associated with the direct connect gateway.
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     * @return CcnRouteType The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     * @param CcnRouteType The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取Whether the BGP is enabled.
                     * @return EnableBGP Whether the BGP is enabled.
                     */
                    bool GetEnableBGP() const;

                    /**
                     * 设置Whether the BGP is enabled.
                     * @param EnableBGP Whether the BGP is enabled.
                     */
                    void SetEnableBGP(const bool& _enableBGP);

                    /**
                     * 判断参数 EnableBGP 是否已赋值
                     * @return EnableBGP 是否已赋值
                     */
                    bool EnableBGPHasBeenSet() const;

                    /**
                     * 获取Whether the `community` attribute of the BGP is enabled.
                     * @return EnableBGPCommunity Whether the `community` attribute of the BGP is enabled.
                     */
                    bool GetEnableBGPCommunity() const;

                    /**
                     * 设置Whether the `community` attribute of the BGP is enabled.
                     * @param EnableBGPCommunity Whether the `community` attribute of the BGP is enabled.
                     */
                    void SetEnableBGPCommunity(const bool& _enableBGPCommunity);

                    /**
                     * 判断参数 EnableBGPCommunity 是否已赋值
                     * @return EnableBGPCommunity 是否已赋值
                     */
                    bool EnableBGPCommunityHasBeenSet() const;

                private:

                    /**
                     * The direct connect gateway ID.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * The direct connect gateway name.
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * The ID of the VPC instance associated with the direct connect gateway.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The associated network type:
<li>`VPC` - VPC</li>
<li>`CCN` - CCN</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * The ID of the associated network instance:
<li>When the `NetworkType` is `VPC`, this value is the VPC instance ID</li>
<li>When the `NetworkType` is `CCN`, this value is the CCN instance ID</li>
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * The gateway type:
<li>NORMAL - Standard type. Note: CCN only supports the standard type</li>
<li>NAT type</li>
The NAT type supports network address translation. The specified type cannot be modified. A VPC can create one NAT direct connect gateway and one non-NAT direct connect gateway
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The direct connect gateway IP.
                     */
                    std::string m_directConnectGatewayIp;
                    bool m_directConnectGatewayIpHasBeenSet;

                    /**
                     * The ID of the CCN instance associated with the direct connect gateway.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * The route-learning type of the CCN:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static, that is, user-configured.</li>
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * Whether the BGP is enabled.
                     */
                    bool m_enableBGP;
                    bool m_enableBGPHasBeenSet;

                    /**
                     * Whether the `community` attribute of the BGP is enabled.
                     */
                    bool m_enableBGPCommunity;
                    bool m_enableBGPCommunityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAY_H_

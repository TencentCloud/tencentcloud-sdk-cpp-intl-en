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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDIRECTCONNECTGATEWAYATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDIRECTCONNECTGATEWAYATTRIBUTEREQUEST_H_

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
                * ModifyDirectConnectGatewayAttribute request structure.
                */
                class ModifyDirectConnectGatewayAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDirectConnectGatewayAttributeRequest();
                    ~ModifyDirectConnectGatewayAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the direct connect gateway, such as `dcg-9o233uri`.
                     * @return DirectConnectGatewayId The unique ID of the direct connect gateway, such as `dcg-9o233uri`.
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The unique ID of the direct connect gateway, such as `dcg-9o233uri`.
                     * @param _directConnectGatewayId The unique ID of the direct connect gateway, such as `dcg-9o233uri`.
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取The direct connect gateway name. You can enter any name within 60 characters.
                     * @return DirectConnectGatewayName The direct connect gateway name. You can enter any name within 60 characters.
                     * 
                     */
                    std::string GetDirectConnectGatewayName() const;

                    /**
                     * 设置The direct connect gateway name. You can enter any name within 60 characters.
                     * @param _directConnectGatewayName The direct connect gateway name. You can enter any name within 60 characters.
                     * 
                     */
                    void SetDirectConnectGatewayName(const std::string& _directConnectGatewayName);

                    /**
                     * 判断参数 DirectConnectGatewayName 是否已赋值
                     * @return DirectConnectGatewayName 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayNameHasBeenSet() const;

                    /**
                     * 获取The CCN route-learning type. Valid values: `BGP` (Automatic learning), `STATIC` (Static, that is, user-configured). You can only modify `CcnRouteType` for a CCN direct connect gateway with BGP enabled.
                     * @return CcnRouteType The CCN route-learning type. Valid values: `BGP` (Automatic learning), `STATIC` (Static, that is, user-configured). You can only modify `CcnRouteType` for a CCN direct connect gateway with BGP enabled.
                     * 
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置The CCN route-learning type. Valid values: `BGP` (Automatic learning), `STATIC` (Static, that is, user-configured). You can only modify `CcnRouteType` for a CCN direct connect gateway with BGP enabled.
                     * @param _ccnRouteType The CCN route-learning type. Valid values: `BGP` (Automatic learning), `STATIC` (Static, that is, user-configured). You can only modify `CcnRouteType` for a CCN direct connect gateway with BGP enabled.
                     * 
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     * 
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取CCN route publishing method. Valid values: `standard` and `exquisite`. You can only modify `ModeType` for a CCN direct connect gateway.
                     * @return ModeType CCN route publishing method. Valid values: `standard` and `exquisite`. You can only modify `ModeType` for a CCN direct connect gateway.
                     * 
                     */
                    std::string GetModeType() const;

                    /**
                     * 设置CCN route publishing method. Valid values: `standard` and `exquisite`. You can only modify `ModeType` for a CCN direct connect gateway.
                     * @param _modeType CCN route publishing method. Valid values: `standard` and `exquisite`. You can only modify `ModeType` for a CCN direct connect gateway.
                     * 
                     */
                    void SetModeType(const std::string& _modeType);

                    /**
                     * 判断参数 ModeType 是否已赋值
                     * @return ModeType 是否已赋值
                     * 
                     */
                    bool ModeTypeHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the direct connect gateway, such as `dcg-9o233uri`.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * The direct connect gateway name. You can enter any name within 60 characters.
                     */
                    std::string m_directConnectGatewayName;
                    bool m_directConnectGatewayNameHasBeenSet;

                    /**
                     * The CCN route-learning type. Valid values: `BGP` (Automatic learning), `STATIC` (Static, that is, user-configured). You can only modify `CcnRouteType` for a CCN direct connect gateway with BGP enabled.
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * CCN route publishing method. Valid values: `standard` and `exquisite`. You can only modify `ModeType` for a CCN direct connect gateway.
                     */
                    std::string m_modeType;
                    bool m_modeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYDIRECTCONNECTGATEWAYATTRIBUTEREQUEST_H_

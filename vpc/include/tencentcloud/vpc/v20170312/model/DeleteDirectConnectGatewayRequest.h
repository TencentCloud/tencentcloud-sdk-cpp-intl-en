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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEDIRECTCONNECTGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEDIRECTCONNECTGATEWAYREQUEST_H_

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
                * DeleteDirectConnectGateway request structure.
                */
                class DeleteDirectConnectGatewayRequest : public AbstractModel
                {
                public:
                    DeleteDirectConnectGatewayRequest();
                    ~DeleteDirectConnectGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique `ID` of the direct connect gateway, such as `dcg-9o233uri`.
                     * @return DirectConnectGatewayId The unique `ID` of the direct connect gateway, such as `dcg-9o233uri`.
                     * 
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The unique `ID` of the direct connect gateway, such as `dcg-9o233uri`.
                     * @param _directConnectGatewayId The unique `ID` of the direct connect gateway, such as `dcg-9o233uri`.
                     * 
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                private:

                    /**
                     * The unique `ID` of the direct connect gateway, such as `dcg-9o233uri`.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEDIRECTCONNECTGATEWAYREQUEST_H_

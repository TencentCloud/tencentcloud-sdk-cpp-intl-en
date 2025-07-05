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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYLOCALGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYLOCALGATEWAYREQUEST_H_

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
                * ModifyLocalGateway request structure.
                */
                class ModifyLocalGatewayRequest : public AbstractModel
                {
                public:
                    ModifyLocalGatewayRequest();
                    ~ModifyLocalGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Local gateway name
                     * @return LocalGatewayName Local gateway name
                     * 
                     */
                    std::string GetLocalGatewayName() const;

                    /**
                     * 设置Local gateway name
                     * @param _localGatewayName Local gateway name
                     * 
                     */
                    void SetLocalGatewayName(const std::string& _localGatewayName);

                    /**
                     * 判断参数 LocalGatewayName 是否已赋值
                     * @return LocalGatewayName 是否已赋值
                     * 
                     */
                    bool LocalGatewayNameHasBeenSet() const;

                    /**
                     * 获取CDC instance ID
                     * @return CdcId CDC instance ID
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC instance ID
                     * @param _cdcId CDC instance ID
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取Local gateway instance ID
                     * @return LocalGatewayId Local gateway instance ID
                     * 
                     */
                    std::string GetLocalGatewayId() const;

                    /**
                     * 设置Local gateway instance ID
                     * @param _localGatewayId Local gateway instance ID
                     * 
                     */
                    void SetLocalGatewayId(const std::string& _localGatewayId);

                    /**
                     * 判断参数 LocalGatewayId 是否已赋值
                     * @return LocalGatewayId 是否已赋值
                     * 
                     */
                    bool LocalGatewayIdHasBeenSet() const;

                    /**
                     * 获取VPC instance ID
                     * @return VpcId VPC instance ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID
                     * @param _vpcId VPC instance ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * Local gateway name
                     */
                    std::string m_localGatewayName;
                    bool m_localGatewayNameHasBeenSet;

                    /**
                     * CDC instance ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * Local gateway instance ID
                     */
                    std::string m_localGatewayId;
                    bool m_localGatewayIdHasBeenSet;

                    /**
                     * VPC instance ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYLOCALGATEWAYREQUEST_H_

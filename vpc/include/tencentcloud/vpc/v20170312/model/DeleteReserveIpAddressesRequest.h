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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETERESERVEIPADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETERESERVEIPADDRESSESREQUEST_H_

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
                * DeleteReserveIpAddresses request structure.
                */
                class DeleteReserveIpAddressesRequest : public AbstractModel
                {
                public:
                    DeleteReserveIpAddressesRequest();
                    ~DeleteReserveIpAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the VPC.
                     * @return VpcId Unique ID of the VPC.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of the VPC.
                     * @param _vpcId Unique ID of the VPC.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取List of reserved private IP addresses.
                     * @return ReserveIpIds List of reserved private IP addresses.
                     * 
                     */
                    std::vector<std::string> GetReserveIpIds() const;

                    /**
                     * 设置List of reserved private IP addresses.
                     * @param _reserveIpIds List of reserved private IP addresses.
                     * 
                     */
                    void SetReserveIpIds(const std::vector<std::string>& _reserveIpIds);

                    /**
                     * 判断参数 ReserveIpIds 是否已赋值
                     * @return ReserveIpIds 是否已赋值
                     * 
                     */
                    bool ReserveIpIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * List of reserved private IP addresses.
                     */
                    std::vector<std::string> m_reserveIpIds;
                    bool m_reserveIpIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETERESERVEIPADDRESSESREQUEST_H_

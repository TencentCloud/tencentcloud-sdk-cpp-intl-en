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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPRIVATEIPADDRESSESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPRIVATEIPADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/VpcPrivateIpAddress.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcPrivateIpAddresses response structure.
                */
                class DescribeVpcPrivateIpAddressesResponse : public AbstractModel
                {
                public:
                    DescribeVpcPrivateIpAddressesResponse();
                    ~DescribeVpcPrivateIpAddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of private `IP` address information.
                     * @return VpcPrivateIpAddressSet The list of private `IP` address information.
                     * 
                     */
                    std::vector<VpcPrivateIpAddress> GetVpcPrivateIpAddressSet() const;

                    /**
                     * 判断参数 VpcPrivateIpAddressSet 是否已赋值
                     * @return VpcPrivateIpAddressSet 是否已赋值
                     * 
                     */
                    bool VpcPrivateIpAddressSetHasBeenSet() const;

                private:

                    /**
                     * The list of private `IP` address information.
                     */
                    std::vector<VpcPrivateIpAddress> m_vpcPrivateIpAddressSet;
                    bool m_vpcPrivateIpAddressSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCPRIVATEIPADDRESSESRESPONSE_H_

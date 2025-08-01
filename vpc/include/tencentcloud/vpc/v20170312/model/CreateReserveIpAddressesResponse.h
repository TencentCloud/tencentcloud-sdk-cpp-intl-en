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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ReserveIpAddressInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateReserveIpAddresses response structure.
                */
                class CreateReserveIpAddressesResponse : public AbstractModel
                {
                public:
                    CreateReserveIpAddressesResponse();
                    ~CreateReserveIpAddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information returned from the reserved private IP address.
                     * @return ReserveIpAddressSet Information returned from the reserved private IP address.
                     * 
                     */
                    std::vector<ReserveIpAddressInfo> GetReserveIpAddressSet() const;

                    /**
                     * 判断参数 ReserveIpAddressSet 是否已赋值
                     * @return ReserveIpAddressSet 是否已赋值
                     * 
                     */
                    bool ReserveIpAddressSetHasBeenSet() const;

                private:

                    /**
                     * Information returned from the reserved private IP address.
                     */
                    std::vector<ReserveIpAddressInfo> m_reserveIpAddressSet;
                    bool m_reserveIpAddressSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATERESERVEIPADDRESSESRESPONSE_H_

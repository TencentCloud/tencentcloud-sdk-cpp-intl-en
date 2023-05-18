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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RETURNNORMALADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RETURNNORMALADDRESSESREQUEST_H_

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
                * ReturnNormalAddresses request structure.
                */
                class ReturnNormalAddressesRequest : public AbstractModel
                {
                public:
                    ReturnNormalAddressesRequest();
                    ~ReturnNormalAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP addresses. Example: 101.35.139.183
                     * @return AddressIps EIP addresses. Example: 101.35.139.183
                     */
                    std::vector<std::string> GetAddressIps() const;

                    /**
                     * 设置EIP addresses. Example: 101.35.139.183
                     * @param AddressIps EIP addresses. Example: 101.35.139.183
                     */
                    void SetAddressIps(const std::vector<std::string>& _addressIps);

                    /**
                     * 判断参数 AddressIps 是否已赋值
                     * @return AddressIps 是否已赋值
                     */
                    bool AddressIpsHasBeenSet() const;

                private:

                    /**
                     * EIP addresses. Example: 101.35.139.183
                     */
                    std::vector<std::string> m_addressIps;
                    bool m_addressIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RETURNNORMALADDRESSESREQUEST_H_

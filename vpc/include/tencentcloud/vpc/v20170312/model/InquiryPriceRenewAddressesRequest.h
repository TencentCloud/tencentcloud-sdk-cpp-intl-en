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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICERENEWADDRESSESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICERENEWADDRESSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressChargePrepaid.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewAddresses request structure.
                */
                class InquiryPriceRenewAddressesRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewAddressesRequest();
                    ~InquiryPriceRenewAddressesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Indicates the renewal resource instance ID.
                     * @return AddressIds Indicates the renewal resource instance ID.
                     * 
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置Indicates the renewal resource instance ID.
                     * @param _addressIds Indicates the renewal resource instance ID.
                     * 
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     * 
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH", this parameter is required. For other scenarios, it can be ignored.
                     * @return AddressChargePrepaid A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH", this parameter is required. For other scenarios, it can be ignored.
                     * 
                     */
                    AddressChargePrepaid GetAddressChargePrepaid() const;

                    /**
                     * 设置A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH", this parameter is required. For other scenarios, it can be ignored.
                     * @param _addressChargePrepaid A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH", this parameter is required. For other scenarios, it can be ignored.
                     * 
                     */
                    void SetAddressChargePrepaid(const AddressChargePrepaid& _addressChargePrepaid);

                    /**
                     * 判断参数 AddressChargePrepaid 是否已赋值
                     * @return AddressChargePrepaid 是否已赋值
                     * 
                     */
                    bool AddressChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * Indicates the renewal resource instance ID.
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * A required billing parameter for an EIP billed by "BANDWIDTH_PREPAID_BY_MONTH". When the EIP is billed by "BANDWIDTH_PREPAID_BY_MONTH", this parameter is required. For other scenarios, it can be ignored.
                     */
                    AddressChargePrepaid m_addressChargePrepaid;
                    bool m_addressChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INQUIRYPRICERENEWADDRESSESREQUEST_H_

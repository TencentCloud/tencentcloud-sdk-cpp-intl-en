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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEADDRESSESRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Address.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeAddresses response structure.
                */
                class DescribeAddressesResponse : public AbstractModel
                {
                public:
                    DescribeAddressesResponse();
                    ~DescribeAddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible EIPs.
                     * @return TotalCount Number of eligible EIPs.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of EIP details.
                     * @return AddressSet List of EIP details.
                     * 
                     */
                    std::vector<Address> GetAddressSet() const;

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     * 
                     */
                    bool AddressSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible EIPs.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of EIP details.
                     */
                    std::vector<Address> m_addressSet;
                    bool m_addressSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEADDRESSESRESPONSE_H_

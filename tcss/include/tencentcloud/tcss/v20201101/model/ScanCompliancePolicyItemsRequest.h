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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCEPOLICYITEMSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCEPOLICYITEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ScanCompliancePolicyItems request structure.
                */
                class ScanCompliancePolicyItemsRequest : public AbstractModel
                {
                public:
                    ScanCompliancePolicyItemsRequest();
                    ~ScanCompliancePolicyItemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of customer check items to be scanned again
                     * @return CustomerPolicyItemIdSet List of customer check items to be scanned again
                     * 
                     */
                    std::vector<uint64_t> GetCustomerPolicyItemIdSet() const;

                    /**
                     * 设置List of customer check items to be scanned again
                     * @param _customerPolicyItemIdSet List of customer check items to be scanned again
                     * 
                     */
                    void SetCustomerPolicyItemIdSet(const std::vector<uint64_t>& _customerPolicyItemIdSet);

                    /**
                     * 判断参数 CustomerPolicyItemIdSet 是否已赋值
                     * @return CustomerPolicyItemIdSet 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdSetHasBeenSet() const;

                private:

                    /**
                     * List of customer check items to be scanned again
                     */
                    std::vector<uint64_t> m_customerPolicyItemIdSet;
                    bool m_customerPolicyItemIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCEPOLICYITEMSREQUEST_H_

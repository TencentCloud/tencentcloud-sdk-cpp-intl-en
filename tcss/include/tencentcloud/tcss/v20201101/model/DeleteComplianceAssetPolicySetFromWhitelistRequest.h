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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETECOMPLIANCEASSETPOLICYSETFROMWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETECOMPLIANCEASSETPOLICYSETFROMWHITELISTREQUEST_H_

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
                * DeleteComplianceAssetPolicySetFromWhitelist request structure.
                */
                class DeleteComplianceAssetPolicySetFromWhitelistRequest : public AbstractModel
                {
                public:
                    DeleteComplianceAssetPolicySetFromWhitelistRequest();
                    ~DeleteComplianceAssetPolicySetFromWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset ID
                     * @return AssetItemId Asset ID
                     * 
                     */
                    uint64_t GetAssetItemId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetItemId Asset ID
                     * 
                     */
                    void SetAssetItemId(const uint64_t& _assetItemId);

                    /**
                     * 判断参数 AssetItemId 是否已赋值
                     * @return AssetItemId 是否已赋值
                     * 
                     */
                    bool AssetItemIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of check items to be ignored in the specified asset
                     * @return CustomerPolicyItemIdSet List of IDs of check items to be ignored in the specified asset
                     * 
                     */
                    std::vector<uint64_t> GetCustomerPolicyItemIdSet() const;

                    /**
                     * 设置List of IDs of check items to be ignored in the specified asset
                     * @param _customerPolicyItemIdSet List of IDs of check items to be ignored in the specified asset
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
                     * Asset ID
                     */
                    uint64_t m_assetItemId;
                    bool m_assetItemIdHasBeenSet;

                    /**
                     * List of IDs of check items to be ignored in the specified asset
                     */
                    std::vector<uint64_t> m_customerPolicyItemIdSet;
                    bool m_customerPolicyItemIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETECOMPLIANCEASSETPOLICYSETFROMWHITELISTREQUEST_H_

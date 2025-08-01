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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYASSETSETITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYASSETSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * List of check item IDs and asset IDs
                */
                class CompliancePolicyAssetSetItem : public AbstractModel
                {
                public:
                    CompliancePolicyAssetSetItem();
                    ~CompliancePolicyAssetSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Check item ID
                     * @return CustomerPolicyItemId Check item ID
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置Check item ID
                     * @param _customerPolicyItemId Check item ID
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of assets to be ignored in the specified check item. If it is empty, it indicates all.
                     * @return CustomerAssetItemIdSet List of IDs of assets to be ignored in the specified check item. If it is empty, it indicates all.
                     * 
                     */
                    std::vector<uint64_t> GetCustomerAssetItemIdSet() const;

                    /**
                     * 设置List of IDs of assets to be ignored in the specified check item. If it is empty, it indicates all.
                     * @param _customerAssetItemIdSet List of IDs of assets to be ignored in the specified check item. If it is empty, it indicates all.
                     * 
                     */
                    void SetCustomerAssetItemIdSet(const std::vector<uint64_t>& _customerAssetItemIdSet);

                    /**
                     * 判断参数 CustomerAssetItemIdSet 是否已赋值
                     * @return CustomerAssetItemIdSet 是否已赋值
                     * 
                     */
                    bool CustomerAssetItemIdSetHasBeenSet() const;

                private:

                    /**
                     * Check item ID
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * List of IDs of assets to be ignored in the specified check item. If it is empty, it indicates all.
                     */
                    std::vector<uint64_t> m_customerAssetItemIdSet;
                    bool m_customerAssetItemIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYASSETSETITEM_H_

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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETECOMPLIANCEPOLICYASSETSETFROMWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETECOMPLIANCEPOLICYASSETSETFROMWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/CompliancePolicyAssetSetItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteCompliancePolicyAssetSetFromWhitelist request structure.
                */
                class DeleteCompliancePolicyAssetSetFromWhitelistRequest : public AbstractModel
                {
                public:
                    DeleteCompliancePolicyAssetSetFromWhitelistRequest();
                    ~DeleteCompliancePolicyAssetSetFromWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of check item IDs and asset IDs
                     * @return PolicyAssetSetList List of check item IDs and asset IDs
                     * 
                     */
                    std::vector<CompliancePolicyAssetSetItem> GetPolicyAssetSetList() const;

                    /**
                     * 设置List of check item IDs and asset IDs
                     * @param _policyAssetSetList List of check item IDs and asset IDs
                     * 
                     */
                    void SetPolicyAssetSetList(const std::vector<CompliancePolicyAssetSetItem>& _policyAssetSetList);

                    /**
                     * 判断参数 PolicyAssetSetList 是否已赋值
                     * @return PolicyAssetSetList 是否已赋值
                     * 
                     */
                    bool PolicyAssetSetListHasBeenSet() const;

                private:

                    /**
                     * List of check item IDs and asset IDs
                     */
                    std::vector<CompliancePolicyAssetSetItem> m_policyAssetSetList;
                    bool m_policyAssetSetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETECOMPLIANCEPOLICYASSETSETFROMWHITELISTREQUEST_H_

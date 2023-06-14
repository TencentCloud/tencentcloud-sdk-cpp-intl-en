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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDCOMPLIANCEASSETPOLICYSETTOWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDCOMPLIANCEASSETPOLICYSETTOWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceAssetPolicySetItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddComplianceAssetPolicySetToWhitelist request structure.
                */
                class AddComplianceAssetPolicySetToWhitelistRequest : public AbstractModel
                {
                public:
                    AddComplianceAssetPolicySetToWhitelistRequest();
                    ~AddComplianceAssetPolicySetToWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of asset IDs and check item IDs
                     * @return AssetPolicySetList List of asset IDs and check item IDs
                     * 
                     */
                    std::vector<ComplianceAssetPolicySetItem> GetAssetPolicySetList() const;

                    /**
                     * 设置List of asset IDs and check item IDs
                     * @param _assetPolicySetList List of asset IDs and check item IDs
                     * 
                     */
                    void SetAssetPolicySetList(const std::vector<ComplianceAssetPolicySetItem>& _assetPolicySetList);

                    /**
                     * 判断参数 AssetPolicySetList 是否已赋值
                     * @return AssetPolicySetList 是否已赋值
                     * 
                     */
                    bool AssetPolicySetListHasBeenSet() const;

                private:

                    /**
                     * List of asset IDs and check item IDs
                     */
                    std::vector<ComplianceAssetPolicySetItem> m_assetPolicySetList;
                    bool m_assetPolicySetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDCOMPLIANCEASSETPOLICYSETTOWHITELISTREQUEST_H_

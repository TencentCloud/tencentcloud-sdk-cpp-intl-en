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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCESCANFAILEDASSETSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCESCANFAILEDASSETSREQUEST_H_

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
                * ScanComplianceScanFailedAssets request structure.
                */
                class ScanComplianceScanFailedAssetsRequest : public AbstractModel
                {
                public:
                    ScanComplianceScanFailedAssetsRequest();
                    ~ScanComplianceScanFailedAssetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of customer assets to be scanned again
                     * @return CustomerAssetIdSet List of IDs of customer assets to be scanned again
                     * 
                     */
                    std::vector<uint64_t> GetCustomerAssetIdSet() const;

                    /**
                     * 设置List of IDs of customer assets to be scanned again
                     * @param _customerAssetIdSet List of IDs of customer assets to be scanned again
                     * 
                     */
                    void SetCustomerAssetIdSet(const std::vector<uint64_t>& _customerAssetIdSet);

                    /**
                     * 判断参数 CustomerAssetIdSet 是否已赋值
                     * @return CustomerAssetIdSet 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdSetHasBeenSet() const;

                private:

                    /**
                     * List of IDs of customer assets to be scanned again
                     */
                    std::vector<uint64_t> m_customerAssetIdSet;
                    bool m_customerAssetIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SCANCOMPLIANCESCANFAILEDASSETSREQUEST_H_

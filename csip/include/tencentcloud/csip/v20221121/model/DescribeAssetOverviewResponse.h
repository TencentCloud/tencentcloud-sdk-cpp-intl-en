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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetStatisticsInfo.h>
#include <tencentcloud/csip/v20221121/model/AssetProviderDistributeInfo.h>
#include <tencentcloud/csip/v20221121/model/AssetTypeStatisticsInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAssetOverview response structure.
                */
                class DescribeAssetOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAssetOverviewResponse();
                    ~DescribeAssetOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset overview statistics
                     * @return AssetOverview Asset overview statistics
                     * 
                     */
                    AssetStatisticsInfo GetAssetOverview() const;

                    /**
                     * 判断参数 AssetOverview 是否已赋值
                     * @return AssetOverview 是否已赋值
                     * 
                     */
                    bool AssetOverviewHasBeenSet() const;

                    /**
                     * 获取Number of assets of the cloud service provider
                     * @return AssetProviderDistribute Number of assets of the cloud service provider
                     * 
                     */
                    AssetProviderDistributeInfo GetAssetProviderDistribute() const;

                    /**
                     * 判断参数 AssetProviderDistribute 是否已赋值
                     * @return AssetProviderDistribute 是否已赋值
                     * 
                     */
                    bool AssetProviderDistributeHasBeenSet() const;

                    /**
                     * 获取Asset type and number of asset types with existing risks
                     * @return AssetTypeOverview Asset type and number of asset types with existing risks
                     * 
                     */
                    AssetTypeStatisticsInfo GetAssetTypeOverview() const;

                    /**
                     * 判断参数 AssetTypeOverview 是否已赋值
                     * @return AssetTypeOverview 是否已赋值
                     * 
                     */
                    bool AssetTypeOverviewHasBeenSet() const;

                private:

                    /**
                     * Asset overview statistics
                     */
                    AssetStatisticsInfo m_assetOverview;
                    bool m_assetOverviewHasBeenSet;

                    /**
                     * Number of assets of the cloud service provider
                     */
                    AssetProviderDistributeInfo m_assetProviderDistribute;
                    bool m_assetProviderDistributeHasBeenSet;

                    /**
                     * Asset type and number of asset types with existing risks
                     */
                    AssetTypeStatisticsInfo m_assetTypeOverview;
                    bool m_assetTypeOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETOVERVIEWRESPONSE_H_

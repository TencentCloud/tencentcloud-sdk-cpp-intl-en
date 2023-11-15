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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDBASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDBASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DBAssetVO.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDbAssets response structure.
                */
                class DescribeDbAssetsResponse : public AbstractModel
                {
                public:
                    DescribeDbAssetsResponse();
                    ~DescribeDbAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of results
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Total Total number of results
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Total of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Data Total of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DBAssetVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取List of regions
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RegionList List of regions
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetTypeList List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取List of VPCs
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VpcList List of VPCs
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetVpcList() const;

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取List of users (AppId)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppIdList List of users (AppId)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                private:

                    /**
                     * Total number of results
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<DBAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of regions
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * List of VPCs
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * List of users (AppId)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDBASSETSRESPONSE_H_

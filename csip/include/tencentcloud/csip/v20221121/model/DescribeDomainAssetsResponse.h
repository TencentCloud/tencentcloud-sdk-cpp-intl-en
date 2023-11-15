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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DomainAssetVO.h>
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
                * DescribeDomainAssets response structure.
                */
                class DescribeDomainAssetsResponse : public AbstractModel
                {
                public:
                    DescribeDomainAssetsResponse();
                    ~DescribeDomainAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取u200c-
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Total u200c-
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
                     * 获取u200c-
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Data u200c-
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DomainAssetVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取List of protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DefenseStatusList List of protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetDefenseStatusList() const;

                    /**
                     * 判断参数 DefenseStatusList 是否已赋值
                     * @return DefenseStatusList 是否已赋值
                     * 
                     */
                    bool DefenseStatusListHasBeenSet() const;

                    /**
                     * 获取List of asset locations
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetLocationList List of asset locations
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetAssetLocationList() const;

                    /**
                     * 判断参数 AssetLocationList 是否已赋值
                     * @return AssetLocationList 是否已赋值
                     * 
                     */
                    bool AssetLocationListHasBeenSet() const;

                    /**
                     * 获取List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SourceTypeList List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetSourceTypeList() const;

                    /**
                     * 判断参数 SourceTypeList 是否已赋值
                     * @return SourceTypeList 是否已赋值
                     * 
                     */
                    bool SourceTypeListHasBeenSet() const;

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

                private:

                    /**
                     * u200c-
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * u200c-
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<DomainAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * List of asset locations
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_assetLocationList;
                    bool m_assetLocationListHasBeenSet;

                    /**
                     * List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_sourceTypeList;
                    bool m_sourceTypeListHasBeenSet;

                    /**
                     * List of regions
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_

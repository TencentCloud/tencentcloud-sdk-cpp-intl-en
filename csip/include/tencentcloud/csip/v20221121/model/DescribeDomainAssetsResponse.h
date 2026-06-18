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
                     * 获取Total number.
                     * @return Total Total number.
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
                     * 获取Domain name list
                     * @return Data Domain name list
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
                     * 获取Protection Status List
                     * @return DefenseStatusList Protection Status List
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
                     * 获取Asset Attribution List
                     * @return AssetLocationList Asset Attribution List
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
                     * 获取Asset Type List
                     * @return SourceTypeList Asset Type List
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
                     * 获取Region list
                     * @return RegionList Region list
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
                     * Total number.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Domain name list
                     */
                    std::vector<DomainAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Protection Status List
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * Asset Attribution List
                     */
                    std::vector<FilterDataObject> m_assetLocationList;
                    bool m_assetLocationListHasBeenSet;

                    /**
                     * Asset Type List
                     */
                    std::vector<FilterDataObject> m_sourceTypeList;
                    bool m_sourceTypeListHasBeenSet;

                    /**
                     * Region list
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDOMAINASSETSRESPONSE_H_

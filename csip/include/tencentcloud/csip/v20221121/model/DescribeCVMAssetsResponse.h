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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CVMAssetVO.h>
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
                * DescribeCVMAssets response structure.
                */
                class DescribeCVMAssetsResponse : public AbstractModel
                {
                public:
                    DescribeCVMAssetsResponse();
                    ~DescribeCVMAssetsResponse() = default;
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
                    std::vector<CVMAssetVO> GetData() const;

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
                     * 获取Protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DefenseStatusList Protection status
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
                     * 获取List of operating systems
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SystemTypeList List of operating systems
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetSystemTypeList() const;

                    /**
                     * 判断参数 SystemTypeList 是否已赋值
                     * @return SystemTypeList 是否已赋值
                     * 
                     */
                    bool SystemTypeListHasBeenSet() const;

                    /**
                     * 获取List of IP types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IpTypeList List of IP types
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetIpTypeList() const;

                    /**
                     * 判断参数 IpTypeList 是否已赋值
                     * @return IpTypeList 是否已赋值
                     * 
                     */
                    bool IpTypeListHasBeenSet() const;

                    /**
                     * 获取List of AppIds
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppIdList List of AppIds
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

                    /**
                     * 获取List of availability zones
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ZoneList List of availability zones
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetZoneList() const;

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取List of operating systems
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OsList List of operating systems
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FilterDataObject> GetOsList() const;

                    /**
                     * 判断参数 OsList 是否已赋值
                     * @return OsList 是否已赋值
                     * 
                     */
                    bool OsListHasBeenSet() const;

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
                    std::vector<CVMAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of regions
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * Protection status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * List of VPCs
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * List of asset types
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * List of operating systems
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_systemTypeList;
                    bool m_systemTypeListHasBeenSet;

                    /**
                     * List of IP types
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_ipTypeList;
                    bool m_ipTypeListHasBeenSet;

                    /**
                     * List of AppIds
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * List of availability zones
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * List of operating systems
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_osList;
                    bool m_osListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_

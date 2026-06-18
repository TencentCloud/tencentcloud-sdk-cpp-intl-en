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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CVMAssetVO.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>
#include <tencentcloud/csip/v20221121/model/AssetInstanceTypeMap.h>


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
                     * 获取Machine list
                     * @return Data Machine list
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

                    /**
                     * 获取Protection status
                     * @return DefenseStatusList Protection status
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
                     * 获取VPC Enumeration
                     * @return VpcList VPC Enumeration
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
                     * 获取Asset Type Enumeration
                     * @return AssetTypeList Asset Type Enumeration
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
                     * 获取Operating System Enumeration
                     * @return SystemTypeList Operating System Enumeration
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
                     * 获取IP List
                     * @return IpTypeList IP List
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
                     * 获取AppID List
                     * @return AppIdList AppID List
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
                     * 获取Availability Zone List
                     * @return ZoneList Availability Zone List
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
                     * 获取OS List
                     * @return OsList OS List
                     * 
                     */
                    std::vector<FilterDataObject> GetOsList() const;

                    /**
                     * 判断参数 OsList 是否已赋值
                     * @return OsList 是否已赋值
                     * 
                     */
                    bool OsListHasBeenSet() const;

                    /**
                     * 获取Mapping of asset type and instance type.
                     * @return AssetMapInstanceTypeList Mapping of asset type and instance type.
                     * 
                     */
                    std::vector<AssetInstanceTypeMap> GetAssetMapInstanceTypeList() const;

                    /**
                     * 判断参数 AssetMapInstanceTypeList 是否已赋值
                     * @return AssetMapInstanceTypeList 是否已赋值
                     * 
                     */
                    bool AssetMapInstanceTypeListHasBeenSet() const;

                    /**
                     * 获取Public network private network enumeration.
                     * @return PublicPrivateAttr Public network private network enumeration.
                     * 
                     */
                    std::vector<FilterDataObject> GetPublicPrivateAttr() const;

                    /**
                     * 判断参数 PublicPrivateAttr 是否已赋值
                     * @return PublicPrivateAttr 是否已赋值
                     * 
                     */
                    bool PublicPrivateAttrHasBeenSet() const;

                    /**
                     * 获取Host protection status.
                     * @return ProtectStatusList Host protection status.
                     * 
                     */
                    std::vector<FilterDataObject> GetProtectStatusList() const;

                    /**
                     * 判断参数 ProtectStatusList 是否已赋值
                     * @return ProtectStatusList 是否已赋值
                     * 
                     */
                    bool ProtectStatusListHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Machine list
                     */
                    std::vector<CVMAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Region list
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * Protection status
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * VPC Enumeration
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * Asset Type Enumeration
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * Operating System Enumeration
                     */
                    std::vector<FilterDataObject> m_systemTypeList;
                    bool m_systemTypeListHasBeenSet;

                    /**
                     * IP List
                     */
                    std::vector<FilterDataObject> m_ipTypeList;
                    bool m_ipTypeListHasBeenSet;

                    /**
                     * AppID List
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * Availability Zone List
                     */
                    std::vector<FilterDataObject> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * OS List
                     */
                    std::vector<FilterDataObject> m_osList;
                    bool m_osListHasBeenSet;

                    /**
                     * Mapping of asset type and instance type.
                     */
                    std::vector<AssetInstanceTypeMap> m_assetMapInstanceTypeList;
                    bool m_assetMapInstanceTypeListHasBeenSet;

                    /**
                     * Public network private network enumeration.
                     */
                    std::vector<FilterDataObject> m_publicPrivateAttr;
                    bool m_publicPrivateAttrHasBeenSet;

                    /**
                     * Host protection status.
                     */
                    std::vector<FilterDataObject> m_protectStatusList;
                    bool m_protectStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_

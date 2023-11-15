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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VPC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VPC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * List of VPCs
                */
                class Vpc : public AbstractModel
                {
                public:
                    Vpc();
                    ~Vpc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subnet (32-bit mask)
                     * @return Subnet Subnet (32-bit mask)
                     * 
                     */
                    uint64_t GetSubnet() const;

                    /**
                     * 设置Subnet (32-bit mask)
                     * @param _subnet Subnet (32-bit mask)
                     * 
                     */
                    void SetSubnet(const uint64_t& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取Connected VPC (32-bit mask)
                     * @return ConnectedVpc Connected VPC (32-bit mask)
                     * 
                     */
                    uint64_t GetConnectedVpc() const;

                    /**
                     * 设置Connected VPC (32-bit mask)
                     * @param _connectedVpc Connected VPC (32-bit mask)
                     * 
                     */
                    void SetConnectedVpc(const uint64_t& _connectedVpc);

                    /**
                     * 判断参数 ConnectedVpc 是否已赋值
                     * @return ConnectedVpc 是否已赋值
                     * 
                     */
                    bool ConnectedVpcHasBeenSet() const;

                    /**
                     * 获取Asset ID
                     * @return AssetId Asset ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
                     * @param _assetId Asset ID
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取CVM (only 32-bit)
                     * @return CVM CVM (only 32-bit)
                     * 
                     */
                    uint64_t GetCVM() const;

                    /**
                     * 设置CVM (only 32-bit)
                     * @param _cVM CVM (only 32-bit)
                     * 
                     */
                    void SetCVM(const uint64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _tag Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取DNS domain
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return DNS DNS domain
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDNS() const;

                    /**
                     * 设置DNS domain
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _dNS DNS domain
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDNS(const std::vector<std::string>& _dNS);

                    /**
                     * 判断参数 DNS 是否已赋值
                     * @return DNS 是否已赋值
                     * 
                     */
                    bool DNSHasBeenSet() const;

                    /**
                     * 获取Asset name
                     * @return AssetName Asset name
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
                     * @param _assetName Asset name
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取CIDR block
                     * @return CIDR CIDR block
                     * 
                     */
                    std::string GetCIDR() const;

                    /**
                     * 设置CIDR block
                     * @param _cIDR CIDR block
                     * 
                     */
                    void SetCIDR(const std::string& _cIDR);

                    /**
                     * 判断参数 CIDR 是否已赋值
                     * @return CIDR 是否已赋值
                     * 
                     */
                    bool CIDRHasBeenSet() const;

                    /**
                     * 获取Asset creation time
                     * @return CreateTime Asset creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Asset creation time
                     * @param _createTime Asset creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取UIN
                     * @return Uin UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置UIN
                     * @param _uin UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取User name
                     * @return Nick User name
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置User name
                     * @param _nick User name
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsNewAsset Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isNewAsset Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsNewAsset(const uint64_t& _isNewAsset);

                    /**
                     * 判断参数 IsNewAsset 是否已赋值
                     * @return IsNewAsset 是否已赋值
                     * 
                     */
                    bool IsNewAssetHasBeenSet() const;

                    /**
                     * 获取Whether it's a critical asset. `1`: Yes; `2`: No
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCore Whether it's a critical asset. `1`: Yes; `2`: No
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Whether it's a critical asset. `1`: Yes; `2`: No
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCore Whether it's a critical asset. `1`: Yes; `2`: No
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                private:

                    /**
                     * Subnet (32-bit mask)
                     */
                    uint64_t m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * Connected VPC (32-bit mask)
                     */
                    uint64_t m_connectedVpc;
                    bool m_connectedVpcHasBeenSet;

                    /**
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CVM (only 32-bit)
                     */
                    uint64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * DNS domain
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dNS;
                    bool m_dNSHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * CIDR block
                     */
                    std::string m_cIDR;
                    bool m_cIDRHasBeenSet;

                    /**
                     * Asset creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * Whether it's a critical asset. `1`: Yes; `2`: No
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VPC_H_

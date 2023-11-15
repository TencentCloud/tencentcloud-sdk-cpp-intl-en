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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SUBNETASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SUBNETASSET_H_

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
                * Subnet assets
                */
                class SubnetAsset : public AbstractModel
                {
                public:
                    SubnetAsset();
                    ~SubnetAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC name
                     * @return VpcName VPC name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
                     * @param _vpcName VPC name
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

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
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Number of CVMs
                     * @return CVM Number of CVMs
                     * 
                     */
                    int64_t GetCVM() const;

                    /**
                     * 设置Number of CVMs
                     * @param _cVM Number of CVMs
                     * 
                     */
                    void SetCVM(const int64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取Number of available IPs
                     * @return AvailableIp Number of available IPs
                     * 
                     */
                    int64_t GetAvailableIp() const;

                    /**
                     * 设置Number of available IPs
                     * @param _availableIp Number of available IPs
                     * 
                     */
                    void SetAvailableIp(const int64_t& _availableIp);

                    /**
                     * 判断参数 AvailableIp 是否已赋值
                     * @return AvailableIp 是否已赋值
                     * 
                     */
                    bool AvailableIpHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Configuration risks
                     * @return ConfigureRisk Configuration risks
                     * 
                     */
                    int64_t GetConfigureRisk() const;

                    /**
                     * 设置Configuration risks
                     * @param _configureRisk Configuration risks
                     * 
                     */
                    void SetConfigureRisk(const int64_t& _configureRisk);

                    /**
                     * 判断参数 ConfigureRisk 是否已赋值
                     * @return ConfigureRisk 是否已赋值
                     * 
                     */
                    bool ConfigureRiskHasBeenSet() const;

                    /**
                     * 获取Number of tasks.
                     * @return ScanTask Number of tasks.
                     * 
                     */
                    int64_t GetScanTask() const;

                    /**
                     * 设置Number of tasks.
                     * @param _scanTask Number of tasks.
                     * 
                     */
                    void SetScanTask(const int64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取Last scan time
                     * @return LastScanTime Last scan time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _lastScanTime Last scan time
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCore Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCore Whether it's a critical asset
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

                private:

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
                     * Asset ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * CIDR block
                     */
                    std::string m_cIDR;
                    bool m_cIDRHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Number of CVMs
                     */
                    int64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * Number of available IPs
                     */
                    int64_t m_availableIp;
                    bool m_availableIpHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Configuration risks
                     */
                    int64_t m_configureRisk;
                    bool m_configureRiskHasBeenSet;

                    /**
                     * Number of tasks.
                     */
                    int64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SUBNETASSET_H_

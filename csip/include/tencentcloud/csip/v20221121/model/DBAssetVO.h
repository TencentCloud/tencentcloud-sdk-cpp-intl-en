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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETVO_H_

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
                * Details of a database asset
                */
                class DBAssetVO : public AbstractModel
                {
                public:
                    DBAssetVO();
                    ~DBAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetId Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetName Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetType Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcId 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param _vpcId 
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
                     * 获取VPC tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VpcName VPC tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vpcName VPC tags
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Domain Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _domain Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetCreateTime Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetCreateTime Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return LastScanTime Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _lastScanTime Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ConfigurationRisk Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _configurationRisk Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Attack Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _attack Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取
                     * @return Access 
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置
                     * @param _access 
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanTask Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanTask Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取User `appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppId User `appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User `appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appId User `appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uin User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
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
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NickName User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nickName User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Port Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _port Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

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
                     * 获取Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PrivateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _privateIp Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PublicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _publicIp Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * Asset ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Domain name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * User `appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * User name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Port
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Private IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DBASSETVO_H_

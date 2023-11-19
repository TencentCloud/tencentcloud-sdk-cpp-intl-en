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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IPASSETLISTVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IPASSETLISTVO_H_

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
                * List of IPs
                */
                class IpAssetListVO : public AbstractModel
                {
                public:
                    IpAssetListVO();
                    ~IpAssetListVO() = default;
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
                     * 获取CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CFWStatus CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCFWStatus() const;

                    /**
                     * 设置CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cFWStatus CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCFWStatus(const uint64_t& _cFWStatus);

                    /**
                     * 判断参数 CFWStatus 是否已赋值
                     * @return CFWStatus 是否已赋值
                     * 
                     */
                    bool CFWStatusHasBeenSet() const;

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
                     * 获取Public IP type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PublicIpType Public IP type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPublicIpType() const;

                    /**
                     * 设置Public IP type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _publicIpType Public IP type
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIpType(const uint64_t& _publicIpType);

                    /**
                     * 判断参数 PublicIpType 是否已赋值
                     * @return PublicIpType 是否已赋值
                     * 
                     */
                    bool PublicIpTypeHasBeenSet() const;

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
                     * 获取VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VpcName VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vpcName VPC name
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
                     * 获取appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppId appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appId appid
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
                     * 获取User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Uin User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uin User `uin`
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
                     * 获取Name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NickName Name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nickName Name
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
                     * 获取Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsCloud Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isCloud Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Attack Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _attack Number of network attacks
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
                     * 获取Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Access Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _access Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Intercept Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _intercept Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取Inbound bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InBandwidth Inbound bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置Inbound bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _inBandwidth Inbound bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取Outbound bandwidthtraffic peak bandwidth (bps)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutBandwidth Outbound bandwidthtraffic peak bandwidth (bps)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置Outbound bandwidthtraffic peak bandwidth (bps)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outBandwidth Outbound bandwidthtraffic peak bandwidth (bps)
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取Inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return InFlow Inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置Inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _inFlow Inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取Outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return OutFlow Outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置Outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _outFlow Outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

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
                     * 获取Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PortRisk Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _portRisk Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VulnerabilityRisk Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vulnerabilityRisk Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

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
                     * 获取Weak passwords
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WeakPassword Weak passwords
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeakPassword() const;

                    /**
                     * 设置Weak passwords
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _weakPassword Weak passwords
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeakPassword(const uint64_t& _weakPassword);

                    /**
                     * 判断参数 WeakPassword 是否已赋值
                     * @return WeakPassword 是否已赋值
                     * 
                     */
                    bool WeakPasswordHasBeenSet() const;

                    /**
                     * 获取Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return WebContentRisk Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWebContentRisk() const;

                    /**
                     * 设置Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _webContentRisk Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWebContentRisk(const uint64_t& _webContentRisk);

                    /**
                     * 判断参数 WebContentRisk 是否已赋值
                     * @return WebContentRisk 是否已赋值
                     * 
                     */
                    bool WebContentRiskHasBeenSet() const;

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
                     * 获取EIP ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AddressId EIP ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置EIP ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _addressId EIP ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return MemberId Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _memberId Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskExposure Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _riskExposure Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskExposure(const int64_t& _riskExposure);

                    /**
                     * 判断参数 RiskExposure 是否已赋值
                     * @return RiskExposure 是否已赋值
                     * 
                     */
                    bool RiskExposureHasBeenSet() const;

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
                     * 获取Asset ownership verification status. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3` and above: Verification failed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VerifyStatus Asset ownership verification status. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3` and above: Verification failed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVerifyStatus() const;

                    /**
                     * 设置Asset ownership verification status. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3` and above: Verification failed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _verifyStatus Asset ownership verification status. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3` and above: Verification failed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVerifyStatus(const int64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

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
                     * Region
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * CFW status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cFWStatus;
                    bool m_cFWStatusHasBeenSet;

                    /**
                     * Asset creation time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Public IP
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Public IP type
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_publicIpType;
                    bool m_publicIpTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * appid
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User `uin`
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Whether it's a critical asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Whether it's a cloud asset
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * Number of network attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * Number of network access requests
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Number of blocked attacks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * Inbound bandwidth
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * Outbound bandwidthtraffic peak bandwidth (bps)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * Inbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * Outbound traffic
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * Last scan time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Port risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * Vulnerabilities
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * Configuration risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * Scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * Weak passwords
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * Content risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_webContentRisk;
                    bool m_webContentRiskHasBeenSet;

                    /**
                     * Tags
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * EIP ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * Member ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Risk exposure
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                    /**
                     * Whether it's a newly-added asset. Values: `1` (Yes), `0` (No)
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * Asset ownership verification status. `0`: Pending verification; `1`: Verified; `2`: Verifying; `3` and above: Verification failed
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IPASSETLISTVO_H_

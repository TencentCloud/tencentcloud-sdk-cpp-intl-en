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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_GATEWAYASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_GATEWAYASSET_H_

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
                * Gateway asset.
                */
                class GateWayAsset : public AbstractModel
                {
                public:
                    GateWayAsset();
                    ~GateWayAsset() = default;
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
                     * 获取uin
                     * @return Uin uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置uin
                     * @param _uin uin
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
                     * 获取Asset ID.
                     * @return AssetId Asset ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset ID.
                     * @param _assetId Asset ID.
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
                     * 获取Asset name.
                     * @return AssetName Asset name.
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置Asset name.
                     * @param _assetName Asset name.
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
                     * 获取Asset type.
                     * @return AssetType Asset type.
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type.
                     * @param _assetType Asset type.
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
                     * 获取VPC IP
                     * @return PrivateIp VPC IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置VPC IP
                     * @param _privateIp VPC IP
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
                     * 获取Public IP address
                     * @return PublicIp Public IP address
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIp Public IP address
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
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
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
                     * 获取VPC id.
                     * @return VpcId VPC id.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC id.
                     * @param _vpcId VPC id.
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
                     * 获取VPC Name
                     * @return VpcName VPC Name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置VPC Name
                     * @param _vpcName VPC Name
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
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
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
                     * 获取Outbound peak bandwidth.
                     * @return OutboundPeakBandwidth Outbound peak bandwidth.
                     * 
                     */
                    std::string GetOutboundPeakBandwidth() const;

                    /**
                     * 设置Outbound peak bandwidth.
                     * @param _outboundPeakBandwidth Outbound peak bandwidth.
                     * 
                     */
                    void SetOutboundPeakBandwidth(const std::string& _outboundPeakBandwidth);

                    /**
                     * 判断参数 OutboundPeakBandwidth 是否已赋值
                     * @return OutboundPeakBandwidth 是否已赋值
                     * 
                     */
                    bool OutboundPeakBandwidthHasBeenSet() const;

                    /**
                     * 获取Inbound peak bandwidth.
                     * @return InboundPeakBandwidth Inbound peak bandwidth.
                     * 
                     */
                    std::string GetInboundPeakBandwidth() const;

                    /**
                     * 设置Inbound peak bandwidth.
                     * @param _inboundPeakBandwidth Inbound peak bandwidth.
                     * 
                     */
                    void SetInboundPeakBandwidth(const std::string& _inboundPeakBandwidth);

                    /**
                     * 判断参数 InboundPeakBandwidth 是否已赋值
                     * @return InboundPeakBandwidth 是否已赋值
                     * 
                     */
                    bool InboundPeakBandwidthHasBeenSet() const;

                    /**
                     * 获取Cumulative Outbound Traffic
                     * @return OutboundCumulativeFlow Cumulative Outbound Traffic
                     * 
                     */
                    std::string GetOutboundCumulativeFlow() const;

                    /**
                     * 设置Cumulative Outbound Traffic
                     * @param _outboundCumulativeFlow Cumulative Outbound Traffic
                     * 
                     */
                    void SetOutboundCumulativeFlow(const std::string& _outboundCumulativeFlow);

                    /**
                     * 判断参数 OutboundCumulativeFlow 是否已赋值
                     * @return OutboundCumulativeFlow 是否已赋值
                     * 
                     */
                    bool OutboundCumulativeFlowHasBeenSet() const;

                    /**
                     * 获取Cumulative Inbound Traffic
                     * @return InboundCumulativeFlow Cumulative Inbound Traffic
                     * 
                     */
                    std::string GetInboundCumulativeFlow() const;

                    /**
                     * 设置Cumulative Inbound Traffic
                     * @param _inboundCumulativeFlow Cumulative Inbound Traffic
                     * 
                     */
                    void SetInboundCumulativeFlow(const std::string& _inboundCumulativeFlow);

                    /**
                     * 判断参数 InboundCumulativeFlow 是否已赋值
                     * @return InboundCumulativeFlow 是否已赋值
                     * 
                     */
                    bool InboundCumulativeFlowHasBeenSet() const;

                    /**
                     * 获取Network attack.
                     * @return NetworkAttack Network attack.
                     * 
                     */
                    int64_t GetNetworkAttack() const;

                    /**
                     * 设置Network attack.
                     * @param _networkAttack Network attack.
                     * 
                     */
                    void SetNetworkAttack(const int64_t& _networkAttack);

                    /**
                     * 判断参数 NetworkAttack 是否已赋值
                     * @return NetworkAttack 是否已赋值
                     * 
                     */
                    bool NetworkAttackHasBeenSet() const;

                    /**
                     * 获取Expose ports.
                     * @return ExposedPort Expose ports.
                     * 
                     */
                    int64_t GetExposedPort() const;

                    /**
                     * 设置Expose ports.
                     * @param _exposedPort Expose ports.
                     * 
                     */
                    void SetExposedPort(const int64_t& _exposedPort);

                    /**
                     * 判断参数 ExposedPort 是否已赋值
                     * @return ExposedPort 是否已赋值
                     * 
                     */
                    bool ExposedPortHasBeenSet() const;

                    /**
                     * 获取Exposed vulnerability.
                     * @return ExposedVUL Exposed vulnerability.
                     * 
                     */
                    int64_t GetExposedVUL() const;

                    /**
                     * 设置Exposed vulnerability.
                     * @param _exposedVUL Exposed vulnerability.
                     * 
                     */
                    void SetExposedVUL(const int64_t& _exposedVUL);

                    /**
                     * 判断参数 ExposedVUL 是否已赋值
                     * @return ExposedVUL 是否已赋值
                     * 
                     */
                    bool ExposedVULHasBeenSet() const;

                    /**
                     * 获取Configuration risk.
                     * @return ConfigureRisk Configuration risk.
                     * 
                     */
                    int64_t GetConfigureRisk() const;

                    /**
                     * 设置Configuration risk.
                     * @param _configureRisk Configuration risk.
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
                     * 获取Creation time.


                     * @return CreateTime Creation time.


                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


                     * @param _createTime Creation time.


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
                     * 获取Nickname.
                     * @return Nick Nickname.
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置Nickname.
                     * @param _nick Nickname.
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
                     * 获取IPv6 address
                     * @return AddressIPV6 IPv6 address
                     * 
                     */
                    std::string GetAddressIPV6() const;

                    /**
                     * 设置IPv6 address
                     * @param _addressIPV6 IPv6 address
                     * 
                     */
                    void SetAddressIPV6(const std::string& _addressIPV6);

                    /**
                     * 判断参数 AddressIPV6 是否已赋值
                     * @return AddressIPV6 是否已赋值
                     * 
                     */
                    bool AddressIPV6HasBeenSet() const;

                    /**
                     * 获取Core or Not
                     * @return IsCore Core or Not
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置Core or Not
                     * @param _isCore Core or Not
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
                     * 获取Risk service exposure.
                     * @return RiskExposure Risk service exposure.
                     * 
                     */
                    int64_t GetRiskExposure() const;

                    /**
                     * 设置Risk service exposure.
                     * @param _riskExposure Risk service exposure.
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
                     * 获取New Asset or Not. 1: New
                     * @return IsNewAsset New Asset or Not. 1: New
                     * 
                     */
                    uint64_t GetIsNewAsset() const;

                    /**
                     * 设置New Asset or Not. 1: New
                     * @param _isNewAsset New Asset or Not. 1: New
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
                     * 获取Gateway Status
                     * @return Status Gateway Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Gateway Status
                     * @param _status Gateway Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取TSE's Actual Gateway Region
                     * @return EngineRegion TSE's Actual Gateway Region
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置TSE's Actual Gateway Region
                     * @param _engineRegion TSE's Actual Gateway Region
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取Weak password risk.
                     * @return WeakPasswordRisk Weak password risk.
                     * 
                     */
                    uint64_t GetWeakPasswordRisk() const;

                    /**
                     * 设置Weak password risk.
                     * @param _weakPasswordRisk Weak password risk.
                     * 
                     */
                    void SetWeakPasswordRisk(const uint64_t& _weakPasswordRisk);

                    /**
                     * 判断参数 WeakPasswordRisk 是否已赋值
                     * @return WeakPasswordRisk 是否已赋值
                     * 
                     */
                    bool WeakPasswordRiskHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Asset ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset name.
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * Asset type.
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * VPC IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC id.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC Name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Outbound peak bandwidth.
                     */
                    std::string m_outboundPeakBandwidth;
                    bool m_outboundPeakBandwidthHasBeenSet;

                    /**
                     * Inbound peak bandwidth.
                     */
                    std::string m_inboundPeakBandwidth;
                    bool m_inboundPeakBandwidthHasBeenSet;

                    /**
                     * Cumulative Outbound Traffic
                     */
                    std::string m_outboundCumulativeFlow;
                    bool m_outboundCumulativeFlowHasBeenSet;

                    /**
                     * Cumulative Inbound Traffic
                     */
                    std::string m_inboundCumulativeFlow;
                    bool m_inboundCumulativeFlowHasBeenSet;

                    /**
                     * Network attack.
                     */
                    int64_t m_networkAttack;
                    bool m_networkAttackHasBeenSet;

                    /**
                     * Expose ports.
                     */
                    int64_t m_exposedPort;
                    bool m_exposedPortHasBeenSet;

                    /**
                     * Exposed vulnerability.
                     */
                    int64_t m_exposedVUL;
                    bool m_exposedVULHasBeenSet;

                    /**
                     * Configuration risk.
                     */
                    int64_t m_configureRisk;
                    bool m_configureRiskHasBeenSet;

                    /**
                     * Creation time.


                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

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
                     * Nickname.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * IPv6 address
                     */
                    std::string m_addressIPV6;
                    bool m_addressIPV6HasBeenSet;

                    /**
                     * Core or Not
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * Risk service exposure.
                     */
                    int64_t m_riskExposure;
                    bool m_riskExposureHasBeenSet;

                    /**
                     * New Asset or Not. 1: New
                     */
                    uint64_t m_isNewAsset;
                    bool m_isNewAssetHasBeenSet;

                    /**
                     * Gateway Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * TSE's Actual Gateway Region
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * Weak password risk.
                     */
                    uint64_t m_weakPasswordRisk;
                    bool m_weakPasswordRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_GATEWAYASSET_H_

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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT instance card details
                */
                class NatInstanceInfo : public AbstractModel
                {
                public:
                    NatInstanceInfo();
                    ~NatInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NAT instance ID
                     * @return NatinsId NAT instance ID
                     * 
                     */
                    std::string GetNatinsId() const;

                    /**
                     * 设置NAT instance ID
                     * @param _natinsId NAT instance ID
                     * 
                     */
                    void SetNatinsId(const std::string& _natinsId);

                    /**
                     * 判断参数 NatinsId 是否已赋值
                     * @return NatinsId 是否已赋值
                     * 
                     */
                    bool NatinsIdHasBeenSet() const;

                    /**
                     * 获取NAT instance name
                     * @return NatinsName NAT instance name
                     * 
                     */
                    std::string GetNatinsName() const;

                    /**
                     * 设置NAT instance name
                     * @param _natinsName NAT instance name
                     * 
                     */
                    void SetNatinsName(const std::string& _natinsName);

                    /**
                     * 判断参数 NatinsName 是否已赋值
                     * @return NatinsName 是否已赋值
                     * 
                     */
                    bool NatinsNameHasBeenSet() const;

                    /**
                     * 获取Instance region
                     * @return Region Instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region
                     * @param _region Instance region
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
                     * 获取0: create new; 1: use existing
                     * @return FwMode 0: create new; 1: use existing
                     * 
                     */
                    int64_t GetFwMode() const;

                    /**
                     * 设置0: create new; 1: use existing
                     * @param _fwMode 0: create new; 1: use existing
                     * 
                     */
                    void SetFwMode(const int64_t& _fwMode);

                    /**
                     * 判断参数 FwMode 是否已赋值
                     * @return FwMode 是否已赋值
                     * 
                     */
                    bool FwModeHasBeenSet() const;

                    /**
                     * 获取Instance bandwidth (Mbps)
                     * @return BandWidth Instance bandwidth (Mbps)
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Instance bandwidth (Mbps)
                     * @param _bandWidth Instance bandwidth (Mbps)
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取Inbound traffic peak bandwidth (bps)
                     * @return InFlowMax Inbound traffic peak bandwidth (bps)
                     * 
                     */
                    int64_t GetInFlowMax() const;

                    /**
                     * 设置Inbound traffic peak bandwidth (bps)
                     * @param _inFlowMax Inbound traffic peak bandwidth (bps)
                     * 
                     */
                    void SetInFlowMax(const int64_t& _inFlowMax);

                    /**
                     * 判断参数 InFlowMax 是否已赋值
                     * @return InFlowMax 是否已赋值
                     * 
                     */
                    bool InFlowMaxHasBeenSet() const;

                    /**
                     * 获取Outbound traffic peak bandwidth (bps)
                     * @return OutFlowMax Outbound traffic peak bandwidth (bps)
                     * 
                     */
                    uint64_t GetOutFlowMax() const;

                    /**
                     * 设置Outbound traffic peak bandwidth (bps)
                     * @param _outFlowMax Outbound traffic peak bandwidth (bps)
                     * 
                     */
                    void SetOutFlowMax(const uint64_t& _outFlowMax);

                    /**
                     * 判断参数 OutFlowMax 是否已赋值
                     * @return OutFlowMax 是否已赋值
                     * 
                     */
                    bool OutFlowMaxHasBeenSet() const;

                    /**
                     * 获取Chinese region information
                     * @return RegionZh Chinese region information
                     * 
                     */
                    std::string GetRegionZh() const;

                    /**
                     * 设置Chinese region information
                     * @param _regionZh Chinese region information
                     * 
                     */
                    void SetRegionZh(const std::string& _regionZh);

                    /**
                     * 判断参数 RegionZh 是否已赋值
                     * @return RegionZh 是否已赋值
                     * 
                     */
                    bool RegionZhHasBeenSet() const;

                    /**
                     * 获取Public IP array
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EipAddress Public IP array
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetEipAddress() const;

                    /**
                     * 设置Public IP array
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _eipAddress Public IP array
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetEipAddress(const std::vector<std::string>& _eipAddress);

                    /**
                     * 判断参数 EipAddress 是否已赋值
                     * @return EipAddress 是否已赋值
                     * 
                     */
                    bool EipAddressHasBeenSet() const;

                    /**
                     * 获取Array of internal and external IPs
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VpcIp Array of internal and external IPs
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetVpcIp() const;

                    /**
                     * 设置Array of internal and external IPs
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _vpcIp Array of internal and external IPs
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetVpcIp(const std::vector<std::string>& _vpcIp);

                    /**
                     * 判断参数 VpcIp 是否已赋值
                     * @return VpcIp 是否已赋值
                     * 
                     */
                    bool VpcIpHasBeenSet() const;

                    /**
                     * 获取Array of subnets associated with an instance
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Subnets Array of subnets associated with an instance
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetSubnets() const;

                    /**
                     * 设置Array of subnets associated with an instance
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _subnets Array of subnets associated with an instance
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSubnets(const std::vector<std::string>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     * 
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取0: normal 1: initializing
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Status 0: normal 1: initializing
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0: normal 1: initializing
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _status 0: normal 1: initializing
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Region information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionDetail Region information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionDetail() const;

                    /**
                     * 设置Region information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionDetail Region information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionDetail(const std::string& _regionDetail);

                    /**
                     * 判断参数 RegionDetail 是否已赋值
                     * @return RegionDetail 是否已赋值
                     * 
                     */
                    bool RegionDetailHasBeenSet() const;

                    /**
                     * 获取Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneZh Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneZh() const;

                    /**
                     * 设置Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneZh Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneZh(const std::string& _zoneZh);

                    /**
                     * 判断参数 ZoneZh 是否已赋值
                     * @return ZoneZh 是否已赋值
                     * 
                     */
                    bool ZoneZhHasBeenSet() const;

                    /**
                     * 获取Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneZhBak Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneZhBak() const;

                    /**
                     * 设置Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneZhBak Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneZhBak(const std::string& _zoneZhBak);

                    /**
                     * 判断参数 ZoneZhBak 是否已赋值
                     * @return ZoneZhBak 是否已赋值
                     * 
                     */
                    bool ZoneZhBakHasBeenSet() const;

                    /**
                     * 获取Number of used rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleUsed Number of used rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleUsed() const;

                    /**
                     * 设置Number of used rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleUsed Number of used rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleUsed(const uint64_t& _ruleUsed);

                    /**
                     * 判断参数 RuleUsed 是否已赋值
                     * @return RuleUsed 是否已赋值
                     * 
                     */
                    bool RuleUsedHasBeenSet() const;

                    /**
                     * 获取The maximum number of rules allowed in the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleMax The maximum number of rules allowed in the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleMax() const;

                    /**
                     * 设置The maximum number of rules allowed in the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleMax The maximum number of rules allowed in the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleMax(const uint64_t& _ruleMax);

                    /**
                     * 判断参数 RuleMax 是否已赋值
                     * @return RuleMax 是否已赋值
                     * 
                     */
                    bool RuleMaxHasBeenSet() const;

                private:

                    /**
                     * NAT instance ID
                     */
                    std::string m_natinsId;
                    bool m_natinsIdHasBeenSet;

                    /**
                     * NAT instance name
                     */
                    std::string m_natinsName;
                    bool m_natinsNameHasBeenSet;

                    /**
                     * Instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 0: create new; 1: use existing
                     */
                    int64_t m_fwMode;
                    bool m_fwModeHasBeenSet;

                    /**
                     * Instance bandwidth (Mbps)
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Inbound traffic peak bandwidth (bps)
                     */
                    int64_t m_inFlowMax;
                    bool m_inFlowMaxHasBeenSet;

                    /**
                     * Outbound traffic peak bandwidth (bps)
                     */
                    uint64_t m_outFlowMax;
                    bool m_outFlowMaxHasBeenSet;

                    /**
                     * Chinese region information
                     */
                    std::string m_regionZh;
                    bool m_regionZhHasBeenSet;

                    /**
                     * Public IP array
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_eipAddress;
                    bool m_eipAddressHasBeenSet;

                    /**
                     * Array of internal and external IPs
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_vpcIp;
                    bool m_vpcIpHasBeenSet;

                    /**
                     * Array of subnets associated with an instance
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * 0: normal 1: initializing
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionDetail;
                    bool m_regionDetailHasBeenSet;

                    /**
                     * Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneZh;
                    bool m_zoneZhHasBeenSet;

                    /**
                     * Availability zone of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneZhBak;
                    bool m_zoneZhBakHasBeenSet;

                    /**
                     * Number of used rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleUsed;
                    bool m_ruleUsedHasBeenSet;

                    /**
                     * The maximum number of rules allowed in the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleMax;
                    bool m_ruleMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATINSTANCEINFO_H_

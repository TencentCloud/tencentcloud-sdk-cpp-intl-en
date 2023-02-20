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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/BGPIPInstanceSpecification.h>
#include <tencentcloud/antiddos/v20200309/model/BGPIPInstanceUsages.h>
#include <tencentcloud/antiddos/v20200309/model/RegionInfo.h>
#include <tencentcloud/antiddos/v20200309/model/PackInfo.h>
#include <tencentcloud/antiddos/v20200309/model/StaticPackRelation.h>
#include <tencentcloud/antiddos/v20200309/model/EipAddressPackRelation.h>
#include <tencentcloud/antiddos/v20200309/model/EipAddressRelation.h>
#include <tencentcloud/antiddos/v20200309/model/TagInfo.h>
#include <tencentcloud/antiddos/v20200309/model/AnycastOutPackRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Anti-DDoS Advanced instance details
                */
                class BGPIPInstance : public AbstractModel
                {
                public:
                    BGPIPInstance();
                    ~BGPIPInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Anti-DDoS instance details
                     * @return InstanceDetail Anti-DDoS instance details
                     */
                    InstanceRelation GetInstanceDetail() const;

                    /**
                     * 设置Anti-DDoS instance details
                     * @param InstanceDetail Anti-DDoS instance details
                     */
                    void SetInstanceDetail(const InstanceRelation& _instanceDetail);

                    /**
                     * 判断参数 InstanceDetail 是否已赋值
                     * @return InstanceDetail 是否已赋值
                     */
                    bool InstanceDetailHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance specifications
                     * @return SpecificationLimit Anti-DDoS instance specifications
                     */
                    BGPIPInstanceSpecification GetSpecificationLimit() const;

                    /**
                     * 设置Anti-DDoS instance specifications
                     * @param SpecificationLimit Anti-DDoS instance specifications
                     */
                    void SetSpecificationLimit(const BGPIPInstanceSpecification& _specificationLimit);

                    /**
                     * 判断参数 SpecificationLimit 是否已赋值
                     * @return SpecificationLimit 是否已赋值
                     */
                    bool SpecificationLimitHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance usage statistics
                     * @return Usage Anti-DDoS instance usage statistics
                     */
                    BGPIPInstanceUsages GetUsage() const;

                    /**
                     * 设置Anti-DDoS instance usage statistics
                     * @param Usage Anti-DDoS instance usage statistics
                     */
                    void SetUsage(const BGPIPInstanceUsages& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Region of the Anti-DDoS instance
                     * @return Region Region of the Anti-DDoS instance
                     */
                    RegionInfo GetRegion() const;

                    /**
                     * 设置Region of the Anti-DDoS instance
                     * @param Region Region of the Anti-DDoS instance
                     */
                    void SetRegion(const RegionInfo& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocking
`isolate`: reprocessed and isolated
                     * @return Status Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocking
`isolate`: reprocessed and isolated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocking
`isolate`: reprocessed and isolated
                     * @param Status Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocking
`isolate`: reprocessed and isolated
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Purchase time
                     * @return ExpiredTime Purchase time
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Purchase time
                     * @param ExpiredTime Purchase time
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Expired At
                     * @return CreatedTime Expired At
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Expired At
                     * @param CreatedTime Expired At
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Name of the Anti-DDoS instance
                     * @return Name Name of the Anti-DDoS instance
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the Anti-DDoS instance
                     * @param Name Name of the Anti-DDoS instance
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PackInfo Package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    PackInfo GetPackInfo() const;

                    /**
                     * 设置Package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PackInfo Package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPackInfo(const PackInfo& _packInfo);

                    /**
                     * 判断参数 PackInfo 是否已赋值
                     * @return PackInfo 是否已赋值
                     */
                    bool PackInfoHasBeenSet() const;

                    /**
                     * 获取Non-BGP package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a non-BGP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return StaticPackRelation Non-BGP package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a non-BGP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    StaticPackRelation GetStaticPackRelation() const;

                    /**
                     * 设置Non-BGP package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a non-BGP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param StaticPackRelation Non-BGP package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a non-BGP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetStaticPackRelation(const StaticPackRelation& _staticPackRelation);

                    /**
                     * 判断参数 StaticPackRelation 是否已赋值
                     * @return StaticPackRelation 是否已赋值
                     */
                    bool StaticPackRelationHasBeenSet() const;

                    /**
                     * 获取Specifies the ISP. `0`: Chinese mainland ISPs (default); `1`：Radware；`2`: Tencent; `3`: NSFOCUS. Note that `1`, `2` and `3` are used for services outside the Chinese mainland.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ZoneId Specifies the ISP. `0`: Chinese mainland ISPs (default); `1`：Radware；`2`: Tencent; `3`: NSFOCUS. Note that `1`, `2` and `3` are used for services outside the Chinese mainland.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Specifies the ISP. `0`: Chinese mainland ISPs (default); `1`：Radware；`2`: Tencent; `3`: NSFOCUS. Note that `1`, `2` and `3` are used for services outside the Chinese mainland.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ZoneId Specifies the ISP. `0`: Chinese mainland ISPs (default); `1`：Radware；`2`: Tencent; `3`: NSFOCUS. Note that `1`, `2` and `3` are used for services outside the Chinese mainland.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Used to differentiate clusters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Tgw Used to differentiate clusters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetTgw() const;

                    /**
                     * 设置Used to differentiate clusters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Tgw Used to differentiate clusters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTgw(const uint64_t& _tgw);

                    /**
                     * 判断参数 Tgw 是否已赋值
                     * @return Tgw 是否已赋值
                     */
                    bool TgwHasBeenSet() const;

                    /**
                     * 获取EIP states: `CREATING`, `BINDING`, `BIND`, `UNBINDING`, `UNBIND`, `OFFLINING`, and `BIND_ENI`. The EIP must be bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipAddressStatus EIP states: `CREATING`, `BINDING`, `BIND`, `UNBINDING`, `UNBIND`, `OFFLINING`, and `BIND_ENI`. The EIP must be bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetEipAddressStatus() const;

                    /**
                     * 设置EIP states: `CREATING`, `BINDING`, `BIND`, `UNBINDING`, `UNBIND`, `OFFLINING`, and `BIND_ENI`. The EIP must be bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param EipAddressStatus EIP states: `CREATING`, `BINDING`, `BIND`, `UNBINDING`, `UNBIND`, `OFFLINING`, and `BIND_ENI`. The EIP must be bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEipAddressStatus(const std::string& _eipAddressStatus);

                    /**
                     * 判断参数 EipAddressStatus 是否已赋值
                     * @return EipAddressStatus 是否已赋值
                     */
                    bool EipAddressStatusHasBeenSet() const;

                    /**
                     * 获取Whether it is an Anti-DDoS EIP instance. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipFlag Whether it is an Anti-DDoS EIP instance. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetEipFlag() const;

                    /**
                     * 设置Whether it is an Anti-DDoS EIP instance. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param EipFlag Whether it is an Anti-DDoS EIP instance. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEipFlag(const int64_t& _eipFlag);

                    /**
                     * 判断参数 EipFlag 是否已赋值
                     * @return EipFlag 是否已赋值
                     */
                    bool EipFlagHasBeenSet() const;

                    /**
                     * 获取EIP package details of the Anti-DDoS Advanced instance.
Note: This field is `null` for an Anti-DDoS Advanced instance without using an EIP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipAddressPackRelation EIP package details of the Anti-DDoS Advanced instance.
Note: This field is `null` for an Anti-DDoS Advanced instance without using an EIP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    EipAddressPackRelation GetEipAddressPackRelation() const;

                    /**
                     * 设置EIP package details of the Anti-DDoS Advanced instance.
Note: This field is `null` for an Anti-DDoS Advanced instance without using an EIP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param EipAddressPackRelation EIP package details of the Anti-DDoS Advanced instance.
Note: This field is `null` for an Anti-DDoS Advanced instance without using an EIP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEipAddressPackRelation(const EipAddressPackRelation& _eipAddressPackRelation);

                    /**
                     * 判断参数 EipAddressPackRelation 是否已赋值
                     * @return EipAddressPackRelation 是否已赋值
                     */
                    bool EipAddressPackRelationHasBeenSet() const;

                    /**
                     * 获取Details of the Anti-DDoS Advanced instance bound to the EIP.
Note: This field is `null` if the EIP is not bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EipAddressInfo Details of the Anti-DDoS Advanced instance bound to the EIP.
Note: This field is `null` if the EIP is not bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    EipAddressRelation GetEipAddressInfo() const;

                    /**
                     * 设置Details of the Anti-DDoS Advanced instance bound to the EIP.
Note: This field is `null` if the EIP is not bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param EipAddressInfo Details of the Anti-DDoS Advanced instance bound to the EIP.
Note: This field is `null` if the EIP is not bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetEipAddressInfo(const EipAddressRelation& _eipAddressInfo);

                    /**
                     * 判断参数 EipAddressInfo 是否已赋值
                     * @return EipAddressInfo 是否已赋值
                     */
                    bool EipAddressInfoHasBeenSet() const;

                    /**
                     * 获取Recommended domain name for clients to access.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Domain Recommended domain name for clients to access.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Recommended domain name for clients to access.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Domain Recommended domain name for clients to access.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Whether to enable Sec-MCA. Valid values: `1` (enabled) and `0` (disabled).
                     * @return DamDDoSStatus Whether to enable Sec-MCA. Valid values: `1` (enabled) and `0` (disabled).
                     */
                    uint64_t GetDamDDoSStatus() const;

                    /**
                     * 设置Whether to enable Sec-MCA. Valid values: `1` (enabled) and `0` (disabled).
                     * @param DamDDoSStatus Whether to enable Sec-MCA. Valid values: `1` (enabled) and `0` (disabled).
                     */
                    void SetDamDDoSStatus(const uint64_t& _damDDoSStatus);

                    /**
                     * 判断参数 DamDDoSStatus 是否已赋值
                     * @return DamDDoSStatus 是否已赋值
                     */
                    bool DamDDoSStatusHasBeenSet() const;

                    /**
                     * 获取Whether it’s an IPv6 address. `1`: Yes; `0`: No.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return V6Flag Whether it’s an IPv6 address. `1`: Yes; `0`: No.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetV6Flag() const;

                    /**
                     * 设置Whether it’s an IPv6 address. `1`: Yes; `0`: No.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param V6Flag Whether it’s an IPv6 address. `1`: Yes; `0`: No.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetV6Flag(const uint64_t& _v6Flag);

                    /**
                     * 判断参数 V6Flag 是否已赋值
                     * @return V6Flag 是否已赋值
                     */
                    bool V6FlagHasBeenSet() const;

                    /**
                     * 获取Whether it’s an Anti-DDoS Advanced instance from Tencent Cloud channels. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return BGPIPChannelFlag Whether it’s an Anti-DDoS Advanced instance from Tencent Cloud channels. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetBGPIPChannelFlag() const;

                    /**
                     * 设置Whether it’s an Anti-DDoS Advanced instance from Tencent Cloud channels. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param BGPIPChannelFlag Whether it’s an Anti-DDoS Advanced instance from Tencent Cloud channels. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetBGPIPChannelFlag(const uint64_t& _bGPIPChannelFlag);

                    /**
                     * 判断参数 BGPIPChannelFlag 是否已赋值
                     * @return BGPIPChannelFlag 是否已赋值
                     */
                    bool BGPIPChannelFlagHasBeenSet() const;

                    /**
                     * 获取Tag that the Anti-DDoS Advanced instance is associated with
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TagInfoList Tag that the Anti-DDoS Advanced instance is associated with
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置Tag that the Anti-DDoS Advanced instance is associated with
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param TagInfoList Tag that the Anti-DDoS Advanced instance is associated with
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetTagInfoList(const std::vector<TagInfo>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取All-out package details of the instance
When an all-out package is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AnycastOutPackRelation All-out package details of the instance
When an all-out package is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AnycastOutPackRelation GetAnycastOutPackRelation() const;

                    /**
                     * 设置All-out package details of the instance
When an all-out package is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param AnycastOutPackRelation All-out package details of the instance
When an all-out package is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetAnycastOutPackRelation(const AnycastOutPackRelation& _anycastOutPackRelation);

                    /**
                     * 判断参数 AnycastOutPackRelation 是否已赋值
                     * @return AnycastOutPackRelation 是否已赋值
                     */
                    bool AnycastOutPackRelationHasBeenSet() const;

                    /**
                     * 获取Edition of the instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return InstanceVersion Edition of the instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetInstanceVersion() const;

                    /**
                     * 设置Edition of the instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param InstanceVersion Edition of the instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetInstanceVersion(const uint64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Convoy instance ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ConvoyId Convoy instance ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetConvoyId() const;

                    /**
                     * 设置Convoy instance ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ConvoyId Convoy instance ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetConvoyId(const std::string& _convoyId);

                    /**
                     * 判断参数 ConvoyId 是否已赋值
                     * @return ConvoyId 是否已赋值
                     */
                    bool ConvoyIdHasBeenSet() const;

                    /**
                     * 获取Pay-as-you-go bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ElasticBandwidth Pay-as-you-go bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t GetElasticBandwidth() const;

                    /**
                     * 设置Pay-as-you-go bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ElasticBandwidth Pay-as-you-go bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetElasticBandwidth(const uint64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取Whether it’s the IP broadcasted by EdgeOne. Values: `1` (yes), `0` (no)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EOFlag Whether it’s the IP broadcasted by EdgeOne. Values: `1` (yes), `0` (no)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEOFlag() const;

                    /**
                     * 设置Whether it’s the IP broadcasted by EdgeOne. Values: `1` (yes), `0` (no)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EOFlag Whether it’s the IP broadcasted by EdgeOne. Values: `1` (yes), `0` (no)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEOFlag(const uint64_t& _eOFlag);

                    /**
                     * 判断参数 EOFlag 是否已赋值
                     * @return EOFlag 是否已赋值
                     */
                    bool EOFlagHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance details
                     */
                    InstanceRelation m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * Anti-DDoS instance specifications
                     */
                    BGPIPInstanceSpecification m_specificationLimit;
                    bool m_specificationLimitHasBeenSet;

                    /**
                     * Anti-DDoS instance usage statistics
                     */
                    BGPIPInstanceUsages m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Region of the Anti-DDoS instance
                     */
                    RegionInfo m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocking
`isolate`: reprocessed and isolated
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Purchase time
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Expired At
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Name of the Anti-DDoS instance
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    PackInfo m_packInfo;
                    bool m_packInfoHasBeenSet;

                    /**
                     * Non-BGP package details of the Anti-DDoS instance.
Note: This field is `null` for an Anti-DDoS instance without using a non-BGP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    StaticPackRelation m_staticPackRelation;
                    bool m_staticPackRelationHasBeenSet;

                    /**
                     * Specifies the ISP. `0`: Chinese mainland ISPs (default); `1`：Radware；`2`: Tencent; `3`: NSFOCUS. Note that `1`, `2` and `3` are used for services outside the Chinese mainland.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Used to differentiate clusters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_tgw;
                    bool m_tgwHasBeenSet;

                    /**
                     * EIP states: `CREATING`, `BINDING`, `BIND`, `UNBINDING`, `UNBIND`, `OFFLINING`, and `BIND_ENI`. The EIP must be bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_eipAddressStatus;
                    bool m_eipAddressStatusHasBeenSet;

                    /**
                     * Whether it is an Anti-DDoS EIP instance. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_eipFlag;
                    bool m_eipFlagHasBeenSet;

                    /**
                     * EIP package details of the Anti-DDoS Advanced instance.
Note: This field is `null` for an Anti-DDoS Advanced instance without using an EIP package.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    EipAddressPackRelation m_eipAddressPackRelation;
                    bool m_eipAddressPackRelationHasBeenSet;

                    /**
                     * Details of the Anti-DDoS Advanced instance bound to the EIP.
Note: This field is `null` if the EIP is not bound to an Anti-DDoS Advanced instance.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    EipAddressRelation m_eipAddressInfo;
                    bool m_eipAddressInfoHasBeenSet;

                    /**
                     * Recommended domain name for clients to access.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Whether to enable Sec-MCA. Valid values: `1` (enabled) and `0` (disabled).
                     */
                    uint64_t m_damDDoSStatus;
                    bool m_damDDoSStatusHasBeenSet;

                    /**
                     * Whether it’s an IPv6 address. `1`: Yes; `0`: No.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_v6Flag;
                    bool m_v6FlagHasBeenSet;

                    /**
                     * Whether it’s an Anti-DDoS Advanced instance from Tencent Cloud channels. `1`: Yes; `0`: No.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_bGPIPChannelFlag;
                    bool m_bGPIPChannelFlagHasBeenSet;

                    /**
                     * Tag that the Anti-DDoS Advanced instance is associated with
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * All-out package details of the instance
When an all-out package is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AnycastOutPackRelation m_anycastOutPackRelation;
                    bool m_anycastOutPackRelationHasBeenSet;

                    /**
                     * Edition of the instance
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Convoy instance ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_convoyId;
                    bool m_convoyIdHasBeenSet;

                    /**
                     * Pay-as-you-go bandwidth
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    uint64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                    /**
                     * Whether it’s the IP broadcasted by EdgeOne. Values: `1` (yes), `0` (no)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eOFlag;
                    bool m_eOFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCE_H_

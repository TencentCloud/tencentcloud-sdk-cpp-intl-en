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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>
#include <tencentcloud/antiddos/v20200309/model/BGPInstanceSpecification.h>
#include <tencentcloud/antiddos/v20200309/model/BGPInstanceUsages.h>
#include <tencentcloud/antiddos/v20200309/model/RegionInfo.h>
#include <tencentcloud/antiddos/v20200309/model/PackInfo.h>
#include <tencentcloud/antiddos/v20200309/model/EipProductInfo.h>
#include <tencentcloud/antiddos/v20200309/model/TagInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Details of the Anti-DDoS Pro instance
                */
                class BGPInstance : public AbstractModel
                {
                public:
                    BGPInstance();
                    ~BGPInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Details of the Anti-DDoS Pro instance
                     * @return InstanceDetail Details of the Anti-DDoS Pro instance
                     * 
                     */
                    InstanceRelation GetInstanceDetail() const;

                    /**
                     * 设置Details of the Anti-DDoS Pro instance
                     * @param _instanceDetail Details of the Anti-DDoS Pro instance
                     * 
                     */
                    void SetInstanceDetail(const InstanceRelation& _instanceDetail);

                    /**
                     * 判断参数 InstanceDetail 是否已赋值
                     * @return InstanceDetail 是否已赋值
                     * 
                     */
                    bool InstanceDetailHasBeenSet() const;

                    /**
                     * 获取Specifications of the Anti-DDoS Pro instance
                     * @return SpecificationLimit Specifications of the Anti-DDoS Pro instance
                     * 
                     */
                    BGPInstanceSpecification GetSpecificationLimit() const;

                    /**
                     * 设置Specifications of the Anti-DDoS Pro instance
                     * @param _specificationLimit Specifications of the Anti-DDoS Pro instance
                     * 
                     */
                    void SetSpecificationLimit(const BGPInstanceSpecification& _specificationLimit);

                    /**
                     * 判断参数 SpecificationLimit 是否已赋值
                     * @return SpecificationLimit 是否已赋值
                     * 
                     */
                    bool SpecificationLimitHasBeenSet() const;

                    /**
                     * 获取Usage statistics of the Anti-DDoS Pro instance
                     * @return Usage Usage statistics of the Anti-DDoS Pro instance
                     * 
                     */
                    BGPInstanceUsages GetUsage() const;

                    /**
                     * 设置Usage statistics of the Anti-DDoS Pro instance
                     * @param _usage Usage statistics of the Anti-DDoS Pro instance
                     * 
                     */
                    void SetUsage(const BGPInstanceUsages& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Region of the Anti-DDoS Pro instance
                     * @return Region Region of the Anti-DDoS Pro instance
                     * 
                     */
                    RegionInfo GetRegion() const;

                    /**
                     * 设置Region of the Anti-DDoS Pro instance
                     * @param _region Region of the Anti-DDoS Pro instance
                     * 
                     */
                    void SetRegion(const RegionInfo& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Status of the Anti-DDoS Pro instance. Valid values:
`idle`: The instance is running normally.
`attacking`: The instance is under attack.
`blocking`: The instance is blocked.
`creating`: The instance is being created.
`deblocking`: Unblocking the instance
`isolate`: The instance is being isolated.
                     * @return Status Status of the Anti-DDoS Pro instance. Valid values:
`idle`: The instance is running normally.
`attacking`: The instance is under attack.
`blocking`: The instance is blocked.
`creating`: The instance is being created.
`deblocking`: Unblocking the instance
`isolate`: The instance is being isolated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the Anti-DDoS Pro instance. Valid values:
`idle`: The instance is running normally.
`attacking`: The instance is under attack.
`blocking`: The instance is blocked.
`creating`: The instance is being created.
`deblocking`: Unblocking the instance
`isolate`: The instance is being isolated.
                     * @param _status Status of the Anti-DDoS Pro instance. Valid values:
`idle`: The instance is running normally.
`attacking`: The instance is under attack.
`blocking`: The instance is blocked.
`creating`: The instance is being created.
`deblocking`: Unblocking the instance
`isolate`: The instance is being isolated.
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
                     * 获取Purchase time
                     * @return CreatedTime Purchase time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Purchase time
                     * @param _createdTime Purchase time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpiredTime Expiration time
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time
                     * @param _expiredTime Expiration time
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Name of the Anti-DDoS Pro instance
                     * @return Name Name of the Anti-DDoS Pro instance
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the Anti-DDoS Pro instance
                     * @param _name Name of the Anti-DDoS Pro instance
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Details of the package to which the Anti-DDoS Pro instance belongs.
When the package provided is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PackInfo Details of the package to which the Anti-DDoS Pro instance belongs.
When the package provided is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    PackInfo GetPackInfo() const;

                    /**
                     * 设置Details of the package to which the Anti-DDoS Pro instance belongs.
When the package provided is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _packInfo Details of the package to which the Anti-DDoS Pro instance belongs.
When the package provided is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPackInfo(const PackInfo& _packInfo);

                    /**
                     * 判断参数 PackInfo 是否已赋值
                     * @return PackInfo 是否已赋值
                     * 
                     */
                    bool PackInfoHasBeenSet() const;

                    /**
                     * 获取Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     * @return EipProductInfos Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     * 
                     */
                    std::vector<EipProductInfo> GetEipProductInfos() const;

                    /**
                     * 设置Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     * @param _eipProductInfos Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     * 
                     */
                    void SetEipProductInfos(const std::vector<EipProductInfo>& _eipProductInfos);

                    /**
                     * 判断参数 EipProductInfos 是否已赋值
                     * @return EipProductInfos 是否已赋值
                     * 
                     */
                    bool EipProductInfosHasBeenSet() const;

                    /**
                     * 获取Binding status of the Anti-DDoS Pro instance
`idle`: The instance is bound.
 `bounding`: Binding the instance.
`failed`: Failed to bind
]
                     * @return BoundStatus Binding status of the Anti-DDoS Pro instance
`idle`: The instance is bound.
 `bounding`: Binding the instance.
`failed`: Failed to bind
]
                     * 
                     */
                    std::string GetBoundStatus() const;

                    /**
                     * 设置Binding status of the Anti-DDoS Pro instance
`idle`: The instance is bound.
 `bounding`: Binding the instance.
`failed`: Failed to bind
]
                     * @param _boundStatus Binding status of the Anti-DDoS Pro instance
`idle`: The instance is bound.
 `bounding`: Binding the instance.
`failed`: Failed to bind
]
                     * 
                     */
                    void SetBoundStatus(const std::string& _boundStatus);

                    /**
                     * 判断参数 BoundStatus 是否已赋值
                     * @return BoundStatus 是否已赋值
                     * 
                     */
                    bool BoundStatusHasBeenSet() const;

                    /**
                     * 获取Layer-4 protection level
                     * @return DDoSLevel Layer-4 protection level
                     * 
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 设置Layer-4 protection level
                     * @param _dDoSLevel Layer-4 protection level
                     * 
                     */
                    void SetDDoSLevel(const std::string& _dDoSLevel);

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     * 
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取Status of CC protection
                     * @return CCEnable Status of CC protection
                     * 
                     */
                    int64_t GetCCEnable() const;

                    /**
                     * 设置Status of CC protection
                     * @param _cCEnable Status of CC protection
                     * 
                     */
                    void SetCCEnable(const int64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     * 
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取Tags associated with the resource
                     * @return TagInfoList Tags associated with the resource
                     * 
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置Tags associated with the resource
                     * @param _tagInfoList Tags associated with the resource
                     * 
                     */
                    void SetTagInfoList(const std::vector<TagInfo>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     * 
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取New edition of Anti-DDoS Pro
                     * @return IpCountNewFlag New edition of Anti-DDoS Pro
                     * 
                     */
                    uint64_t GetIpCountNewFlag() const;

                    /**
                     * 设置New edition of Anti-DDoS Pro
                     * @param _ipCountNewFlag New edition of Anti-DDoS Pro
                     * 
                     */
                    void SetIpCountNewFlag(const uint64_t& _ipCountNewFlag);

                    /**
                     * 判断参数 IpCountNewFlag 是否已赋值
                     * @return IpCountNewFlag 是否已赋值
                     * 
                     */
                    bool IpCountNewFlagHasBeenSet() const;

                    /**
                     * 获取The version of attack defense package
                     * @return VitalityVersion The version of attack defense package
                     * 
                     */
                    uint64_t GetVitalityVersion() const;

                    /**
                     * 设置The version of attack defense package
                     * @param _vitalityVersion The version of attack defense package
                     * 
                     */
                    void SetVitalityVersion(const uint64_t& _vitalityVersion);

                    /**
                     * 判断参数 VitalityVersion 是否已赋值
                     * @return VitalityVersion 是否已赋值
                     * 
                     */
                    bool VitalityVersionHasBeenSet() const;

                    /**
                     * 获取Network line
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Line Network line
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLine() const;

                    /**
                     * 设置Network line
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _line Network line
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLine(const uint64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取Whether to enable elastic bandwidth
                     * @return ElasticServiceBandwidth Whether to enable elastic bandwidth
                     * 
                     */
                    uint64_t GetElasticServiceBandwidth() const;

                    /**
                     * 设置Whether to enable elastic bandwidth
                     * @param _elasticServiceBandwidth Whether to enable elastic bandwidth
                     * 
                     */
                    void SetElasticServiceBandwidth(const uint64_t& _elasticServiceBandwidth);

                    /**
                     * 判断参数 ElasticServiceBandwidth 是否已赋值
                     * @return ElasticServiceBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticServiceBandwidthHasBeenSet() const;

                    /**
                     * 获取Bandwidth quota given away by Tencent Cloud
                     * @return GiftServiceBandWidth Bandwidth quota given away by Tencent Cloud
                     * 
                     */
                    int64_t GetGiftServiceBandWidth() const;

                    /**
                     * 设置Bandwidth quota given away by Tencent Cloud
                     * @param _giftServiceBandWidth Bandwidth quota given away by Tencent Cloud
                     * 
                     */
                    void SetGiftServiceBandWidth(const int64_t& _giftServiceBandWidth);

                    /**
                     * 判断参数 GiftServiceBandWidth 是否已赋值
                     * @return GiftServiceBandWidth 是否已赋值
                     * 
                     */
                    bool GiftServiceBandWidthHasBeenSet() const;

                private:

                    /**
                     * Details of the Anti-DDoS Pro instance
                     */
                    InstanceRelation m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * Specifications of the Anti-DDoS Pro instance
                     */
                    BGPInstanceSpecification m_specificationLimit;
                    bool m_specificationLimitHasBeenSet;

                    /**
                     * Usage statistics of the Anti-DDoS Pro instance
                     */
                    BGPInstanceUsages m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Region of the Anti-DDoS Pro instance
                     */
                    RegionInfo m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Status of the Anti-DDoS Pro instance. Valid values:
`idle`: The instance is running normally.
`attacking`: The instance is under attack.
`blocking`: The instance is blocked.
`creating`: The instance is being created.
`deblocking`: Unblocking the instance
`isolate`: The instance is being isolated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Purchase time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Name of the Anti-DDoS Pro instance
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Details of the package to which the Anti-DDoS Pro instance belongs.
When the package provided is not used by the instance, this field is `null`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    PackInfo m_packInfo;
                    bool m_packInfoHasBeenSet;

                    /**
                     * Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     */
                    std::vector<EipProductInfo> m_eipProductInfos;
                    bool m_eipProductInfosHasBeenSet;

                    /**
                     * Binding status of the Anti-DDoS Pro instance
`idle`: The instance is bound.
 `bounding`: Binding the instance.
`failed`: Failed to bind
]
                     */
                    std::string m_boundStatus;
                    bool m_boundStatusHasBeenSet;

                    /**
                     * Layer-4 protection level
                     */
                    std::string m_dDoSLevel;
                    bool m_dDoSLevelHasBeenSet;

                    /**
                     * Status of CC protection
                     */
                    int64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * Tags associated with the resource
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * New edition of Anti-DDoS Pro
                     */
                    uint64_t m_ipCountNewFlag;
                    bool m_ipCountNewFlagHasBeenSet;

                    /**
                     * The version of attack defense package
                     */
                    uint64_t m_vitalityVersion;
                    bool m_vitalityVersionHasBeenSet;

                    /**
                     * Network line
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * Whether to enable elastic bandwidth
                     */
                    uint64_t m_elasticServiceBandwidth;
                    bool m_elasticServiceBandwidthHasBeenSet;

                    /**
                     * Bandwidth quota given away by Tencent Cloud
                     */
                    int64_t m_giftServiceBandWidth;
                    bool m_giftServiceBandWidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_

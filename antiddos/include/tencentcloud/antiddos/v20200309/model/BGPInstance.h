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


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Anti-DDoS Pro instance details
                */
                class BGPInstance : public AbstractModel
                {
                public:
                    BGPInstance();
                    ~BGPInstance() = default;
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
                    BGPInstanceSpecification GetSpecificationLimit() const;

                    /**
                     * 设置Anti-DDoS instance specifications
                     * @param SpecificationLimit Anti-DDoS instance specifications
                     */
                    void SetSpecificationLimit(const BGPInstanceSpecification& _specificationLimit);

                    /**
                     * 判断参数 SpecificationLimit 是否已赋值
                     * @return SpecificationLimit 是否已赋值
                     */
                    bool SpecificationLimitHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance usage statistics
                     * @return Usage Anti-DDoS instance usage statistics
                     */
                    BGPInstanceUsages GetUsage() const;

                    /**
                     * 设置Anti-DDoS instance usage statistics
                     * @param Usage Anti-DDoS instance usage statistics
                     */
                    void SetUsage(const BGPInstanceUsages& _usage);

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
`deblocking`: unblocked
`isolate`: isolated
                     * @return Status Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocked
`isolate`: isolated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocked
`isolate`: isolated
                     * @param Status Status of the Anti-DDoS instance. Valid values:
`idle`: running
`attacking`: under attacks
`blocking`: blocked
`creating`: creating
`deblocking`: unblocked
`isolate`: isolated
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Purchase Time
                     * @return CreatedTime Purchase Time
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Purchase Time
                     * @param CreatedTime Purchase Time
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
                     * @return ExpiredTime Expiration time
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time
                     * @param ExpiredTime Expiration time
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

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
                     * 获取Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     * @return EipProductInfos Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     */
                    std::vector<EipProductInfo> GetEipProductInfos() const;

                    /**
                     * 设置Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     * @param EipProductInfos Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     */
                    void SetEipProductInfos(const std::vector<EipProductInfo>& _eipProductInfos);

                    /**
                     * 判断参数 EipProductInfos 是否已赋值
                     * @return EipProductInfos 是否已赋值
                     */
                    bool EipProductInfosHasBeenSet() const;

                    /**
                     * 获取Binding status of the Anti-DDoS Pro instance
`idle`: the instance is bound.
 `bounding`: the instance is in binding.
`failed`: the binding failed.
]
                     * @return BoundStatus Binding status of the Anti-DDoS Pro instance
`idle`: the instance is bound.
 `bounding`: the instance is in binding.
`failed`: the binding failed.
]
                     */
                    std::string GetBoundStatus() const;

                    /**
                     * 设置Binding status of the Anti-DDoS Pro instance
`idle`: the instance is bound.
 `bounding`: the instance is in binding.
`failed`: the binding failed.
]
                     * @param BoundStatus Binding status of the Anti-DDoS Pro instance
`idle`: the instance is bound.
 `bounding`: the instance is in binding.
`failed`: the binding failed.
]
                     */
                    void SetBoundStatus(const std::string& _boundStatus);

                    /**
                     * 判断参数 BoundStatus 是否已赋值
                     * @return BoundStatus 是否已赋值
                     */
                    bool BoundStatusHasBeenSet() const;

                    /**
                     * 获取Layer-4 protection level
                     * @return DDoSLevel Layer-4 protection level
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 设置Layer-4 protection level
                     * @param DDoSLevel Layer-4 protection level
                     */
                    void SetDDoSLevel(const std::string& _dDoSLevel);

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取CC protection switch
                     * @return CCEnable CC protection switch
                     */
                    int64_t GetCCEnable() const;

                    /**
                     * 设置CC protection switch
                     * @param CCEnable CC protection switch
                     */
                    void SetCCEnable(const int64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     */
                    bool CCEnableHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS instance details
                     */
                    InstanceRelation m_instanceDetail;
                    bool m_instanceDetailHasBeenSet;

                    /**
                     * Anti-DDoS instance specifications
                     */
                    BGPInstanceSpecification m_specificationLimit;
                    bool m_specificationLimitHasBeenSet;

                    /**
                     * Anti-DDoS instance usage statistics
                     */
                    BGPInstanceUsages m_usage;
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
`deblocking`: unblocked
`isolate`: isolated
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Purchase Time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

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
                     * Details of the cloud product used by the EIP bound to the Anti-DDoS Pro instance
                     */
                    std::vector<EipProductInfo> m_eipProductInfos;
                    bool m_eipProductInfosHasBeenSet;

                    /**
                     * Binding status of the Anti-DDoS Pro instance
`idle`: the instance is bound.
 `bounding`: the instance is in binding.
`failed`: the binding failed.
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
                     * CC protection switch
                     */
                    int64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCE_H_

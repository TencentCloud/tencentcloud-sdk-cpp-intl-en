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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/QPSPackageNew.h>
#include <tencentcloud/waf/v20180125/model/DomainPackageNew.h>
#include <tencentcloud/waf/v20180125/model/FraudPkg.h>
#include <tencentcloud/waf/v20180125/model/BotPkg.h>
#include <tencentcloud/waf/v20180125/model/BotQPS.h>
#include <tencentcloud/waf/v20180125/model/MajorEventsPkg.h>
#include <tencentcloud/waf/v20180125/model/HybridPkg.h>
#include <tencentcloud/waf/v20180125/model/ApiPkg.h>
#include <tencentcloud/waf/v20180125/model/MiniPkg.h>
#include <tencentcloud/waf/v20180125/model/MiniExtendPkg.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Detailed information of an instance
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique Instance ID
                     * @return InstanceId Unique Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Unique Instance ID
                     * @param _instanceId Unique Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Resource ID corresponding to the Instance, for billing usage
                     * @return ResourceIds Resource ID corresponding to the Instance, for billing usage
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置Resource ID corresponding to the Instance, for billing usage
                     * @param _resourceIds Resource ID corresponding to the Instance, for billing usage
                     * 
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

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
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag.

0: disable

1: enable
                     * @return RenewFlag Auto-renewal flag.

0: disable

1: enable
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag.

0: disable

1: enable
                     * @param _renewFlag Auto-renewal flag.

0: disable

1: enable
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Elastic billing switch.
0: disable

1: enable
                     * @return Mode Elastic billing switch.
0: disable

1: enable
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置Elastic billing switch.
0: disable

1: enable
                     * @param _mode Elastic billing switch.
0: disable

1: enable
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Instance package version.
101: Small and Micro Edition.
102: Ultra-light Edition.
2: Advanced Edition.
3: Enterprise Edition.
4: Ultimate Edition.
6: Exclusive Edition
                     * @return Level Instance package version.
101: Small and Micro Edition.
102: Ultra-light Edition.
2: Advanced Edition.
3: Enterprise Edition.
4: Ultimate Edition.
6: Exclusive Edition
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Instance package version.
101: Small and Micro Edition.
102: Ultra-light Edition.
2: Advanced Edition.
3: Enterprise Edition.
4: Ultimate Edition.
6: Exclusive Edition
                     * @param _level Instance package version.
101: Small and Micro Edition.
102: Ultra-light Edition.
2: Advanced Edition.
3: Enterprise Edition.
4: Ultimate Edition.
6: Exclusive Edition
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Instance expiration time
                     * @return ValidTime Instance expiration time
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置Instance expiration time
                     * @param _validTime Instance expiration time
                     * 
                     */
                    void SetValidTime(const std::string& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取Instance Start Time
                     * @return BeginTime Instance Start Time
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Instance Start Time
                     * @param _beginTime Instance Start Time
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Configured Domain Count
                     * @return DomainCount Configured Domain Count
                     * 
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 设置Configured Domain Count
                     * @param _domainCount Configured Domain Count
                     * 
                     */
                    void SetDomainCount(const uint64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取Maximum Domain Count
                     * @return SubDomainLimit Maximum Domain Count
                     * 
                     */
                    uint64_t GetSubDomainLimit() const;

                    /**
                     * 设置Maximum Domain Count
                     * @param _subDomainLimit Maximum Domain Count
                     * 
                     */
                    void SetSubDomainLimit(const uint64_t& _subDomainLimit);

                    /**
                     * 判断参数 SubDomainLimit 是否已赋值
                     * @return SubDomainLimit 是否已赋值
                     * 
                     */
                    bool SubDomainLimitHasBeenSet() const;

                    /**
                     * 获取Configured Primary Domain Count
                     * @return MainDomainCount Configured Primary Domain Count
                     * 
                     */
                    uint64_t GetMainDomainCount() const;

                    /**
                     * 设置Configured Primary Domain Count
                     * @param _mainDomainCount Configured Primary Domain Count
                     * 
                     */
                    void SetMainDomainCount(const uint64_t& _mainDomainCount);

                    /**
                     * 判断参数 MainDomainCount 是否已赋值
                     * @return MainDomainCount 是否已赋值
                     * 
                     */
                    bool MainDomainCountHasBeenSet() const;

                    /**
                     * 获取Maximum Number of Primary Domain Names
                     * @return MainDomainLimit Maximum Number of Primary Domain Names
                     * 
                     */
                    uint64_t GetMainDomainLimit() const;

                    /**
                     * 设置Maximum Number of Primary Domain Names
                     * @param _mainDomainLimit Maximum Number of Primary Domain Names
                     * 
                     */
                    void SetMainDomainLimit(const uint64_t& _mainDomainLimit);

                    /**
                     * 判断参数 MainDomainLimit 是否已赋值
                     * @return MainDomainLimit 是否已赋值
                     * 
                     */
                    bool MainDomainLimitHasBeenSet() const;

                    /**
                     * 获取Instance QPS Peak within 30 Days
                     * @return MaxQPS Instance QPS Peak within 30 Days
                     * 
                     */
                    uint64_t GetMaxQPS() const;

                    /**
                     * 设置Instance QPS Peak within 30 Days
                     * @param _maxQPS Instance QPS Peak within 30 Days
                     * 
                     */
                    void SetMaxQPS(const uint64_t& _maxQPS);

                    /**
                     * 判断参数 MaxQPS 是否已赋值
                     * @return MaxQPS 是否已赋值
                     * 
                     */
                    bool MaxQPSHasBeenSet() const;

                    /**
                     * 获取QPS Expansion Package Information
                     * @return QPS QPS Expansion Package Information
                     * 
                     */
                    QPSPackageNew GetQPS() const;

                    /**
                     * 设置QPS Expansion Package Information
                     * @param _qPS QPS Expansion Package Information
                     * 
                     */
                    void SetQPS(const QPSPackageNew& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     * 
                     */
                    bool QPSHasBeenSet() const;

                    /**
                     * 获取Domain Extension Package Information
                     * @return DomainPkg Domain Extension Package Information
                     * 
                     */
                    DomainPackageNew GetDomainPkg() const;

                    /**
                     * 设置Domain Extension Package Information
                     * @param _domainPkg Domain Extension Package Information
                     * 
                     */
                    void SetDomainPkg(const DomainPackageNew& _domainPkg);

                    /**
                     * 判断参数 DomainPkg 是否已赋值
                     * @return DomainPkg 是否已赋值
                     * 
                     */
                    bool DomainPkgHasBeenSet() const;

                    /**
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
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
                     * 获取CLB or SaaS
                     * @return Edition CLB or SaaS
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置CLB or SaaS
                     * @param _edition CLB or SaaS
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Business Security Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FraudPkg Business Security Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    FraudPkg GetFraudPkg() const;

                    /**
                     * 设置Business Security Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fraudPkg Business Security Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFraudPkg(const FraudPkg& _fraudPkg);

                    /**
                     * 判断参数 FraudPkg 是否已赋值
                     * @return FraudPkg 是否已赋值
                     * 
                     */
                    bool FraudPkgHasBeenSet() const;

                    /**
                     * 获取Bot Resource Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BotPkg Bot Resource Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BotPkg GetBotPkg() const;

                    /**
                     * 设置Bot Resource Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _botPkg Bot Resource Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotPkg(const BotPkg& _botPkg);

                    /**
                     * 判断参数 BotPkg 是否已赋值
                     * @return BotPkg 是否已赋值
                     * 
                     */
                    bool BotPkgHasBeenSet() const;

                    /**
                     * 获取Bot's QPS details

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BotQPS Bot's QPS details

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BotQPS GetBotQPS() const;

                    /**
                     * 设置Bot's QPS details

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _botQPS Bot's QPS details

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBotQPS(const BotQPS& _botQPS);

                    /**
                     * 判断参数 BotQPS 是否已赋值
                     * @return BotQPS 是否已赋值
                     * 
                     */
                    bool BotQPSHasBeenSet() const;

                    /**
                     * 获取QPS Elastic Billing Cap

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ElasticBilling QPS Elastic Billing Cap

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetElasticBilling() const;

                    /**
                     * 设置QPS Elastic Billing Cap

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _elasticBilling QPS Elastic Billing Cap

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetElasticBilling(const uint64_t& _elasticBilling);

                    /**
                     * 判断参数 ElasticBilling 是否已赋值
                     * @return ElasticBilling 是否已赋值
                     * 
                     */
                    bool ElasticBillingHasBeenSet() const;

                    /**
                     * 获取Attack Log Shipping Switch

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackLogPost Attack Log Shipping Switch

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAttackLogPost() const;

                    /**
                     * 设置Attack Log Shipping Switch

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackLogPost Attack Log Shipping Switch

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackLogPost(const int64_t& _attackLogPost);

                    /**
                     * 判断参数 AttackLogPost 是否已赋值
                     * @return AttackLogPost 是否已赋值
                     * 
                     */
                    bool AttackLogPostHasBeenSet() const;

                    /**
                     * 获取Peak Bandwidth, in B/s (Bytes per Second)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxBandwidth Peak Bandwidth, in B/s (Bytes per Second)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxBandwidth() const;

                    /**
                     * 设置Peak Bandwidth, in B/s (Bytes per Second)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxBandwidth Peak Bandwidth, in B/s (Bytes per Second)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxBandwidth(const uint64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取Whether API security is purchased
                     * @return APISecurity Whether API security is purchased
                     * 
                     */
                    uint64_t GetAPISecurity() const;

                    /**
                     * 设置Whether API security is purchased
                     * @param _aPISecurity Whether API security is purchased
                     * 
                     */
                    void SetAPISecurity(const uint64_t& _aPISecurity);

                    /**
                     * 判断参数 APISecurity 是否已赋值
                     * @return APISecurity 是否已赋值
                     * 
                     */
                    bool APISecurityHasBeenSet() const;

                    /**
                     * 获取Purchased QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QpsStandard Purchased QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetQpsStandard() const;

                    /**
                     * 设置Purchased QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qpsStandard Purchased QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQpsStandard(const uint64_t& _qpsStandard);

                    /**
                     * 判断参数 QpsStandard 是否已赋值
                     * @return QpsStandard 是否已赋值
                     * 
                     */
                    bool QpsStandardHasBeenSet() const;

                    /**
                     * 获取Purchased Bandwidth Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthStandard Purchased Bandwidth Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBandwidthStandard() const;

                    /**
                     * 设置Purchased Bandwidth Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidthStandard Purchased Bandwidth Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidthStandard(const uint64_t& _bandwidthStandard);

                    /**
                     * 判断参数 BandwidthStandard 是否已赋值
                     * @return BandwidthStandard 是否已赋值
                     * 
                     */
                    bool BandwidthStandardHasBeenSet() const;

                    /**
                     * 获取Instance status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Instance status

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Instance status

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Instance status

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance Sandbox QPS Value

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SandboxQps Instance Sandbox QPS Value

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSandboxQps() const;

                    /**
                     * 设置Instance Sandbox QPS Value

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sandboxQps Instance Sandbox QPS Value

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSandboxQps(const uint64_t& _sandboxQps);

                    /**
                     * 判断参数 SandboxQps 是否已赋值
                     * @return SandboxQps 是否已赋值
                     * 
                     */
                    bool SandboxQpsHasBeenSet() const;

                    /**
                     * 获取Whether API Security is on Trial

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAPISecurityTrial Whether API Security is on Trial

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsAPISecurityTrial() const;

                    /**
                     * 设置Whether API Security is on Trial

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isAPISecurityTrial Whether API Security is on Trial

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsAPISecurityTrial(const uint64_t& _isAPISecurityTrial);

                    /**
                     * 判断参数 IsAPISecurityTrial 是否已赋值
                     * @return IsAPISecurityTrial 是否已赋值
                     * 
                     */
                    bool IsAPISecurityTrialHasBeenSet() const;

                    /**
                     * 获取Premium Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MajorEventsPkg Premium Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MajorEventsPkg GetMajorEventsPkg() const;

                    /**
                     * 设置Premium Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _majorEventsPkg Premium Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMajorEventsPkg(const MajorEventsPkg& _majorEventsPkg);

                    /**
                     * 判断参数 MajorEventsPkg 是否已赋值
                     * @return MajorEventsPkg 是否已赋值
                     * 
                     */
                    bool MajorEventsPkgHasBeenSet() const;

                    /**
                     * 获取Hybrid Cloud Sub-node Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HybridPkg Hybrid Cloud Sub-node Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HybridPkg GetHybridPkg() const;

                    /**
                     * 设置Hybrid Cloud Sub-node Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hybridPkg Hybrid Cloud Sub-node Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHybridPkg(const HybridPkg& _hybridPkg);

                    /**
                     * 判断参数 HybridPkg 是否已赋值
                     * @return HybridPkg 是否已赋值
                     * 
                     */
                    bool HybridPkgHasBeenSet() const;

                    /**
                     * 获取API security resource package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiPkg API security resource package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ApiPkg GetApiPkg() const;

                    /**
                     * 设置API security resource package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiPkg API security resource package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiPkg(const ApiPkg& _apiPkg);

                    /**
                     * 判断参数 ApiPkg 是否已赋值
                     * @return ApiPkg 是否已赋值
                     * 
                     */
                    bool ApiPkgHasBeenSet() const;

                    /**
                     * 获取MMPS Acceleration Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiniPkg MMPS Acceleration Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MiniPkg GetMiniPkg() const;

                    /**
                     * 设置MMPS Acceleration Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _miniPkg MMPS Acceleration Package

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiniPkg(const MiniPkg& _miniPkg);

                    /**
                     * 判断参数 MiniPkg 是否已赋值
                     * @return MiniPkg 是否已赋值
                     * 
                     */
                    bool MiniPkgHasBeenSet() const;

                    /**
                     * 获取Mini Program QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiniQpsStandard Mini Program QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMiniQpsStandard() const;

                    /**
                     * 设置Mini Program QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _miniQpsStandard Mini Program QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiniQpsStandard(const uint64_t& _miniQpsStandard);

                    /**
                     * 判断参数 MiniQpsStandard 是否已赋值
                     * @return MiniQpsStandard 是否已赋值
                     * 
                     */
                    bool MiniQpsStandardHasBeenSet() const;

                    /**
                     * 获取Mini Program QPS Peak

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiniMaxQPS Mini Program QPS Peak

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMiniMaxQPS() const;

                    /**
                     * 设置Mini Program QPS Peak

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _miniMaxQPS Mini Program QPS Peak

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiniMaxQPS(const uint64_t& _miniMaxQPS);

                    /**
                     * 判断参数 MiniMaxQPS 是否已赋值
                     * @return MiniMaxQPS 是否已赋值
                     * 
                     */
                    bool MiniMaxQPSHasBeenSet() const;

                    /**
                     * 获取Last overage time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastQpsExceedTime Last overage time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastQpsExceedTime() const;

                    /**
                     * 设置Last overage time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastQpsExceedTime Last overage time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastQpsExceedTime(const std::string& _lastQpsExceedTime);

                    /**
                     * 判断参数 LastQpsExceedTime 是否已赋值
                     * @return LastQpsExceedTime 是否已赋值
                     * 
                     */
                    bool LastQpsExceedTimeHasBeenSet() const;

                    /**
                     * 获取ID quantity expansion package for secure mini program access.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MiniExtendPkg ID quantity expansion package for secure mini program access.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MiniExtendPkg GetMiniExtendPkg() const;

                    /**
                     * 设置ID quantity expansion package for secure mini program access.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _miniExtendPkg ID quantity expansion package for secure mini program access.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMiniExtendPkg(const MiniExtendPkg& _miniExtendPkg);

                    /**
                     * 判断参数 MiniExtendPkg 是否已赋值
                     * @return MiniExtendPkg 是否已赋值
                     * 
                     */
                    bool MiniExtendPkgHasBeenSet() const;

                    /**
                     * 获取Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingItem Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingItem Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取Flag for delay of instance deletion.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FreeDelayFlag Flag for delay of instance deletion.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFreeDelayFlag() const;

                    /**
                     * 设置Flag for delay of instance deletion.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _freeDelayFlag Flag for delay of instance deletion.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFreeDelayFlag(const uint64_t& _freeDelayFlag);

                    /**
                     * 判断参数 FreeDelayFlag 是否已赋值
                     * @return FreeDelayFlag 是否已赋值
                     * 
                     */
                    bool FreeDelayFlagHasBeenSet() const;

                private:

                    /**
                     * Unique Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Resource ID corresponding to the Instance, for billing usage
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Payment mode
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Auto-renewal flag.

0: disable

1: enable
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Elastic billing switch.
0: disable

1: enable
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Instance package version.
101: Small and Micro Edition.
102: Ultra-light Edition.
2: Advanced Edition.
3: Enterprise Edition.
4: Ultimate Edition.
6: Exclusive Edition
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Instance expiration time
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * Instance Start Time
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Configured Domain Count
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * Maximum Domain Count
                     */
                    uint64_t m_subDomainLimit;
                    bool m_subDomainLimitHasBeenSet;

                    /**
                     * Configured Primary Domain Count
                     */
                    uint64_t m_mainDomainCount;
                    bool m_mainDomainCountHasBeenSet;

                    /**
                     * Maximum Number of Primary Domain Names
                     */
                    uint64_t m_mainDomainLimit;
                    bool m_mainDomainLimitHasBeenSet;

                    /**
                     * Instance QPS Peak within 30 Days
                     */
                    uint64_t m_maxQPS;
                    bool m_maxQPSHasBeenSet;

                    /**
                     * QPS Expansion Package Information
                     */
                    QPSPackageNew m_qPS;
                    bool m_qPSHasBeenSet;

                    /**
                     * Domain Extension Package Information
                     */
                    DomainPackageNew m_domainPkg;
                    bool m_domainPkgHasBeenSet;

                    /**
                     * User appid.
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * CLB or SaaS
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Business Security Package

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    FraudPkg m_fraudPkg;
                    bool m_fraudPkgHasBeenSet;

                    /**
                     * Bot Resource Package

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BotPkg m_botPkg;
                    bool m_botPkgHasBeenSet;

                    /**
                     * Bot's QPS details

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BotQPS m_botQPS;
                    bool m_botQPSHasBeenSet;

                    /**
                     * QPS Elastic Billing Cap

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_elasticBilling;
                    bool m_elasticBillingHasBeenSet;

                    /**
                     * Attack Log Shipping Switch

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_attackLogPost;
                    bool m_attackLogPostHasBeenSet;

                    /**
                     * Peak Bandwidth, in B/s (Bytes per Second)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * Whether API security is purchased
                     */
                    uint64_t m_aPISecurity;
                    bool m_aPISecurityHasBeenSet;

                    /**
                     * Purchased QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_qpsStandard;
                    bool m_qpsStandardHasBeenSet;

                    /**
                     * Purchased Bandwidth Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bandwidthStandard;
                    bool m_bandwidthStandardHasBeenSet;

                    /**
                     * Instance status

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance Sandbox QPS Value

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sandboxQps;
                    bool m_sandboxQpsHasBeenSet;

                    /**
                     * Whether API Security is on Trial

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isAPISecurityTrial;
                    bool m_isAPISecurityTrialHasBeenSet;

                    /**
                     * Premium Package

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MajorEventsPkg m_majorEventsPkg;
                    bool m_majorEventsPkgHasBeenSet;

                    /**
                     * Hybrid Cloud Sub-node Package

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HybridPkg m_hybridPkg;
                    bool m_hybridPkgHasBeenSet;

                    /**
                     * API security resource package

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ApiPkg m_apiPkg;
                    bool m_apiPkgHasBeenSet;

                    /**
                     * MMPS Acceleration Package

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MiniPkg m_miniPkg;
                    bool m_miniPkgHasBeenSet;

                    /**
                     * Mini Program QPS Specification

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_miniQpsStandard;
                    bool m_miniQpsStandardHasBeenSet;

                    /**
                     * Mini Program QPS Peak

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_miniMaxQPS;
                    bool m_miniMaxQPSHasBeenSet;

                    /**
                     * Last overage time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastQpsExceedTime;
                    bool m_lastQpsExceedTimeHasBeenSet;

                    /**
                     * ID quantity expansion package for secure mini program access.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MiniExtendPkg m_miniExtendPkg;
                    bool m_miniExtendPkgHasBeenSet;

                    /**
                     * Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * Flag for delay of instance deletion.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_freeDelayFlag;
                    bool m_freeDelayFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INSTANCEINFO_H_

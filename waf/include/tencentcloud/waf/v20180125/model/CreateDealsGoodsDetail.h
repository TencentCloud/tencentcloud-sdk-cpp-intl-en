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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODSDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Product details
                */
                class CreateDealsGoodsDetail : public AbstractModel
                {
                public:
                    CreateDealsGoodsDetail();
                    ~CreateDealsGoodsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeSpan Time interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Time interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeSpan Time interval
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Unit, support for purchasing d, m, y, i.e., (day, month, year)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Unit, support for purchasing d, m, y, i.e., (day, month, year)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit, support for purchasing d, m, y, i.e., (day, month, year)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeUnit Unit, support for purchasing d, m, y, i.e., (day, month, year)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Sub-product tag. It is mandatory for new purchase and renewal. For configuration change, it will be placed in oldConfig and newConfig.

SaaS Advanced Edition: sp_wsm_waf_premium
SaaS Enterprise Edition: sp_wsm_waf_enterprise
SaaS Ultimate Edition: sp_wsm_waf_ultimate
SaaS business expansion package: sp_wsm_waf_qpsep
SaaS domain name expansion package: sp_wsm_waf_domain

Advanced Edition - CLB: sp_wsm_waf_premium_clb
Enterprise Edition - CLB: sp_wsm_waf_enterprise_clb
Ultimate Edition - CLB: sp_wsm_waf_ultimate_clb
 business expansion package - CLB: sp_wsm_waf_qpsep_clb
Domain name expansion package - CLB: sp_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubProductCode Sub-product tag. It is mandatory for new purchase and renewal. For configuration change, it will be placed in oldConfig and newConfig.

SaaS Advanced Edition: sp_wsm_waf_premium
SaaS Enterprise Edition: sp_wsm_waf_enterprise
SaaS Ultimate Edition: sp_wsm_waf_ultimate
SaaS business expansion package: sp_wsm_waf_qpsep
SaaS domain name expansion package: sp_wsm_waf_domain

Advanced Edition - CLB: sp_wsm_waf_premium_clb
Enterprise Edition - CLB: sp_wsm_waf_enterprise_clb
Ultimate Edition - CLB: sp_wsm_waf_ultimate_clb
 business expansion package - CLB: sp_wsm_waf_qpsep_clb
Domain name expansion package - CLB: sp_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置Sub-product tag. It is mandatory for new purchase and renewal. For configuration change, it will be placed in oldConfig and newConfig.

SaaS Advanced Edition: sp_wsm_waf_premium
SaaS Enterprise Edition: sp_wsm_waf_enterprise
SaaS Ultimate Edition: sp_wsm_waf_ultimate
SaaS business expansion package: sp_wsm_waf_qpsep
SaaS domain name expansion package: sp_wsm_waf_domain

Advanced Edition - CLB: sp_wsm_waf_premium_clb
Enterprise Edition - CLB: sp_wsm_waf_enterprise_clb
Ultimate Edition - CLB: sp_wsm_waf_ultimate_clb
 business expansion package - CLB: sp_wsm_waf_qpsep_clb
Domain name expansion package - CLB: sp_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subProductCode Sub-product tag. It is mandatory for new purchase and renewal. For configuration change, it will be placed in oldConfig and newConfig.

SaaS Advanced Edition: sp_wsm_waf_premium
SaaS Enterprise Edition: sp_wsm_waf_enterprise
SaaS Ultimate Edition: sp_wsm_waf_ultimate
SaaS business expansion package: sp_wsm_waf_qpsep
SaaS domain name expansion package: sp_wsm_waf_domain

Advanced Edition - CLB: sp_wsm_waf_premium_clb
Enterprise Edition - CLB: sp_wsm_waf_enterprise_clb
Ultimate Edition - CLB: sp_wsm_waf_ultimate_clb
 business expansion package - CLB: sp_wsm_waf_qpsep_clb
Domain name expansion package - CLB: sp_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取PID applied for a business product (corresponding to a pricing formula). The pricing model can be found through PID billing.
Advanced Edition: 1000827
Enterprise Edition: 1000830
Ultimate Edition: 1000832
Domain name package: 1000834
Business expansion package: 1000481
Advanced Edition - CLB: 1001150
Enterprise Edition - CLB: 1001152
Ultimate Edition - CLB: 1001154
Domain name package - CLB: 1001156
Business expansion package - CLB: 1001160

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pid PID applied for a business product (corresponding to a pricing formula). The pricing model can be found through PID billing.
Advanced Edition: 1000827
Enterprise Edition: 1000830
Ultimate Edition: 1000832
Domain name package: 1000834
Business expansion package: 1000481
Advanced Edition - CLB: 1001150
Enterprise Edition - CLB: 1001152
Ultimate Edition - CLB: 1001154
Domain name package - CLB: 1001156
Business expansion package - CLB: 1001160

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置PID applied for a business product (corresponding to a pricing formula). The pricing model can be found through PID billing.
Advanced Edition: 1000827
Enterprise Edition: 1000830
Ultimate Edition: 1000832
Domain name package: 1000834
Business expansion package: 1000481
Advanced Edition - CLB: 1001150
Enterprise Edition - CLB: 1001152
Ultimate Edition - CLB: 1001154
Domain name package - CLB: 1001156
Business expansion package - CLB: 1001160

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pid PID applied for a business product (corresponding to a pricing formula). The pricing model can be found through PID billing.
Advanced Edition: 1000827
Enterprise Edition: 1000830
Ultimate Edition: 1000832
Domain name package: 1000834
Business expansion package: 1000481
Advanced Edition - CLB: 1001150
Enterprise Edition - CLB: 1001152
Ultimate Edition - CLB: 1001154
Domain name package - CLB: 1001156
Business expansion package - CLB: 1001160

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取WAF Instance Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName WAF Instance Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置WAF Instance Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName WAF Instance Name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取1: Auto-renewal, 0: No Auto-renewal

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenewFlag 1: Auto-renewal, 0: No Auto-renewal

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置1: Auto-renewal, 0: No Auto-renewal

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRenewFlag 1: Auto-renewal, 0: No Auto-renewal

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Actual Geographic Information of WAF Purchase

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealRegion Actual Geographic Information of WAF Purchase

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRealRegion() const;

                    /**
                     * 设置Actual Geographic Information of WAF Purchase

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realRegion Actual Geographic Information of WAF Purchase

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealRegion(const int64_t& _realRegion);

                    /**
                     * 判断参数 RealRegion 是否已赋值
                     * @return RealRegion 是否已赋值
                     * 
                     */
                    bool RealRegionHasBeenSet() const;

                    /**
                     * 获取Billing Detail Tag Array

SaaS Advanced Edition: sv_wsm_waf_package_premium
SaaS Enterprise Edition: sv_wsm_waf_package_enterprise
SaaS Ultimate Edition: sv_wsm_waf_package_ultimate
SaaS non-Chinese Mainland Advanced Edition: sv_wsm_waf_package_premium_intl
SaaS non-Chinese Mainland Enterprise Edition: sv_wsm_waf_package_enterprise_intl
SaaS non-Chinese Mainland Ultimate Edition: sv_wsm_waf_package_ultimate_intl
SaaS business expansion package: sv_wsm_waf_qps_ep
SaaS domain name expansion package: sv_wsm_waf_domain

Advanced Edition CLB: sv_wsm_waf_package_premium_clb
Enterprise Edition CLB: sv_wsm_waf_package_enterprise_clb
Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb
Non-Chinese Mainland Advanced Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Enterprise Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb_intl
Business expansion package CLB: sv_wsm_waf_qps_ep_clb
Domain name expansion package CLB: sv_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelTypes Billing Detail Tag Array

SaaS Advanced Edition: sv_wsm_waf_package_premium
SaaS Enterprise Edition: sv_wsm_waf_package_enterprise
SaaS Ultimate Edition: sv_wsm_waf_package_ultimate
SaaS non-Chinese Mainland Advanced Edition: sv_wsm_waf_package_premium_intl
SaaS non-Chinese Mainland Enterprise Edition: sv_wsm_waf_package_enterprise_intl
SaaS non-Chinese Mainland Ultimate Edition: sv_wsm_waf_package_ultimate_intl
SaaS business expansion package: sv_wsm_waf_qps_ep
SaaS domain name expansion package: sv_wsm_waf_domain

Advanced Edition CLB: sv_wsm_waf_package_premium_clb
Enterprise Edition CLB: sv_wsm_waf_package_enterprise_clb
Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb
Non-Chinese Mainland Advanced Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Enterprise Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb_intl
Business expansion package CLB: sv_wsm_waf_qps_ep_clb
Domain name expansion package CLB: sv_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLabelTypes() const;

                    /**
                     * 设置Billing Detail Tag Array

SaaS Advanced Edition: sv_wsm_waf_package_premium
SaaS Enterprise Edition: sv_wsm_waf_package_enterprise
SaaS Ultimate Edition: sv_wsm_waf_package_ultimate
SaaS non-Chinese Mainland Advanced Edition: sv_wsm_waf_package_premium_intl
SaaS non-Chinese Mainland Enterprise Edition: sv_wsm_waf_package_enterprise_intl
SaaS non-Chinese Mainland Ultimate Edition: sv_wsm_waf_package_ultimate_intl
SaaS business expansion package: sv_wsm_waf_qps_ep
SaaS domain name expansion package: sv_wsm_waf_domain

Advanced Edition CLB: sv_wsm_waf_package_premium_clb
Enterprise Edition CLB: sv_wsm_waf_package_enterprise_clb
Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb
Non-Chinese Mainland Advanced Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Enterprise Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb_intl
Business expansion package CLB: sv_wsm_waf_qps_ep_clb
Domain name expansion package CLB: sv_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelTypes Billing Detail Tag Array

SaaS Advanced Edition: sv_wsm_waf_package_premium
SaaS Enterprise Edition: sv_wsm_waf_package_enterprise
SaaS Ultimate Edition: sv_wsm_waf_package_ultimate
SaaS non-Chinese Mainland Advanced Edition: sv_wsm_waf_package_premium_intl
SaaS non-Chinese Mainland Enterprise Edition: sv_wsm_waf_package_enterprise_intl
SaaS non-Chinese Mainland Ultimate Edition: sv_wsm_waf_package_ultimate_intl
SaaS business expansion package: sv_wsm_waf_qps_ep
SaaS domain name expansion package: sv_wsm_waf_domain

Advanced Edition CLB: sv_wsm_waf_package_premium_clb
Enterprise Edition CLB: sv_wsm_waf_package_enterprise_clb
Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb
Non-Chinese Mainland Advanced Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Enterprise Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb_intl
Business expansion package CLB: sv_wsm_waf_qps_ep_clb
Domain name expansion package CLB: sv_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelTypes(const std::vector<std::string>& _labelTypes);

                    /**
                     * 判断参数 LabelTypes 是否已赋值
                     * @return LabelTypes 是否已赋值
                     * 
                     */
                    bool LabelTypesHasBeenSet() const;

                    /**
                     * 获取Number of Billing Detail Tags, Generally Corresponds One-to-One with SvLabelType

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LabelCounts Number of Billing Detail Tags, Generally Corresponds One-to-One with SvLabelType

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetLabelCounts() const;

                    /**
                     * 设置Number of Billing Detail Tags, Generally Corresponds One-to-One with SvLabelType

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _labelCounts Number of Billing Detail Tags, Generally Corresponds One-to-One with SvLabelType

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabelCounts(const std::vector<int64_t>& _labelCounts);

                    /**
                     * 判断参数 LabelCounts 是否已赋值
                     * @return LabelCounts 是否已赋值
                     * 
                     */
                    bool LabelCountsHasBeenSet() const;

                    /**
                     * 获取Dynamic Configuration Usage, Instance Expiration Time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CurDeadline Dynamic Configuration Usage, Instance Expiration Time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置Dynamic Configuration Usage, Instance Expiration Time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _curDeadline Dynamic Configuration Usage, Instance Expiration Time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取Purchasing Bot or API Security for Existing Instances

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Purchasing Bot or API Security for Existing Instances

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Purchasing Bot or API Security for Existing Instances

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Purchasing Bot or API Security for Existing Instances

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Time interval
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Unit, support for purchasing d, m, y, i.e., (day, month, year)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Sub-product tag. It is mandatory for new purchase and renewal. For configuration change, it will be placed in oldConfig and newConfig.

SaaS Advanced Edition: sp_wsm_waf_premium
SaaS Enterprise Edition: sp_wsm_waf_enterprise
SaaS Ultimate Edition: sp_wsm_waf_ultimate
SaaS business expansion package: sp_wsm_waf_qpsep
SaaS domain name expansion package: sp_wsm_waf_domain

Advanced Edition - CLB: sp_wsm_waf_premium_clb
Enterprise Edition - CLB: sp_wsm_waf_enterprise_clb
Ultimate Edition - CLB: sp_wsm_waf_ultimate_clb
 business expansion package - CLB: sp_wsm_waf_qpsep_clb
Domain name expansion package - CLB: sp_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * PID applied for a business product (corresponding to a pricing formula). The pricing model can be found through PID billing.
Advanced Edition: 1000827
Enterprise Edition: 1000830
Ultimate Edition: 1000832
Domain name package: 1000834
Business expansion package: 1000481
Advanced Edition - CLB: 1001150
Enterprise Edition - CLB: 1001152
Ultimate Edition - CLB: 1001154
Domain name package - CLB: 1001156
Business expansion package - CLB: 1001160

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * WAF Instance Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 1: Auto-renewal, 0: No Auto-renewal

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Actual Geographic Information of WAF Purchase

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_realRegion;
                    bool m_realRegionHasBeenSet;

                    /**
                     * Billing Detail Tag Array

SaaS Advanced Edition: sv_wsm_waf_package_premium
SaaS Enterprise Edition: sv_wsm_waf_package_enterprise
SaaS Ultimate Edition: sv_wsm_waf_package_ultimate
SaaS non-Chinese Mainland Advanced Edition: sv_wsm_waf_package_premium_intl
SaaS non-Chinese Mainland Enterprise Edition: sv_wsm_waf_package_enterprise_intl
SaaS non-Chinese Mainland Ultimate Edition: sv_wsm_waf_package_ultimate_intl
SaaS business expansion package: sv_wsm_waf_qps_ep
SaaS domain name expansion package: sv_wsm_waf_domain

Advanced Edition CLB: sv_wsm_waf_package_premium_clb
Enterprise Edition CLB: sv_wsm_waf_package_enterprise_clb
Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb
Non-Chinese Mainland Advanced Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Enterprise Edition CLB: sv_wsm_waf_package_premium_clb_intl
Non-Chinese Mainland Ultimate Edition CLB: sv_wsm_waf_package_ultimate_clb_intl
Business expansion package CLB: sv_wsm_waf_qps_ep_clb
Domain name expansion package CLB: sv_wsm_waf_domain_clb

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_labelTypes;
                    bool m_labelTypesHasBeenSet;

                    /**
                     * Number of Billing Detail Tags, Generally Corresponds One-to-One with SvLabelType

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_labelCounts;
                    bool m_labelCountsHasBeenSet;

                    /**
                     * Dynamic Configuration Usage, Instance Expiration Time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * Purchasing Bot or API Security for Existing Instances

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODSDETAIL_H_

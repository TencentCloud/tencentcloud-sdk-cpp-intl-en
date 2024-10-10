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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_QPSPACKAGENEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_QPSPACKAGENEW_H_

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
                * CLB-WAF QPS package new
                */
                class QPSPackageNew : public AbstractModel
                {
                public:
                    QPSPackageNew();
                    ~QPSPackageNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceIds Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceIds Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ValidTime Expiration time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValidTime() const;

                    /**
                     * 设置Expiration time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _validTime Expiration time

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Auto-renewal, 1: Enabled, 0: Disabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Auto-renewal, 1: Enabled, 0: Disabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal, 1: Enabled, 0: Disabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Auto-renewal, 1: Enabled, 0: Disabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Number of Package Purchases

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Count Number of Package Purchases

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of Package Purchases

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _count Number of Package Purchases

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Package Purchase Region, currently not used in CLB-WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Package Purchase Region, currently not used in CLB-WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Package Purchase Region, currently not used in CLB-WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Package Purchase Region, currently not used in CLB-WAF

Note: This field may return null, indicating that no valid values can be obtained.
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

                private:

                    /**
                     * Resource ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Expiration time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * Auto-renewal, 1: Enabled, 0: Disabled

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Number of Package Purchases

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Package Purchase Region, currently not used in CLB-WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Billing item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_QPSPACKAGENEW_H_

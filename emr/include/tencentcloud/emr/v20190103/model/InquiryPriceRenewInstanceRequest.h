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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewInstance request structure.
                */
                class InquiryPriceRenewInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewInstanceRequest();
                    ~InquiryPriceRenewInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Duration of instance renewal. It is used together with TimeUnit. 1 indicates renewal for one month.
                     * @return TimeSpan Duration of instance renewal. It is used together with TimeUnit. 1 indicates renewal for one month.
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Duration of instance renewal. It is used together with TimeUnit. 1 indicates renewal for one month.
                     * @param _timeSpan Duration of instance renewal. It is used together with TimeUnit. 1 indicates renewal for one month.
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Only the value 1 is supported, indicating yearly/monthly subscription.
                     * @return PayMode Instance billing mode. Only the value 1 is supported, indicating yearly/monthly subscription.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Only the value 1 is supported, indicating yearly/monthly subscription.
                     * @param _payMode Instance billing mode. Only the value 1 is supported, indicating yearly/monthly subscription.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Resource ID list for nodes pending renewal. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * @return ResourceIds Resource ID list for nodes pending renewal. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID list for nodes pending renewal. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * @param _resourceIds Resource ID list for nodes pending renewal. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Time unit for instance renewal. Valid values:
<li>m: indicates month.</li>
                     * @return TimeUnit Time unit for instance renewal. Valid values:
<li>m: indicates month.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit for instance renewal. Valid values:
<li>m: indicates month.</li>
                     * @param _timeUnit Time unit for instance renewal. Valid values:
<li>m: indicates month.</li>
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
                     * 获取Currency type. Valid values:
<li>CNY: RMB</li>
                     * @return Currency Currency type. Valid values:
<li>CNY: RMB</li>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency type. Valid values:
<li>CNY: RMB</li>
                     * @param _currency Currency type. Valid values:
<li>CNY: RMB</li>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取
                     * @return Placement 
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置
                     * @param _placement 
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Whether to convert from pay-as-you-go to yearly/monthly subscription. Valid values: 0 (no) and 1 (yes).
                     * @return ModifyPayMode Whether to convert from pay-as-you-go to yearly/monthly subscription. Valid values: 0 (no) and 1 (yes).
                     * 
                     */
                    int64_t GetModifyPayMode() const;

                    /**
                     * 设置Whether to convert from pay-as-you-go to yearly/monthly subscription. Valid values: 0 (no) and 1 (yes).
                     * @param _modifyPayMode Whether to convert from pay-as-you-go to yearly/monthly subscription. Valid values: 0 (no) and 1 (yes).
                     * 
                     */
                    void SetModifyPayMode(const int64_t& _modifyPayMode);

                    /**
                     * 判断参数 ModifyPayMode 是否已赋值
                     * @return ModifyPayMode 是否已赋值
                     * 
                     */
                    bool ModifyPayModeHasBeenSet() const;

                    /**
                     * 获取Whether to return the renewal price for each node.
                     * @return NeedDetail Whether to return the renewal price for each node.
                     * 
                     */
                    bool GetNeedDetail() const;

                    /**
                     * 设置Whether to return the renewal price for each node.
                     * @param _needDetail Whether to return the renewal price for each node.
                     * 
                     */
                    void SetNeedDetail(const bool& _needDetail);

                    /**
                     * 判断参数 NeedDetail 是否已赋值
                     * @return NeedDetail 是否已赋值
                     * 
                     */
                    bool NeedDetailHasBeenSet() const;

                    /**
                     * 获取Cluster ID. Specify this parameter if you need renewal information for all yearly/monthly subscription nodes in the cluster.
                     * @return InstanceId Cluster ID. Specify this parameter if you need renewal information for all yearly/monthly subscription nodes in the cluster.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID. Specify this parameter if you need renewal information for all yearly/monthly subscription nodes in the cluster.
                     * @param _instanceId Cluster ID. Specify this parameter if you need renewal information for all yearly/monthly subscription nodes in the cluster.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Duration of instance renewal. It is used together with TimeUnit. 1 indicates renewal for one month.
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Instance billing mode. Only the value 1 is supported, indicating yearly/monthly subscription.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Resource ID list for nodes pending renewal. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Time unit for instance renewal. Valid values:
<li>m: indicates month.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Currency type. Valid values:
<li>CNY: RMB</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Whether to convert from pay-as-you-go to yearly/monthly subscription. Valid values: 0 (no) and 1 (yes).
                     */
                    int64_t m_modifyPayMode;
                    bool m_modifyPayModeHasBeenSet;

                    /**
                     * Whether to return the renewal price for each node.
                     */
                    bool m_needDetail;
                    bool m_needDetailHasBeenSet;

                    /**
                     * Cluster ID. Specify this parameter if you need renewal information for all yearly/monthly subscription nodes in the cluster.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_

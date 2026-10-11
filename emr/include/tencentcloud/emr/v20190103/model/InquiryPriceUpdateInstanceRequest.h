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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/UpdateInstanceSettings.h>
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
                * InquiryPriceUpdateInstance request structure.
                */
                class InquiryPriceUpdateInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceUpdateInstanceRequest();
                    ~InquiryPriceUpdateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Time unit for the configuration change. Valid values:
<li>s: second. When PayMode is set to 0, TimeUnit can only be set to s.</li>
<li>m: month. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @return TimeUnit Time unit for the configuration change. Valid values:
<li>s: second. When PayMode is set to 0, TimeUnit can only be set to s.</li>
<li>m: month. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit for the configuration change. Valid values:
<li>s: second. When PayMode is set to 0, TimeUnit can only be set to s.</li>
<li>m: month. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @param _timeUnit Time unit for the configuration change. Valid values:
<li>s: second. When PayMode is set to 0, TimeUnit can only be set to s.</li>
<li>m: month. When PayMode is set to 1, TimeUnit can only be set to m.</li>
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
                     * 获取Configuration change duration, which is used together with TimeUnit.
<li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li>
<li>When TimeUnit is set to m, the number entered for this parameter indicates the purchase duration of a yearly/monthly subscription instance. For example, the value 1 indicates one month.</li>
                     * @return TimeSpan Configuration change duration, which is used together with TimeUnit.
<li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li>
<li>When TimeUnit is set to m, the number entered for this parameter indicates the purchase duration of a yearly/monthly subscription instance. For example, the value 1 indicates one month.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Configuration change duration, which is used together with TimeUnit.
<li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li>
<li>When TimeUnit is set to m, the number entered for this parameter indicates the purchase duration of a yearly/monthly subscription instance. For example, the value 1 indicates one month.</li>
                     * @param _timeSpan Configuration change duration, which is used together with TimeUnit.
<li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li>
<li>When TimeUnit is set to m, the number entered for this parameter indicates the purchase duration of a yearly/monthly subscription instance. For example, the value 1 indicates one month.</li>
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
                     * 获取Instance billing mode. Valid values:
<li>0: pay-as-you-go</li>
<li>1: monthly subscription</li>
                     * @return PayMode Instance billing mode. Valid values:
<li>0: pay-as-you-go</li>
<li>1: monthly subscription</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid values:
<li>0: pay-as-you-go</li>
<li>1: monthly subscription</li>
                     * @param _payMode Instance billing mode. Valid values:
<li>0: pay-as-you-go</li>
<li>1: monthly subscription</li>
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
                     * 获取
                     * @return UpdateSpec 
                     * 
                     */
                    UpdateInstanceSettings GetUpdateSpec() const;

                    /**
                     * 设置
                     * @param _updateSpec 
                     * 
                     */
                    void SetUpdateSpec(const UpdateInstanceSettings& _updateSpec);

                    /**
                     * 判断参数 UpdateSpec 是否已赋值
                     * @return UpdateSpec 是否已赋值
                     * 
                     */
                    bool UpdateSpecHasBeenSet() const;

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
                     * 获取ID list of resources modified in batches.
                     * @return ResourceIdList ID list of resources modified in batches.
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置ID list of resources modified in batches.
                     * @param _resourceIdList ID list of resources modified in batches.
                     * 
                     */
                    void SetResourceIdList(const std::vector<std::string>& _resourceIdList);

                    /**
                     * 判断参数 ResourceIdList 是否已赋值
                     * @return ResourceIdList 是否已赋值
                     * 
                     */
                    bool ResourceIdListHasBeenSet() const;

                private:

                    /**
                     * Time unit for the configuration change. Valid values:
<li>s: second. When PayMode is set to 0, TimeUnit can only be set to s.</li>
<li>m: month. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Configuration change duration, which is used together with TimeUnit.
<li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li>
<li>When TimeUnit is set to m, the number entered for this parameter indicates the purchase duration of a yearly/monthly subscription instance. For example, the value 1 indicates one month.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:
<li>0: pay-as-you-go</li>
<li>1: monthly subscription</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 
                     */
                    UpdateInstanceSettings m_updateSpec;
                    bool m_updateSpecHasBeenSet;

                    /**
                     * 
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Currency type. Valid values:
<li>CNY: RMB</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * ID list of resources modified in batches.
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_

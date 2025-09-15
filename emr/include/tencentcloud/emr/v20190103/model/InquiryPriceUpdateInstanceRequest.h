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
                     * 获取Time unit of scaling. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * @return TimeUnit Time unit of scaling. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit of scaling. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     * @param _timeUnit Time unit of scaling. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
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
                     * 获取Duration of scaling, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * @return TimeSpan Duration of scaling, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Duration of scaling, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     * @param _timeSpan Duration of scaling, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
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
<li>0: pay-as-you-go.</li>
                     * @return PayMode Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     * @param _payMode Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
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
                     * 获取Currency.
                     * @return Currency Currency.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency.
                     * @param _currency Currency.
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
                     * 获取Target node specification.
                     * @return UpdateSpec Target node specification.
                     * 
                     */
                    UpdateInstanceSettings GetUpdateSpec() const;

                    /**
                     * 设置Target node specification.
                     * @param _updateSpec Target node specification.
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
                     * 获取Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @return Placement Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @param _placement Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
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
                     * 获取The resource ID list for batch configuration change.
                     * @return ResourceIdList The resource ID list for batch configuration change.
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置The resource ID list for batch configuration change.
                     * @param _resourceIdList The resource ID list for batch configuration change.
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
                     * Time unit of scaling. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Duration of scaling, which needs to be used together with `TimeUnit`.
<li>When `PayMode` is 0, `TimeSpan` can only be 3,600.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Target node specification.
                     */
                    UpdateInstanceSettings m_updateSpec;
                    bool m_updateSpecHasBeenSet;

                    /**
                     * Instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * The resource ID list for batch configuration change.
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCEREQUEST_H_

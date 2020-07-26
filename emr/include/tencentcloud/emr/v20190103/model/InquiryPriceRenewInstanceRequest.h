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
                     * 获取How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     * @return TimeSpan How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     * @param TimeSpan How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     * @return ResourceIds List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     * @param ResourceIds List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @return Placement Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @param Placement Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Instance billing mode.
                     * @return PayMode Instance billing mode.
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode.
                     * @param PayMode Instance billing mode.
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Unit of time for instance renewal.
                     * @return TimeUnit Unit of time for instance renewal.
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit of time for instance renewal.
                     * @param TimeUnit Unit of time for instance renewal.
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Currency.
                     * @return Currency Currency.
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency.
                     * @param Currency Currency.
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Instance billing mode.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Unit of time for instance renewal.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_

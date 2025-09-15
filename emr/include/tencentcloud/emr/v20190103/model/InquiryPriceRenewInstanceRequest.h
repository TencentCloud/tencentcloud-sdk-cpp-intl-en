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
                     * 获取How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     * @return TimeSpan How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     * @param _timeSpan How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
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
                     * 获取Instance billing mode.
                     * @return PayMode Instance billing mode.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode.
                     * @param _payMode Instance billing mode.
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
                     * 获取List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     * @return ResourceIds List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     * @param _resourceIds List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
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
                     * 获取Unit of time for instance renewal.
                     * @return TimeUnit Unit of time for instance renewal.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit of time for instance renewal.
                     * @param _timeUnit Unit of time for instance renewal.
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
                     * 获取Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @return Placement Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @param _placement Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
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
                     * 获取Whether to change from pay-as-you-go billing to monthly subscription billing. `0`: no; `1`: yes
                     * @return ModifyPayMode Whether to change from pay-as-you-go billing to monthly subscription billing. `0`: no; `1`: yes
                     * 
                     */
                    int64_t GetModifyPayMode() const;

                    /**
                     * 设置Whether to change from pay-as-you-go billing to monthly subscription billing. `0`: no; `1`: yes
                     * @param _modifyPayMode Whether to change from pay-as-you-go billing to monthly subscription billing. `0`: no; `1`: yes
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
                     * 获取Whether the renewal price for every node is required.
                     * @return NeedDetail Whether the renewal price for every node is required.
                     * 
                     */
                    bool GetNeedDetail() const;

                    /**
                     * 设置Whether the renewal price for every node is required.
                     * @param _needDetail Whether the renewal price for every node is required.
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
                     * 获取Cluster ID. This parameter can be filled to get renewal information for all yearly/monthly subscription nodes in the cluster.
                     * @return InstanceId Cluster ID. This parameter can be filled to get renewal information for all yearly/monthly subscription nodes in the cluster.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID. This parameter can be filled to get renewal information for all yearly/monthly subscription nodes in the cluster.
                     * @param _instanceId Cluster ID. This parameter can be filled to get renewal information for all yearly/monthly subscription nodes in the cluster.
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
                     * How long the instance will be renewed for, which needs to be used together with `TimeUnit`.
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Instance billing mode.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * List of resource IDs of the node to be renewed. The resource ID is in the format of `emr-vm-xxxxxxxx`. A valid resource ID can be queried in the [console](https://console.cloud.tencent.com/emr/static/hardware).
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

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

                    /**
                     * Location of the instance. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Whether to change from pay-as-you-go billing to monthly subscription billing. `0`: no; `1`: yes
                     */
                    int64_t m_modifyPayMode;
                    bool m_modifyPayModeHasBeenSet;

                    /**
                     * Whether the renewal price for every node is required.
                     */
                    bool m_needDetail;
                    bool m_needDetailHasBeenSet;

                    /**
                     * Cluster ID. This parameter can be filled to get renewal information for all yearly/monthly subscription nodes in the cluster.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCEREQUEST_H_

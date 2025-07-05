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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDER_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedClusterOrderItem.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CDC order
                */
                class DedicatedClusterOrder : public AbstractModel
                {
                public:
                    DedicatedClusterOrder();
                    ~DedicatedClusterOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDC id
                     * @return DedicatedClusterId CDC id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC id
                     * @param _dedicatedClusterId CDC id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取CDC type id (moved to the next level, obsolete and will be deleted later)
                     * @return DedicatedClusterTypeId CDC type id (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    std::string GetDedicatedClusterTypeId() const;

                    /**
                     * 设置CDC type id (moved to the next level, obsolete and will be deleted later)
                     * @param _dedicatedClusterTypeId CDC type id (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    void SetDedicatedClusterTypeId(const std::string& _dedicatedClusterTypeId);

                    /**
                     * 判断参数 DedicatedClusterTypeId 是否已赋值
                     * @return DedicatedClusterTypeId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdHasBeenSet() const;

                    /**
                     * 获取List of supported storage types (moved to the next level, obsolete and will be deleted later)
                     * @return SupportedStorageType List of supported storage types (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    std::vector<std::string> GetSupportedStorageType() const;

                    /**
                     * 设置List of supported storage types (moved to the next level, obsolete and will be deleted later)
                     * @param _supportedStorageType List of supported storage types (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    void SetSupportedStorageType(const std::vector<std::string>& _supportedStorageType);

                    /**
                     * 判断参数 SupportedStorageType 是否已赋值
                     * @return SupportedStorageType 是否已赋值
                     * 
                     */
                    bool SupportedStorageTypeHasBeenSet() const;

                    /**
                     * 获取Supported uplink switch transmission rate (GiB) (moved to the next level, obsolete and will be deleted later)
                     * @return SupportedUplinkSpeed Supported uplink switch transmission rate (GiB) (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    std::vector<int64_t> GetSupportedUplinkSpeed() const;

                    /**
                     * 设置Supported uplink switch transmission rate (GiB) (moved to the next level, obsolete and will be deleted later)
                     * @param _supportedUplinkSpeed Supported uplink switch transmission rate (GiB) (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    void SetSupportedUplinkSpeed(const std::vector<int64_t>& _supportedUplinkSpeed);

                    /**
                     * 判断参数 SupportedUplinkSpeed 是否已赋值
                     * @return SupportedUplinkSpeed 是否已赋值
                     * 
                     */
                    bool SupportedUplinkSpeedHasBeenSet() const;

                    /**
                     * 获取List of supported instance families (moved to the next level, obsolete and will be deleted later)
                     * @return SupportedInstanceFamily List of supported instance families (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    std::vector<std::string> GetSupportedInstanceFamily() const;

                    /**
                     * 设置List of supported instance families (moved to the next level, obsolete and will be deleted later)
                     * @param _supportedInstanceFamily List of supported instance families (moved to the next level, obsolete and will be deleted later)
                     * 
                     */
                    void SetSupportedInstanceFamily(const std::vector<std::string>& _supportedInstanceFamily);

                    /**
                     * 判断参数 SupportedInstanceFamily 是否已赋值
                     * @return SupportedInstanceFamily 是否已赋值
                     * 
                     */
                    bool SupportedInstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Floor weight capacity (KG)
                     * @return Weight Floor weight capacity (KG)
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Floor weight capacity (KG)
                     * @param _weight Floor weight capacity (KG)
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Power requirements (KW)
                     * @return PowerDraw Power requirements (KW)
                     * 
                     */
                    double GetPowerDraw() const;

                    /**
                     * 设置Power requirements (KW)
                     * @param _powerDraw Power requirements (KW)
                     * 
                     */
                    void SetPowerDraw(const double& _powerDraw);

                    /**
                     * 判断参数 PowerDraw 是否已赋值
                     * @return PowerDraw 是否已赋值
                     * 
                     */
                    bool PowerDrawHasBeenSet() const;

                    /**
                     * 获取Order status
                     * @return OrderStatus Order status
                     * 
                     */
                    std::string GetOrderStatus() const;

                    /**
                     * 设置Order status
                     * @param _orderStatus Order status
                     * 
                     */
                    void SetOrderStatus(const std::string& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取Order creation time
                     * @return CreateTime Order creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Order creation time
                     * @param _createTime Order creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Large order ID
                     * @return DedicatedClusterOrderId Large order ID
                     * 
                     */
                    std::string GetDedicatedClusterOrderId() const;

                    /**
                     * 设置Large order ID
                     * @param _dedicatedClusterOrderId Large order ID
                     * 
                     */
                    void SetDedicatedClusterOrderId(const std::string& _dedicatedClusterOrderId);

                    /**
                     * 判断参数 DedicatedClusterOrderId 是否已赋值
                     * @return DedicatedClusterOrderId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdHasBeenSet() const;

                    /**
                     * 获取Order type, CREATE or EXTEND
                     * @return Action Order type, CREATE or EXTEND
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Order type, CREATE or EXTEND
                     * @param _action Order type, CREATE or EXTEND
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取List of sub-order details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return DedicatedClusterOrderItems List of sub-order details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<DedicatedClusterOrderItem> GetDedicatedClusterOrderItems() const;

                    /**
                     * 设置List of sub-order details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _dedicatedClusterOrderItems List of sub-order details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDedicatedClusterOrderItems(const std::vector<DedicatedClusterOrderItem>& _dedicatedClusterOrderItems);

                    /**
                     * 判断参数 DedicatedClusterOrderItems 是否已赋值
                     * @return DedicatedClusterOrderItems 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderItemsHasBeenSet() const;

                    /**
                     * 获取CPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Cpu CPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _cpu CPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取MEM value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Mem MEM value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置MEM value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _mem MEM value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取GPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return Gpu GPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetGpu() const;

                    /**
                     * 设置GPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _gpu GPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetGpu(const int64_t& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                    /**
                     * 获取0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return PayStatus 0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetPayStatus() const;

                    /**
                     * 设置0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _payStatus 0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetPayStatus(const int64_t& _payStatus);

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     * 
                     */
                    bool PayStatusHasBeenSet() const;

                    /**
                     * 获取Payment method: lump-sum, monthly, and annually 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return PayType Payment method: lump-sum, monthly, and annually 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Payment method: lump-sum, monthly, and annually 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _payType Payment method: lump-sum, monthly, and annually 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Unit of purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return TimeUnit Unit of purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit of purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _timeUnit Unit of purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
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
                     * 获取Purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return TimeSpan Purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _timeSpan Purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
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
                     * 获取Order type 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return OrderType Order type 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Order type 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @param _orderType Order type 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CheckStatus 
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置
                     * @param _checkStatus 
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeliverExpectTime 
                     * 
                     */
                    std::string GetDeliverExpectTime() const;

                    /**
                     * 设置
                     * @param _deliverExpectTime 
                     * 
                     */
                    void SetDeliverExpectTime(const std::string& _deliverExpectTime);

                    /**
                     * 判断参数 DeliverExpectTime 是否已赋值
                     * @return DeliverExpectTime 是否已赋值
                     * 
                     */
                    bool DeliverExpectTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeliverFinishTime 
                     * 
                     */
                    std::string GetDeliverFinishTime() const;

                    /**
                     * 设置
                     * @param _deliverFinishTime 
                     * 
                     */
                    void SetDeliverFinishTime(const std::string& _deliverFinishTime);

                    /**
                     * 判断参数 DeliverFinishTime 是否已赋值
                     * @return DeliverFinishTime 是否已赋值
                     * 
                     */
                    bool DeliverFinishTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CheckExpectTime 
                     * 
                     */
                    std::string GetCheckExpectTime() const;

                    /**
                     * 设置
                     * @param _checkExpectTime 
                     * 
                     */
                    void SetCheckExpectTime(const std::string& _checkExpectTime);

                    /**
                     * 判断参数 CheckExpectTime 是否已赋值
                     * @return CheckExpectTime 是否已赋值
                     * 
                     */
                    bool CheckExpectTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return CheckFinishTime 
                     * 
                     */
                    std::string GetCheckFinishTime() const;

                    /**
                     * 设置
                     * @param _checkFinishTime 
                     * 
                     */
                    void SetCheckFinishTime(const std::string& _checkFinishTime);

                    /**
                     * 判断参数 CheckFinishTime 是否已赋值
                     * @return CheckFinishTime 是否已赋值
                     * 
                     */
                    bool CheckFinishTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return OrderSLA 
                     * 
                     */
                    std::string GetOrderSLA() const;

                    /**
                     * 设置
                     * @param _orderSLA 
                     * 
                     */
                    void SetOrderSLA(const std::string& _orderSLA);

                    /**
                     * 判断参数 OrderSLA 是否已赋值
                     * @return OrderSLA 是否已赋值
                     * 
                     */
                    bool OrderSLAHasBeenSet() const;

                    /**
                     * 获取
                     * @return OrderPayPlan 
                     * 
                     */
                    std::string GetOrderPayPlan() const;

                    /**
                     * 设置
                     * @param _orderPayPlan 
                     * 
                     */
                    void SetOrderPayPlan(const std::string& _orderPayPlan);

                    /**
                     * 判断参数 OrderPayPlan 是否已赋值
                     * @return OrderPayPlan 是否已赋值
                     * 
                     */
                    bool OrderPayPlanHasBeenSet() const;

                private:

                    /**
                     * CDC id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * CDC type id (moved to the next level, obsolete and will be deleted later)
                     */
                    std::string m_dedicatedClusterTypeId;
                    bool m_dedicatedClusterTypeIdHasBeenSet;

                    /**
                     * List of supported storage types (moved to the next level, obsolete and will be deleted later)
                     */
                    std::vector<std::string> m_supportedStorageType;
                    bool m_supportedStorageTypeHasBeenSet;

                    /**
                     * Supported uplink switch transmission rate (GiB) (moved to the next level, obsolete and will be deleted later)
                     */
                    std::vector<int64_t> m_supportedUplinkSpeed;
                    bool m_supportedUplinkSpeedHasBeenSet;

                    /**
                     * List of supported instance families (moved to the next level, obsolete and will be deleted later)
                     */
                    std::vector<std::string> m_supportedInstanceFamily;
                    bool m_supportedInstanceFamilyHasBeenSet;

                    /**
                     * Floor weight capacity (KG)
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Power requirements (KW)
                     */
                    double m_powerDraw;
                    bool m_powerDrawHasBeenSet;

                    /**
                     * Order status
                     */
                    std::string m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * Order creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Large order ID
                     */
                    std::string m_dedicatedClusterOrderId;
                    bool m_dedicatedClusterOrderIdHasBeenSet;

                    /**
                     * Order type, CREATE or EXTEND
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * List of sub-order details 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<DedicatedClusterOrderItem> m_dedicatedClusterOrderItems;
                    bool m_dedicatedClusterOrderItemsHasBeenSet;

                    /**
                     * CPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * MEM value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * GPU value 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_gpu;
                    bool m_gpuHasBeenSet;

                    /**
                     * 0 for unpaid, 1 for paid 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_payStatus;
                    bool m_payStatusHasBeenSet;

                    /**
                     * Payment method: lump-sum, monthly, and annually 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Unit of purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Purchased period 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Order type 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_deliverExpectTime;
                    bool m_deliverExpectTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_deliverFinishTime;
                    bool m_deliverFinishTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_checkExpectTime;
                    bool m_checkExpectTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_checkFinishTime;
                    bool m_checkFinishTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_orderSLA;
                    bool m_orderSLAHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_orderPayPlan;
                    bool m_orderPayPlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DEDICATEDCLUSTERORDER_H_

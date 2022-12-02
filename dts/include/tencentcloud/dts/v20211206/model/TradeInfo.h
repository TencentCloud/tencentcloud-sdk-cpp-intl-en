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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Billing status information
                */
                class TradeInfo : public AbstractModel
                {
                public:
                    TradeInfo();
                    ~TradeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealName Order number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DealName Order number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取Last order number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastDealName Last order number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastDealName() const;

                    /**
                     * 设置Last order number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param LastDealName Last order number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastDealName(const std::string& _lastDealName);

                    /**
                     * 判断参数 LastDealName 是否已赋值
                     * @return LastDealName 是否已赋值
                     */
                    bool LastDealNameHasBeenSet() const;

                    /**
                     * 获取Instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceClass Instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置Instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceClass Instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取Task billing status. Valid values: `normal` (billed or to be billed); `resizing` (adjusting configuration); `reversing` (topping up, which is a short status); `isolating` (isolating, which is a short status); `isolated` (isolated); `offlining` (deleting); `offlined` (deleted); `notBilled` (not billed).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TradeStatus Task billing status. Valid values: `normal` (billed or to be billed); `resizing` (adjusting configuration); `reversing` (topping up, which is a short status); `isolating` (isolating, which is a short status); `isolated` (isolated); `offlining` (deleting); `offlined` (deleted); `notBilled` (not billed).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTradeStatus() const;

                    /**
                     * 设置Task billing status. Valid values: `normal` (billed or to be billed); `resizing` (adjusting configuration); `reversing` (topping up, which is a short status); `isolating` (isolating, which is a short status); `isolated` (isolated); `offlining` (deleting); `offlined` (deleted); `notBilled` (not billed).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TradeStatus Task billing status. Valid values: `normal` (billed or to be billed); `resizing` (adjusting configuration); `reversing` (topping up, which is a short status); `isolating` (isolating, which is a short status); `isolated` (isolated); `offlining` (deleting); `offlined` (deleted); `notBilled` (not billed).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTradeStatus(const std::string& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取Expiration time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Expiration time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Deletion time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineTime Deletion time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置Deletion time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OfflineTime Deletion time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Isolation time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsolateTime Isolation time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取The cause of deletion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OfflineReason The cause of deletion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOfflineReason() const;

                    /**
                     * 设置The cause of deletion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OfflineReason The cause of deletion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOfflineReason(const std::string& _offlineReason);

                    /**
                     * 判断参数 OfflineReason 是否已赋值
                     * @return OfflineReason 是否已赋值
                     */
                    bool OfflineReasonHasBeenSet() const;

                    /**
                     * 获取The cause of isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateReason The cause of isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置The cause of isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsolateReason The cause of isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsolateReason(const std::string& _isolateReason);

                    /**
                     * 判断参数 IsolateReason 是否已赋值
                     * @return IsolateReason 是否已赋值
                     */
                    bool IsolateReasonHasBeenSet() const;

                    /**
                     * 获取Billing mode. Valid values: `postpay` (postpaid); `prepay` (prepaid).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayType Billing mode. Valid values: `postpay` (postpaid); `prepay` (prepaid).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Billing mode. Valid values: `postpay` (postpaid); `prepay` (prepaid).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PayType Billing mode. Valid values: `postpay` (postpaid); `prepay` (prepaid).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Task billing type. Valid values: `billing` (billed); `notBilling` (free); `promotions` (in promotion).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingType Task billing type. Valid values: `billing` (billed); `notBilling` (free); `promotions` (in promotion).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBillingType() const;

                    /**
                     * 设置Task billing type. Valid values: `billing` (billed); `notBilling` (free); `promotions` (in promotion).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BillingType Task billing type. Valid values: `billing` (billed); `notBilling` (free); `promotions` (in promotion).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBillingType(const std::string& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * Order number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Last order number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastDealName;
                    bool m_lastDealNameHasBeenSet;

                    /**
                     * Instance specification. Valid values: `micro`, `small`, `medium`, `large`, `xlarge`, `2xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * Task billing status. Valid values: `normal` (billed or to be billed); `resizing` (adjusting configuration); `reversing` (topping up, which is a short status); `isolating` (isolating, which is a short status); `isolated` (isolated); `offlining` (deleting); `offlined` (deleted); `notBilled` (not billed).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * Expiration time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Deletion time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * Isolation time in the format of "yyyy-mm-dd hh:mm:ss"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * The cause of deletion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_offlineReason;
                    bool m_offlineReasonHasBeenSet;

                    /**
                     * The cause of isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                    /**
                     * Billing mode. Valid values: `postpay` (postpaid); `prepay` (prepaid).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Task billing type. Valid values: `billing` (billed); `notBilling` (free); `promotions` (in promotion).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TRADEINFO_H_

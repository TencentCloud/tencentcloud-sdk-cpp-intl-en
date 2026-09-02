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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/OrderQuotaInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSCPayInfo response structure.
                */
                class DescribeCSCPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeCSCPayInfoResponse();
                    ~DescribeCSCPayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Tenant AppID.</p>
                     * @return AppID <p>Tenant AppID.</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Order status. Value: 0 (not purchased), 1 (normal), 2 (isolated), 3 (terminated), 4 (modified), 5 (renewed), 6 (trial use), 7 (expired), 8 (trial expiration).</p>
                     * @return OrderStatus <p>Order status. Value: 0 (not purchased), 1 (normal), 2 (isolated), 3 (terminated), 4 (modified), 5 (renewed), 6 (trial use), 7 (expired), 8 (trial expiration).</p>
                     * 
                     */
                    int64_t GetOrderStatus() const;

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode. Values: 0 (postpaid), 1 (prepaid).</p>
                     * @return PayMode <p>Payment mode. Values: 0 (postpaid), 1 (prepaid).</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Order start time, format: 2006-01-02 15:04:05.</p>
                     * @return BeginTime <p>Order start time, format: 2006-01-02 15:04:05.</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Order end time, format: 2006-01-02 15:04:05.</p>
                     * @return EndTime <p>Order end time, format: 2006-01-02 15:04:05.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal flag. Values: 0 (not set), 1 (auto-renewal), 2 (no auto-renewal).</p>
                     * @return AutoRenew <p>Auto-renewal flag. Values: 0 (not set), 1 (auto-renewal), 2 (no auto-renewal).</p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Purchase period.</p>
                     * @return TimeSpan <p>Purchase period.</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>Time unit, for example, m (month).</p>
                     * @return TimeUnit <p>Time unit, for example, m (month).</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>Resource ID.</p>
                     * @return ResourceId <p>Resource ID.</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Current server time, format: 2006-01-02 15:04:05.</p>
                     * @return TimeNow <p>Current server time, format: 2006-01-02 15:04:05.</p>
                     * 
                     */
                    std::string GetTimeNow() const;

                    /**
                     * 判断参数 TimeNow 是否已赋值
                     * @return TimeNow 是否已赋值
                     * 
                     */
                    bool TimeNowHasBeenSet() const;

                    /**
                     * 获取<p>Account UIN.</p>
                     * @return Uin <p>Account UIN.</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Account nickname.</p>
                     * @return NickName <p>Account nickname.</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a new user. Parameter Value: 1 (new user), 0 (existing user).</p>
                     * @return NewUser <p>Whether it is a new user. Parameter Value: 1 (new user), 0 (existing user).</p>
                     * 
                     */
                    int64_t GetNewUser() const;

                    /**
                     * 判断参数 NewUser 是否已赋值
                     * @return NewUser 是否已赋值
                     * 
                     */
                    bool NewUserHasBeenSet() const;

                    /**
                     * 获取<p>User billing info, with the Key L4</p>
                     * @return QuotaList <p>User billing info, with the Key L4</p>
                     * 
                     */
                    std::vector<OrderQuotaInfo> GetQuotaList() const;

                    /**
                     * 判断参数 QuotaList 是否已赋值
                     * @return QuotaList 是否已赋值
                     * 
                     */
                    bool QuotaListHasBeenSet() const;

                private:

                    /**
                     * <p>Tenant AppID.</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Order status. Value: 0 (not purchased), 1 (normal), 2 (isolated), 3 (terminated), 4 (modified), 5 (renewed), 6 (trial use), 7 (expired), 8 (trial expiration).</p>
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * <p>Payment mode. Values: 0 (postpaid), 1 (prepaid).</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Order start time, format: 2006-01-02 15:04:05.</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Order end time, format: 2006-01-02 15:04:05.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Auto-renewal flag. Values: 0 (not set), 1 (auto-renewal), 2 (no auto-renewal).</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Purchase period.</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Time unit, for example, m (month).</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Resource ID.</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Current server time, format: 2006-01-02 15:04:05.</p>
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * <p>Account UIN.</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Account nickname.</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>Whether it is a new user. Parameter Value: 1 (new user), 0 (existing user).</p>
                     */
                    int64_t m_newUser;
                    bool m_newUserHasBeenSet;

                    /**
                     * <p>User billing info, with the Key L4</p>
                     */
                    std::vector<OrderQuotaInfo> m_quotaList;
                    bool m_quotaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFORESPONSE_H_

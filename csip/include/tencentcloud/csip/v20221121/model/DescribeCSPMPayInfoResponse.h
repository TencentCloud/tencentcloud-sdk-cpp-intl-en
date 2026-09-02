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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMPAYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMPAYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSPMPayInfo response structure.
                */
                class DescribeCSPMPayInfoResponse : public AbstractModel
                {
                public:
                    DescribeCSPMPayInfoResponse();
                    ~DescribeCSPMPayInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取APPID
                     * @return AppID APPID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Order status. 0: not purchased; 1: normal; 2: isolated; 3: terminated; 6: in trial; 7: expired
                     * @return OrderStatus Order status. 0: not purchased; 1: normal; 2: isolated; 3: terminated; 6: in trial; 7: expired
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
                     * 获取Purchased CSPM scan quota
                     * @return CSPMNum Purchased CSPM scan quota
                     * 
                     */
                    int64_t GetCSPMNum() const;

                    /**
                     * 判断参数 CSPMNum 是否已赋值
                     * @return CSPMNum 是否已赋值
                     * 
                     */
                    bool CSPMNumHasBeenSet() const;

                    /**
                     * 获取Consumed CSPM scan quota
                     * @return UsedCount Consumed CSPM scan quota
                     * 
                     */
                    int64_t GetUsedCount() const;

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取Complimentary CSPM scan quota
                     * @return GrantedCSPMNum Complimentary CSPM scan quota
                     * 
                     */
                    int64_t GetGrantedCSPMNum() const;

                    /**
                     * 判断参数 GrantedCSPMNum 是否已赋值
                     * @return GrantedCSPMNum 是否已赋值
                     * 
                     */
                    bool GrantedCSPMNumHasBeenSet() const;

                    /**
                     * 获取Payment mode. 0: pay-as-you-go. 1: prepaid.
                     * @return PayMode Payment mode. 0: pay-as-you-go. 1: prepaid.
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
                     * 获取Whether to purchase separately. 1: purchase separately; 2: shared by other accounts.
                     * @return IsSelfBuy Whether to purchase separately. 1: purchase separately; 2: shared by other accounts.
                     * 
                     */
                    int64_t GetIsSelfBuy() const;

                    /**
                     * 判断参数 IsSelfBuy 是否已赋值
                     * @return IsSelfBuy 是否已赋值
                     * 
                     */
                    bool IsSelfBuyHasBeenSet() const;

                    /**
                     * 获取Order start time.
                     * @return BeginTime Order start time.
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
                     * 获取Order expiration time
                     * @return EndTime Order expiration time
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
                     * 获取0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user
                     * @return AutoRenew 0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Order duration
                     * @return TimeSpan Order duration
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
                     * 获取Duration unit.
                     * @return TimeUnit Duration unit.
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
                     * 获取Resource ID
                     * @return ResourceId Resource ID
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
                     * 获取Open beta end time
                     * @return BetaEndTime Open beta end time
                     * 
                     */
                    std::string GetBetaEndTime() const;

                    /**
                     * 判断参数 BetaEndTime 是否已赋值
                     * @return BetaEndTime 是否已赋值
                     * 
                     */
                    bool BetaEndTimeHasBeenSet() const;

                    /**
                     * 获取Current system time.
                     * @return TimeNow Current system time.
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
                     * 获取Whether to share with other accounts. 1: yes; 2: no
                     * @return IsShareToOther Whether to share with other accounts. 1: yes; 2: no
                     * 
                     */
                    int64_t GetIsShareToOther() const;

                    /**
                     * 判断参数 IsShareToOther 是否已赋值
                     * @return IsShareToOther 是否已赋值
                     * 
                     */
                    bool IsShareToOtherHasBeenSet() const;

                    /**
                     * 获取uin
                     * @return Uin uin
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
                     * 获取Nickname
                     * @return NickName Nickname
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                private:

                    /**
                     * APPID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Order status. 0: not purchased; 1: normal; 2: isolated; 3: terminated; 6: in trial; 7: expired
                     */
                    int64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * Purchased CSPM scan quota
                     */
                    int64_t m_cSPMNum;
                    bool m_cSPMNumHasBeenSet;

                    /**
                     * Consumed CSPM scan quota
                     */
                    int64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * Complimentary CSPM scan quota
                     */
                    int64_t m_grantedCSPMNum;
                    bool m_grantedCSPMNumHasBeenSet;

                    /**
                     * Payment mode. 0: pay-as-you-go. 1: prepaid.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Whether to purchase separately. 1: purchase separately; 2: shared by other accounts.
                     */
                    int64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

                    /**
                     * Order start time.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Order expiration time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Order duration
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Duration unit.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Open beta end time
                     */
                    std::string m_betaEndTime;
                    bool m_betaEndTimeHasBeenSet;

                    /**
                     * Current system time.
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * Whether to share with other accounts. 1: yes; 2: no
                     */
                    int64_t m_isShareToOther;
                    bool m_isShareToOtherHasBeenSet;

                    /**
                     * uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMPAYINFORESPONSE_H_

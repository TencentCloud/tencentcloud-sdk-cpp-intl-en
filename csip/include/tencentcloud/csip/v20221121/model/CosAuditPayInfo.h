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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketId.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos audit payment information
                */
                class CosAuditPayInfo : public AbstractModel
                {
                public:
                    CosAuditPayInfo();
                    ~CosAuditPayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appId <p>APPID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Order status. 0: Not purchased; 1: Normal; 2: Isolated; 3: Terminated; 6: In trial; 7: Expired</p>
                     * @return OrderStatus <p>Order status. 0: Not purchased; 1: Normal; 2: Isolated; 3: Terminated; 6: In trial; 7: Expired</p>
                     * 
                     */
                    uint64_t GetOrderStatus() const;

                    /**
                     * 设置<p>Order status. 0: Not purchased; 1: Normal; 2: Isolated; 3: Terminated; 6: In trial; 7: Expired</p>
                     * @param _orderStatus <p>Order status. 0: Not purchased; 1: Normal; 2: Isolated; 3: Terminated; 6: In trial; 7: Expired</p>
                     * 
                     */
                    void SetOrderStatus(const uint64_t& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取<p>The number of purchased object storage entries</p>
                     * @return BucketNum <p>The number of purchased object storage entries</p>
                     * 
                     */
                    uint64_t GetBucketNum() const;

                    /**
                     * 设置<p>The number of purchased object storage entries</p>
                     * @param _bucketNum <p>The number of purchased object storage entries</p>
                     * 
                     */
                    void SetBucketNum(const uint64_t& _bucketNum);

                    /**
                     * 判断参数 BucketNum 是否已赋值
                     * @return BucketNum 是否已赋值
                     * 
                     */
                    bool BucketNumHasBeenSet() const;

                    /**
                     * 获取<p>Payment mode. 0: postpaid. 1: prepaid.</p>
                     * @return PayMode <p>Payment mode. 0: postpaid. 1: prepaid.</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>Payment mode. 0: postpaid. 1: prepaid.</p>
                     * @param _payMode <p>Payment mode. 0: postpaid. 1: prepaid.</p>
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
                     * 获取<p>Whether to purchase separately. 1: purchase separately; 2: shared by other accounts</p>
                     * @return IsSelfBuy <p>Whether to purchase separately. 1: purchase separately; 2: shared by other accounts</p>
                     * 
                     */
                    uint64_t GetIsSelfBuy() const;

                    /**
                     * 设置<p>Whether to purchase separately. 1: purchase separately; 2: shared by other accounts</p>
                     * @param _isSelfBuy <p>Whether to purchase separately. 1: purchase separately; 2: shared by other accounts</p>
                     * 
                     */
                    void SetIsSelfBuy(const uint64_t& _isSelfBuy);

                    /**
                     * 判断参数 IsSelfBuy 是否已赋值
                     * @return IsSelfBuy 是否已赋值
                     * 
                     */
                    bool IsSelfBuyHasBeenSet() const;

                    /**
                     * 获取<p>Order start time.</p>
                     * @return BeginTime <p>Order start time.</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Order start time.</p>
                     * @param _beginTime <p>Order start time.</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>Order expiration time</p>
                     * @return EndTime <p>Order expiration time</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Order expiration time</p>
                     * @param _endTime <p>Order expiration time</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user</p>
                     * @return AutoRenew <p>0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user</p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user</p>
                     * @param _autoRenew <p>0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user</p>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Order duration</p>
                     * @return TimeSpan <p>Order duration</p>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Order duration</p>
                     * @param _timeSpan <p>Order duration</p>
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
                     * 获取<p>Duration unit</p>
                     * @return TimeUnit <p>Duration unit</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Duration unit</p>
                     * @param _timeUnit <p>Duration unit</p>
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
                     * 获取<p>Resource id</p>
                     * @return ResourceId <p>Resource id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource id</p>
                     * @param _resourceId <p>Resource id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Open beta end time</p>
                     * @return BetaEndTime <p>Open beta end time</p>
                     * 
                     */
                    std::string GetBetaEndTime() const;

                    /**
                     * 设置<p>Open beta end time</p>
                     * @param _betaEndTime <p>Open beta end time</p>
                     * 
                     */
                    void SetBetaEndTime(const std::string& _betaEndTime);

                    /**
                     * 判断参数 BetaEndTime 是否已赋值
                     * @return BetaEndTime 是否已赋值
                     * 
                     */
                    bool BetaEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Current system time.</p>
                     * @return TimeNow <p>Current system time.</p>
                     * 
                     */
                    std::string GetTimeNow() const;

                    /**
                     * 设置<p>Current system time.</p>
                     * @param _timeNow <p>Current system time.</p>
                     * 
                     */
                    void SetTimeNow(const std::string& _timeNow);

                    /**
                     * 判断参数 TimeNow 是否已赋值
                     * @return TimeNow 是否已赋值
                     * 
                     */
                    bool TimeNowHasBeenSet() const;

                    /**
                     * 获取<p>Whether to share with other accounts. 1: yes; 2: no</p>
                     * @return IsShareToOther <p>Whether to share with other accounts. 1: yes; 2: no</p>
                     * 
                     */
                    uint64_t GetIsShareToOther() const;

                    /**
                     * 设置<p>Whether to share with other accounts. 1: yes; 2: no</p>
                     * @param _isShareToOther <p>Whether to share with other accounts. 1: yes; 2: no</p>
                     * 
                     */
                    void SetIsShareToOther(const uint64_t& _isShareToOther);

                    /**
                     * 判断参数 IsShareToOther 是否已赋值
                     * @return IsShareToOther 是否已赋值
                     * 
                     */
                    bool IsShareToOtherHasBeenSet() const;

                    /**
                     * 获取<p>uin</p>
                     * @return Uin <p>uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>uin</p>
                     * @param _uin <p>uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Nickname</p>
                     * @return NickName <p>Nickname</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>Nickname</p>
                     * @param _nickName <p>Nickname</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>Shared bucketIdSet</p>
                     * @return BindBucket <p>Shared bucketIdSet</p>
                     * 
                     */
                    std::vector<CosBucketId> GetBindBucket() const;

                    /**
                     * 设置<p>Shared bucketIdSet</p>
                     * @param _bindBucket <p>Shared bucketIdSet</p>
                     * 
                     */
                    void SetBindBucket(const std::vector<CosBucketId>& _bindBucket);

                    /**
                     * 判断参数 BindBucket 是否已赋值
                     * @return BindBucket 是否已赋值
                     * 
                     */
                    bool BindBucketHasBeenSet() const;

                    /**
                     * 获取<p>Shared appid</p>
                     * @return SharedAppIdSet <p>Shared appid</p>
                     * 
                     */
                    std::vector<uint64_t> GetSharedAppIdSet() const;

                    /**
                     * 设置<p>Shared appid</p>
                     * @param _sharedAppIdSet <p>Shared appid</p>
                     * 
                     */
                    void SetSharedAppIdSet(const std::vector<uint64_t>& _sharedAppIdSet);

                    /**
                     * 判断参数 SharedAppIdSet 是否已赋值
                     * @return SharedAppIdSet 是否已赋值
                     * 
                     */
                    bool SharedAppIdSetHasBeenSet() const;

                    /**
                     * 获取<p>Whether pay-as-you-go is enabled</p>
                     * @return PostPayStatus <p>Whether pay-as-you-go is enabled</p>
                     * 
                     */
                    uint64_t GetPostPayStatus() const;

                    /**
                     * 设置<p>Whether pay-as-you-go is enabled</p>
                     * @param _postPayStatus <p>Whether pay-as-you-go is enabled</p>
                     * 
                     */
                    void SetPostPayStatus(const uint64_t& _postPayStatus);

                    /**
                     * 判断参数 PostPayStatus 是否已赋值
                     * @return PostPayStatus 是否已赋值
                     * 
                     */
                    bool PostPayStatusHasBeenSet() const;

                    /**
                     * 获取<p>0: No trial use yet   1: Trial use completed</p>
                     * @return IsTestUser <p>0: No trial use yet   1: Trial use completed</p>
                     * 
                     */
                    uint64_t GetIsTestUser() const;

                    /**
                     * 设置<p>0: No trial use yet   1: Trial use completed</p>
                     * @param _isTestUser <p>0: No trial use yet   1: Trial use completed</p>
                     * 
                     */
                    void SetIsTestUser(const uint64_t& _isTestUser);

                    /**
                     * 判断参数 IsTestUser 是否已赋值
                     * @return IsTestUser 是否已赋值
                     * 
                     */
                    bool IsTestUserHasBeenSet() const;

                    /**
                     * 获取<p>Remaining available quantity</p>
                     * @return AvailableBucketNum <p>Remaining available quantity</p>
                     * 
                     */
                    uint64_t GetAvailableBucketNum() const;

                    /**
                     * 设置<p>Remaining available quantity</p>
                     * @param _availableBucketNum <p>Remaining available quantity</p>
                     * 
                     */
                    void SetAvailableBucketNum(const uint64_t& _availableBucketNum);

                    /**
                     * 判断参数 AvailableBucketNum 是否已赋值
                     * @return AvailableBucketNum 是否已赋值
                     * 
                     */
                    bool AvailableBucketNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of buckets with monitoring on</p>
                     * @return MonitorBucketNum <p>Number of buckets with monitoring on</p>
                     * 
                     */
                    uint64_t GetMonitorBucketNum() const;

                    /**
                     * 设置<p>Number of buckets with monitoring on</p>
                     * @param _monitorBucketNum <p>Number of buckets with monitoring on</p>
                     * 
                     */
                    void SetMonitorBucketNum(const uint64_t& _monitorBucketNum);

                    /**
                     * 判断参数 MonitorBucketNum 是否已赋值
                     * @return MonitorBucketNum 是否已赋值
                     * 
                     */
                    bool MonitorBucketNumHasBeenSet() const;

                    /**
                     * 获取<p>Total number of buckets</p>
                     * @return TotalBucketNum <p>Total number of buckets</p>
                     * 
                     */
                    uint64_t GetTotalBucketNum() const;

                    /**
                     * 设置<p>Total number of buckets</p>
                     * @param _totalBucketNum <p>Total number of buckets</p>
                     * 
                     */
                    void SetTotalBucketNum(const uint64_t& _totalBucketNum);

                    /**
                     * 判断参数 TotalBucketNum 是否已赋值
                     * @return TotalBucketNum 是否已赋值
                     * 
                     */
                    bool TotalBucketNumHasBeenSet() const;

                    /**
                     * 获取<p>Postpaid product switch state</p>
                     * @return PostProductStatusList <p>Postpaid product switch state</p>
                     * 
                     */
                    std::vector<uint64_t> GetPostProductStatusList() const;

                    /**
                     * 设置<p>Postpaid product switch state</p>
                     * @param _postProductStatusList <p>Postpaid product switch state</p>
                     * 
                     */
                    void SetPostProductStatusList(const std::vector<uint64_t>& _postProductStatusList);

                    /**
                     * 判断参数 PostProductStatusList 是否已赋值
                     * @return PostProductStatusList 是否已赋值
                     * 
                     */
                    bool PostProductStatusListHasBeenSet() const;

                    /**
                     * 获取<p>Purchase status of postpaid products.</p>
                     * @return PostProductBuyStatusList <p>Purchase status of postpaid products.</p>
                     * 
                     */
                    std::vector<uint64_t> GetPostProductBuyStatusList() const;

                    /**
                     * 设置<p>Purchase status of postpaid products.</p>
                     * @param _postProductBuyStatusList <p>Purchase status of postpaid products.</p>
                     * 
                     */
                    void SetPostProductBuyStatusList(const std::vector<uint64_t>& _postProductBuyStatusList);

                    /**
                     * 判断参数 PostProductBuyStatusList 是否已赋值
                     * @return PostProductBuyStatusList 是否已赋值
                     * 
                     */
                    bool PostProductBuyStatusListHasBeenSet() const;

                    /**
                     * 获取<p>New postpaid resource ID</p>
                     * @return NewPostPayResourceId <p>New postpaid resource ID</p>
                     * 
                     */
                    std::string GetNewPostPayResourceId() const;

                    /**
                     * 设置<p>New postpaid resource ID</p>
                     * @param _newPostPayResourceId <p>New postpaid resource ID</p>
                     * 
                     */
                    void SetNewPostPayResourceId(const std::string& _newPostPayResourceId);

                    /**
                     * 判断参数 NewPostPayResourceId 是否已赋值
                     * @return NewPostPayResourceId 是否已赋值
                     * 
                     */
                    bool NewPostPayResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Order status. 0: Not purchased; 1: Normal; 2: Isolated; 3: Terminated; 6: In trial; 7: Expired</p>
                     */
                    uint64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * <p>The number of purchased object storage entries</p>
                     */
                    uint64_t m_bucketNum;
                    bool m_bucketNumHasBeenSet;

                    /**
                     * <p>Payment mode. 0: postpaid. 1: prepaid.</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Whether to purchase separately. 1: purchase separately; 2: shared by other accounts</p>
                     */
                    uint64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

                    /**
                     * <p>Order start time.</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>Order expiration time</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>0: not set by the user, 1: set to auto-renew by the user, 2: set not to auto-renew by the user</p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Order duration</p>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Duration unit</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Resource id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Open beta end time</p>
                     */
                    std::string m_betaEndTime;
                    bool m_betaEndTimeHasBeenSet;

                    /**
                     * <p>Current system time.</p>
                     */
                    std::string m_timeNow;
                    bool m_timeNowHasBeenSet;

                    /**
                     * <p>Whether to share with other accounts. 1: yes; 2: no</p>
                     */
                    uint64_t m_isShareToOther;
                    bool m_isShareToOtherHasBeenSet;

                    /**
                     * <p>uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Nickname</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>Shared bucketIdSet</p>
                     */
                    std::vector<CosBucketId> m_bindBucket;
                    bool m_bindBucketHasBeenSet;

                    /**
                     * <p>Shared appid</p>
                     */
                    std::vector<uint64_t> m_sharedAppIdSet;
                    bool m_sharedAppIdSetHasBeenSet;

                    /**
                     * <p>Whether pay-as-you-go is enabled</p>
                     */
                    uint64_t m_postPayStatus;
                    bool m_postPayStatusHasBeenSet;

                    /**
                     * <p>0: No trial use yet   1: Trial use completed</p>
                     */
                    uint64_t m_isTestUser;
                    bool m_isTestUserHasBeenSet;

                    /**
                     * <p>Remaining available quantity</p>
                     */
                    uint64_t m_availableBucketNum;
                    bool m_availableBucketNumHasBeenSet;

                    /**
                     * <p>Number of buckets with monitoring on</p>
                     */
                    uint64_t m_monitorBucketNum;
                    bool m_monitorBucketNumHasBeenSet;

                    /**
                     * <p>Total number of buckets</p>
                     */
                    uint64_t m_totalBucketNum;
                    bool m_totalBucketNumHasBeenSet;

                    /**
                     * <p>Postpaid product switch state</p>
                     */
                    std::vector<uint64_t> m_postProductStatusList;
                    bool m_postProductStatusListHasBeenSet;

                    /**
                     * <p>Purchase status of postpaid products.</p>
                     */
                    std::vector<uint64_t> m_postProductBuyStatusList;
                    bool m_postProductBuyStatusListHasBeenSet;

                    /**
                     * <p>New postpaid resource ID</p>
                     */
                    std::string m_newPostPayResourceId;
                    bool m_newPostPayResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSAUDITPAYINFO_H_

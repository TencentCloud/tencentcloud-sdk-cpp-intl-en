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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/UsageDetails.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * The usage records.
                */
                class UsageRecords : public AbstractModel
                {
                public:
                    UsageRecords();
                    ~UsageRecords() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The amount used. The value of this parameter is the amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @return UsedAmount The amount used. The value of this parameter is the amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    int64_t GetUsedAmount() const;

                    /**
                     * 设置The amount used. The value of this parameter is the amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * @param _usedAmount The amount used. The value of this parameter is the amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     * 
                     */
                    void SetUsedAmount(const int64_t& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取The time when the voucher was used.
                     * @return UsedTime The time when the voucher was used.
                     * 
                     */
                    std::string GetUsedTime() const;

                    /**
                     * 设置The time when the voucher was used.
                     * @param _usedTime The time when the voucher was used.
                     * 
                     */
                    void SetUsedTime(const std::string& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取Usage record details
                     * @return UsageDetails Usage record details
                     * 
                     */
                    std::vector<UsageDetails> GetUsageDetails() const;

                    /**
                     * 设置Usage record details
                     * @param _usageDetails Usage record details
                     * 
                     */
                    void SetUsageDetails(const std::vector<UsageDetails>& _usageDetails);

                    /**
                     * 判断参数 UsageDetails 是否已赋值
                     * @return UsageDetails 是否已赋值
                     * 
                     */
                    bool UsageDetailsHasBeenSet() const;

                    /**
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Queried coupon id
                     * @return VoucherId Queried coupon id
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置Queried coupon id
                     * @param _voucherId Queried coupon id
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取Transaction scene: (adjust: adjust accounts, common: normal transaction scene)
                     * @return PayScene Transaction scene: (adjust: adjust accounts, common: normal transaction scene)
                     * 
                     */
                    std::string GetPayScene() const;

                    /**
                     * 设置Transaction scene: (adjust: adjust accounts, common: normal transaction scene)
                     * @param _payScene Transaction scene: (adjust: adjust accounts, common: normal transaction scene)
                     * 
                     */
                    void SetPayScene(const std::string& _payScene);

                    /**
                     * 判断参数 PayScene 是否已赋值
                     * @return PayScene 是否已赋值
                     * 
                     */
                    bool PaySceneHasBeenSet() const;

                    /**
                     * 获取Unique ID, corresponding to transaction: prepaid dealName, bill adjustment/postpaid outTradeNo
                     * @return SeqId Unique ID, corresponding to transaction: prepaid dealName, bill adjustment/postpaid outTradeNo
                     * 
                     */
                    std::string GetSeqId() const;

                    /**
                     * 设置Unique ID, corresponding to transaction: prepaid dealName, bill adjustment/postpaid outTradeNo
                     * @param _seqId Unique ID, corresponding to transaction: prepaid dealName, bill adjustment/postpaid outTradeNo
                     * 
                     */
                    void SetSeqId(const std::string& _seqId);

                    /**
                     * 判断参数 SeqId 是否已赋值
                     * @return SeqId 是否已赋值
                     * 
                     */
                    bool SeqIdHasBeenSet() const;

                private:

                    /**
                     * The amount used. The value of this parameter is the amount used (USD, rounded to 8 decimal places) multiplied by 100,000,000.
                     */
                    int64_t m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * The time when the voucher was used.
                     */
                    std::string m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * Usage record details
                     */
                    std::vector<UsageDetails> m_usageDetails;
                    bool m_usageDetailsHasBeenSet;

                    /**
                     * Payment mode
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Queried coupon id
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * Transaction scene: (adjust: adjust accounts, common: normal transaction scene)
                     */
                    std::string m_payScene;
                    bool m_paySceneHasBeenSet;

                    /**
                     * Unique ID, corresponding to transaction: prepaid dealName, bill adjustment/postpaid outTradeNo
                     */
                    std::string m_seqId;
                    bool m_seqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_USAGERECORDS_H_

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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Abnormal adjustment details of UIN
                */
                class AdjustInfoDetail : public AbstractModel
                {
                public:
                    AdjustInfoDetail();
                    ~AdjustInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * @return PayerUin Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * @param _payerUin Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取Bill month, formatted as yyyy-MM.
                     * @return Month Bill month, formatted as yyyy-MM.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month, formatted as yyyy-MM.
                     * @param _month Bill month, formatted as yyyy-MM.
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取Adjustment type
Bill adjustment: manualAdjustment
Supplementary settlement: supplementarySettlement
Re-settlement
                     * @return AdjustType Adjustment type
Bill adjustment: manualAdjustment
Supplementary settlement: supplementarySettlement
Re-settlement
                     * 
                     */
                    std::string GetAdjustType() const;

                    /**
                     * 设置Adjustment type
Bill adjustment: manualAdjustment
Supplementary settlement: supplementarySettlement
Re-settlement
                     * @param _adjustType Adjustment type
Bill adjustment: manualAdjustment
Supplementary settlement: supplementarySettlement
Re-settlement
                     * 
                     */
                    void SetAdjustType(const std::string& _adjustType);

                    /**
                     * 判断参数 AdjustType 是否已赋值
                     * @return AdjustType 是否已赋值
                     * 
                     */
                    bool AdjustTypeHasBeenSet() const;

                    /**
                     * 获取Adjustment Number
                     * @return AdjustNum Adjustment Number
                     * 
                     */
                    std::string GetAdjustNum() const;

                    /**
                     * 设置Adjustment Number
                     * @param _adjustNum Adjustment Number
                     * 
                     */
                    void SetAdjustNum(const std::string& _adjustNum);

                    /**
                     * 判断参数 AdjustNum 是否已赋值
                     * @return AdjustNum 是否已赋值
                     * 
                     */
                    bool AdjustNumHasBeenSet() const;

                    /**
                     * 获取Abnormal adjustment completion time. Format: yyyy-MM-dd HH:mm:ss
                     * @return AdjustCompletionTime Abnormal adjustment completion time. Format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetAdjustCompletionTime() const;

                    /**
                     * 设置Abnormal adjustment completion time. Format: yyyy-MM-dd HH:mm:ss
                     * @param _adjustCompletionTime Abnormal adjustment completion time. Format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetAdjustCompletionTime(const std::string& _adjustCompletionTime);

                    /**
                     * 判断参数 AdjustCompletionTime 是否已赋值
                     * @return AdjustCompletionTime 是否已赋值
                     * 
                     */
                    bool AdjustCompletionTimeHasBeenSet() const;

                    /**
                     * 获取Adjustment Amount
                     * @return AdjustAmount Adjustment Amount
                     * 
                     */
                    double GetAdjustAmount() const;

                    /**
                     * 设置Adjustment Amount
                     * @param _adjustAmount Adjustment Amount
                     * 
                     */
                    void SetAdjustAmount(const double& _adjustAmount);

                    /**
                     * 判断参数 AdjustAmount 是否已赋值
                     * @return AdjustAmount 是否已赋值
                     * 
                     */
                    bool AdjustAmountHasBeenSet() const;

                private:

                    /**
                     * Payer UIN: Account ID of the payer, which is the unique account identifier for the user in Tencent Cloud.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Bill month, formatted as yyyy-MM.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Adjustment type
Bill adjustment: manualAdjustment
Supplementary settlement: supplementarySettlement
Re-settlement
                     */
                    std::string m_adjustType;
                    bool m_adjustTypeHasBeenSet;

                    /**
                     * Adjustment Number
                     */
                    std::string m_adjustNum;
                    bool m_adjustNumHasBeenSet;

                    /**
                     * Abnormal adjustment completion time. Format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_adjustCompletionTime;
                    bool m_adjustCompletionTimeHasBeenSet;

                    /**
                     * Adjustment Amount
                     */
                    double m_adjustAmount;
                    bool m_adjustAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_

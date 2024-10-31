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
                * This API is used to view UIN exception adjustment details.
                */
                class AdjustInfoDetail : public AbstractModel
                {
                public:
                    AdjustInfoDetail();
                    ~AdjustInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Payer UIN, namely the account ID of the payer. The account ID is the user's unique account identifier on Tencent Cloud.
Note: This field may return null, indicating that no valid values can be obtained.
Example value: 909619400.
                     * @return PayerUin Payer UIN, namely the account ID of the payer. The account ID is the user's unique account identifier on Tencent Cloud.
Note: This field may return null, indicating that no valid values can be obtained.
Example value: 909619400.
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置Payer UIN, namely the account ID of the payer. The account ID is the user's unique account identifier on Tencent Cloud.
Note: This field may return null, indicating that no valid values can be obtained.
Example value: 909619400.
                     * @param _payerUin Payer UIN, namely the account ID of the payer. The account ID is the user's unique account identifier on Tencent Cloud.
Note: This field may return null, indicating that no valid values can be obtained.
Example value: 909619400.
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
                     * 获取Bill month. Format: yyyy-MM.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2024-10.
                     * @return Month Bill month. Format: yyyy-MM.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2024-10.
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month. Format: yyyy-MM.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2024-10.
                     * @param _month Bill month. Format: yyyy-MM.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2024-10.
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
                     * 获取Adjustment type.
Adjustment: manualAdjustment.
Supplementary settlement: supplementarySettlement.
Re-settlement: reSettlement.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: manualAdjustment.
                     * @return AdjustType Adjustment type.
Adjustment: manualAdjustment.
Supplementary settlement: supplementarySettlement.
Re-settlement: reSettlement.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: manualAdjustment.
                     * 
                     */
                    std::string GetAdjustType() const;

                    /**
                     * 设置Adjustment type.
Adjustment: manualAdjustment.
Supplementary settlement: supplementarySettlement.
Re-settlement: reSettlement.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: manualAdjustment.
                     * @param _adjustType Adjustment type.
Adjustment: manualAdjustment.
Supplementary settlement: supplementarySettlement.
Re-settlement: reSettlement.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: manualAdjustment.
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
                     * 获取Adjustment order number.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2220726096135.
                     * @return AdjustNum Adjustment order number.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2220726096135.
                     * 
                     */
                    std::string GetAdjustNum() const;

                    /**
                     * 设置Adjustment order number.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2220726096135.
                     * @param _adjustNum Adjustment order number.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2220726096135.
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
                     * 获取Completion time of exception adjustment. Format: yyyy-MM-dd HH:mm:ss.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2022-12-02 12:39:04.
                     * @return AdjustCompletionTime Completion time of exception adjustment. Format: yyyy-MM-dd HH:mm:ss.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2022-12-02 12:39:04.
                     * 
                     */
                    std::string GetAdjustCompletionTime() const;

                    /**
                     * 设置Completion time of exception adjustment. Format: yyyy-MM-dd HH:mm:ss.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2022-12-02 12:39:04.
                     * @param _adjustCompletionTime Completion time of exception adjustment. Format: yyyy-MM-dd HH:mm:ss.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2022-12-02 12:39:04.
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
                     * 获取Adjustment amount.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 333.00000000.
                     * @return AdjustAmount Adjustment amount.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 333.00000000.
                     * 
                     */
                    double GetAdjustAmount() const;

                    /**
                     * 设置Adjustment amount.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 333.00000000.
                     * @param _adjustAmount Adjustment amount.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 333.00000000.
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
                     * Payer UIN, namely the account ID of the payer. The account ID is the user's unique account identifier on Tencent Cloud.
Note: This field may return null, indicating that no valid values can be obtained.
Example value: 909619400.
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * Bill month. Format: yyyy-MM.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2024-10.
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Adjustment type.
Adjustment: manualAdjustment.
Supplementary settlement: supplementarySettlement.
Re-settlement: reSettlement.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: manualAdjustment.
                     */
                    std::string m_adjustType;
                    bool m_adjustTypeHasBeenSet;

                    /**
                     * Adjustment order number.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2220726096135.
                     */
                    std::string m_adjustNum;
                    bool m_adjustNumHasBeenSet;

                    /**
                     * Completion time of exception adjustment. Format: yyyy-MM-dd HH:mm:ss.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 2022-12-02 12:39:04.
                     */
                    std::string m_adjustCompletionTime;
                    bool m_adjustCompletionTimeHasBeenSet;

                    /**
                     * Adjustment amount.
Note: This field may return null, indicating that no valid value can be obtained.
Example value: 333.00000000.
                     */
                    double m_adjustAmount;
                    bool m_adjustAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ADJUSTINFODETAIL_H_

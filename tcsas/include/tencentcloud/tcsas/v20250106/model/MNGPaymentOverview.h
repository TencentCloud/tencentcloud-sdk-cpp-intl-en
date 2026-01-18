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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MNGPAYMENTOVERVIEW_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MNGPAYMENTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Payment overview data
                */
                class MNGPaymentOverview : public AbstractModel
                {
                public:
                    MNGPaymentOverview();
                    ~MNGPaymentOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Paid revenue / Number of paying users * 100%
                     * @return ARPPu Paid revenue / Number of paying users * 100%
                     * 
                     */
                    std::string GetARPPu() const;

                    /**
                     * 设置Paid revenue / Number of paying users * 100%
                     * @param _aRPPu Paid revenue / Number of paying users * 100%
                     * 
                     */
                    void SetARPPu(const std::string& _aRPPu);

                    /**
                     * 判断参数 ARPPu 是否已赋值
                     * @return ARPPu 是否已赋值
                     * 
                     */
                    bool ARPPuHasBeenSet() const;

                    /**
                     * 获取Data time in YYYYMMDD format
                     * @return DataTime Data time in YYYYMMDD format
                     * 
                     */
                    std::string GetDataTime() const;

                    /**
                     * 设置Data time in YYYYMMDD format
                     * @param _dataTime Data time in YYYYMMDD format
                     * 
                     */
                    void SetDataTime(const std::string& _dataTime);

                    /**
                     * 判断参数 DataTime 是否已赋值
                     * @return DataTime 是否已赋值
                     * 
                     */
                    bool DataTimeHasBeenSet() const;

                    /**
                     * 获取New paying user ratio = NewUserNum / OrderUserNum * 100%
                     * @return NewPaidUseRatio New paying user ratio = NewUserNum / OrderUserNum * 100%
                     * 
                     */
                    std::string GetNewPaidUseRatio() const;

                    /**
                     * 设置New paying user ratio = NewUserNum / OrderUserNum * 100%
                     * @param _newPaidUseRatio New paying user ratio = NewUserNum / OrderUserNum * 100%
                     * 
                     */
                    void SetNewPaidUseRatio(const std::string& _newPaidUseRatio);

                    /**
                     * 判断参数 NewPaidUseRatio 是否已赋值
                     * @return NewPaidUseRatio 是否已赋值
                     * 
                     */
                    bool NewPaidUseRatioHasBeenSet() const;

                    /**
                     * 获取Number of new paying users
                     * @return NewPaidUserNum Number of new paying users
                     * 
                     */
                    int64_t GetNewPaidUserNum() const;

                    /**
                     * 设置Number of new paying users
                     * @param _newPaidUserNum Number of new paying users
                     * 
                     */
                    void SetNewPaidUserNum(const int64_t& _newPaidUserNum);

                    /**
                     * 判断参数 NewPaidUserNum 是否已赋值
                     * @return NewPaidUserNum 是否已赋值
                     * 
                     */
                    bool NewPaidUserNumHasBeenSet() const;

                    /**
                     * 获取Total payment amount from new users
                     * @return NewUserPaidAmount Total payment amount from new users
                     * 
                     */
                    std::string GetNewUserPaidAmount() const;

                    /**
                     * 设置Total payment amount from new users
                     * @param _newUserPaidAmount Total payment amount from new users
                     * 
                     */
                    void SetNewUserPaidAmount(const std::string& _newUserPaidAmount);

                    /**
                     * 判断参数 NewUserPaidAmount 是否已赋值
                     * @return NewUserPaidAmount 是否已赋值
                     * 
                     */
                    bool NewUserPaidAmountHasBeenSet() const;

                    /**
                     * 获取Total payment amount
                     * @return PaidAmount Total payment amount
                     * 
                     */
                    std::string GetPaidAmount() const;

                    /**
                     * 设置Total payment amount
                     * @param _paidAmount Total payment amount
                     * 
                     */
                    void SetPaidAmount(const std::string& _paidAmount);

                    /**
                     * 判断参数 PaidAmount 是否已赋值
                     * @return PaidAmount 是否已赋值
                     * 
                     */
                    bool PaidAmountHasBeenSet() const;

                    /**
                     * 获取Number of paying users
                     * @return PaidUserNum Number of paying users
                     * 
                     */
                    int64_t GetPaidUserNum() const;

                    /**
                     * 设置Number of paying users
                     * @param _paidUserNum Number of paying users
                     * 
                     */
                    void SetPaidUserNum(const int64_t& _paidUserNum);

                    /**
                     * 判断参数 PaidUserNum 是否已赋值
                     * @return PaidUserNum 是否已赋值
                     * 
                     */
                    bool PaidUserNumHasBeenSet() const;

                    /**
                     * 获取Refund amount
                     * @return RefundAmount Refund amount
                     * 
                     */
                    std::string GetRefundAmount() const;

                    /**
                     * 设置Refund amount
                     * @param _refundAmount Refund amount
                     * 
                     */
                    void SetRefundAmount(const std::string& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                    /**
                     * 获取Number of refund orders
                     * @return RefundNum Number of refund orders
                     * 
                     */
                    int64_t GetRefundNum() const;

                    /**
                     * 设置Number of refund orders
                     * @param _refundNum Number of refund orders
                     * 
                     */
                    void SetRefundNum(const int64_t& _refundNum);

                    /**
                     * 判断参数 RefundNum 是否已赋值
                     * @return RefundNum 是否已赋值
                     * 
                     */
                    bool RefundNumHasBeenSet() const;

                    /**
                     * 获取Update time (timestamp in seconds)
                     * @return UpdateTime Update time (timestamp in seconds)
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time (timestamp in seconds)
                     * @param _updateTime Update time (timestamp in seconds)
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Paid revenue / Number of paying users * 100%
                     */
                    std::string m_aRPPu;
                    bool m_aRPPuHasBeenSet;

                    /**
                     * Data time in YYYYMMDD format
                     */
                    std::string m_dataTime;
                    bool m_dataTimeHasBeenSet;

                    /**
                     * New paying user ratio = NewUserNum / OrderUserNum * 100%
                     */
                    std::string m_newPaidUseRatio;
                    bool m_newPaidUseRatioHasBeenSet;

                    /**
                     * Number of new paying users
                     */
                    int64_t m_newPaidUserNum;
                    bool m_newPaidUserNumHasBeenSet;

                    /**
                     * Total payment amount from new users
                     */
                    std::string m_newUserPaidAmount;
                    bool m_newUserPaidAmountHasBeenSet;

                    /**
                     * Total payment amount
                     */
                    std::string m_paidAmount;
                    bool m_paidAmountHasBeenSet;

                    /**
                     * Number of paying users
                     */
                    int64_t m_paidUserNum;
                    bool m_paidUserNumHasBeenSet;

                    /**
                     * Refund amount
                     */
                    std::string m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                    /**
                     * Number of refund orders
                     */
                    int64_t m_refundNum;
                    bool m_refundNumHasBeenSet;

                    /**
                     * Update time (timestamp in seconds)
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MNGPAYMENTOVERVIEW_H_

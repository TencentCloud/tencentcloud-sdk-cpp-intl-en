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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINVOUCHERITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINVOUCHERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Customer voucher information
                */
                class QueryVoucherListByUinVoucherItem : public AbstractModel
                {
                public:
                    QueryVoucherListByUinVoucherItem();
                    ~QueryVoucherListByUinVoucherItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voucher ID
                     * @return VoucherId Voucher ID
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置Voucher ID
                     * @param _voucherId Voucher ID
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
                     * 获取Voucher status
                     * @return VoucherStatus Voucher status
                     * 
                     */
                    std::string GetVoucherStatus() const;

                    /**
                     * 设置Voucher status
                     * @param _voucherStatus Voucher status
                     * 
                     */
                    void SetVoucherStatus(const std::string& _voucherStatus);

                    /**
                     * 判断参数 VoucherStatus 是否已赋值
                     * @return VoucherStatus 是否已赋值
                     * 
                     */
                    bool VoucherStatusHasBeenSet() const;

                    /**
                     * 获取Voucher value
                     * @return TotalAmount Voucher value
                     * 
                     */
                    double GetTotalAmount() const;

                    /**
                     * 设置Voucher value
                     * @param _totalAmount Voucher value
                     * 
                     */
                    void SetTotalAmount(const double& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取Balance
                     * @return RemainAmount Balance
                     * 
                     */
                    double GetRemainAmount() const;

                    /**
                     * 设置Balance
                     * @param _remainAmount Balance
                     * 
                     */
                    void SetRemainAmount(const double& _remainAmount);

                    /**
                     * 判断参数 RemainAmount 是否已赋值
                     * @return RemainAmount 是否已赋值
                     * 
                     */
                    bool RemainAmountHasBeenSet() const;

                private:

                    /**
                     * Voucher ID
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * Voucher status
                     */
                    std::string m_voucherStatus;
                    bool m_voucherStatusHasBeenSet;

                    /**
                     * Voucher value
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Balance
                     */
                    double m_remainAmount;
                    bool m_remainAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINVOUCHERITEM_H_

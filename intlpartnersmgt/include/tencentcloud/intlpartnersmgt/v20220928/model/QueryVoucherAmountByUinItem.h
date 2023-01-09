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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERAMOUNTBYUINITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERAMOUNTBYUINITEM_H_

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
                * Customer voucher quota
                */
                class QueryVoucherAmountByUinItem : public AbstractModel
                {
                public:
                    QueryVoucherAmountByUinItem();
                    ~QueryVoucherAmountByUinItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Customer UIN
                     * @return ClientUin Customer UIN
                     */
                    int64_t GetClientUin() const;

                    /**
                     * 设置Customer UIN
                     * @param ClientUin Customer UIN
                     */
                    void SetClientUin(const int64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取Voucher quota
                     * @return TotalAmount Voucher quota
                     */
                    double GetTotalAmount() const;

                    /**
                     * 设置Voucher quota
                     * @param TotalAmount Voucher quota
                     */
                    void SetTotalAmount(const double& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取Voucher amount
                     * @return RemainAmount Voucher amount
                     */
                    double GetRemainAmount() const;

                    /**
                     * 设置Voucher amount
                     * @param RemainAmount Voucher amount
                     */
                    void SetRemainAmount(const double& _remainAmount);

                    /**
                     * 判断参数 RemainAmount 是否已赋值
                     * @return RemainAmount 是否已赋值
                     */
                    bool RemainAmountHasBeenSet() const;

                private:

                    /**
                     * Customer UIN
                     */
                    int64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Voucher quota
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * Voucher amount
                     */
                    double m_remainAmount;
                    bool m_remainAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERAMOUNTBYUINITEM_H_

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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARYBILLINGITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARYBILLINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Billing item for Token aggregation
                */
                class TokenSummaryBillingItem : public AbstractModel
                {
                public:
                    TokenSummaryBillingItem();
                    ~TokenSummaryBillingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing item. Values: input (input Token), output (output Token), cache (cache Token), call_count (call count).
                     * @return BillingItem Billing item. Values: input (input Token), output (output Token), cache (cache Token), call_count (call count).
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置Billing item. Values: input (input Token), output (output Token), cache (cache Token), call_count (call count).
                     * @param _billingItem Billing item. Values: input (input Token), output (output Token), cache (cache Token), call_count (call count).
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取Aggregated raw usage of this billing item during a period. Unit: tokens.
                     * @return TotalQty Aggregated raw usage of this billing item during a period. Unit: tokens.
                     * 
                     */
                    int64_t GetTotalQty() const;

                    /**
                     * 设置Aggregated raw usage of this billing item during a period. Unit: tokens.
                     * @param _totalQty Aggregated raw usage of this billing item during a period. Unit: tokens.
                     * 
                     */
                    void SetTotalQty(const int64_t& _totalQty);

                    /**
                     * 判断参数 TotalQty 是否已赋值
                     * @return TotalQty 是否已赋值
                     * 
                     */
                    bool TotalQtyHasBeenSet() const;

                private:

                    /**
                     * Billing item. Values: input (input Token), output (output Token), cache (cache Token), call_count (call count).
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * Aggregated raw usage of this billing item during a period. Unit: tokens.
                     */
                    int64_t m_totalQty;
                    bool m_totalQtyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_TOKENSUMMARYBILLINGITEM_H_

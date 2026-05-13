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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_GENERALSKU_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_GENERALSKU_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PriceTag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Generic cluster sales information
                */
                class GeneralSKU : public AbstractModel
                {
                public:
                    GeneralSKU();
                    ~GeneralSKU() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification flag
                     * @return SkuCode Specification flag
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Specification flag
                     * @param _skuCode Specification flag
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取available for sale
                     * @return OnSale available for sale
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置available for sale
                     * @param _onSale available for sale
                     * 
                     */
                    void SetOnSale(const bool& _onSale);

                    /**
                     * 判断参数 OnSale 是否已赋值
                     * @return OnSale 是否已赋值
                     * 
                     */
                    bool OnSaleHasBeenSet() const;

                    /**
                     * 获取TPS limit
                     * @return TpsLimit TPS limit
                     * 
                     */
                    int64_t GetTpsLimit() const;

                    /**
                     * 设置TPS limit
                     * @param _tpsLimit TPS limit
                     * 
                     */
                    void SetTpsLimit(const int64_t& _tpsLimit);

                    /**
                     * 判断参数 TpsLimit 是否已赋值
                     * @return TpsLimit 是否已赋值
                     * 
                     */
                    bool TpsLimitHasBeenSet() const;

                    /**
                     * 获取Number of topics free quota
                     * @return TopicNumLimit Number of topics free quota
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置Number of topics free quota
                     * @param _topicNumLimit Number of topics free quota
                     * 
                     */
                    void SetTopicNumLimit(const int64_t& _topicNumLimit);

                    /**
                     * 判断参数 TopicNumLimit 是否已赋值
                     * @return TopicNumLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLimitHasBeenSet() const;

                    /**
                     * 获取Number of topics cap
                     * @return TopicNumUpperLimit Number of topics cap
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 设置Number of topics cap
                     * @param _topicNumUpperLimit Number of topics cap
                     * 
                     */
                    void SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit);

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取Billing item information
                     * @return PriceTags Billing item information
                     * 
                     */
                    std::vector<PriceTag> GetPriceTags() const;

                    /**
                     * 设置Billing item information
                     * @param _priceTags Billing item information
                     * 
                     */
                    void SetPriceTags(const std::vector<PriceTag>& _priceTags);

                    /**
                     * 判断参数 PriceTags 是否已赋值
                     * @return PriceTags 是否已赋值
                     * 
                     */
                    bool PriceTagsHasBeenSet() const;

                    /**
                     * 获取Number of storage nodes
                     * @return NodeCount Number of storage nodes
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置Number of storage nodes
                     * @param _nodeCount Number of storage nodes
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                private:

                    /**
                     * Specification flag
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * available for sale
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * TPS limit
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Number of topics free quota
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * Number of topics cap
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                    /**
                     * Billing item information
                     */
                    std::vector<PriceTag> m_priceTags;
                    bool m_priceTagsHasBeenSet;

                    /**
                     * Number of storage nodes
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_GENERALSKU_H_

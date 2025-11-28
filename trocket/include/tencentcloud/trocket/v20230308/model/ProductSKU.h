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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCTSKU_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCTSKU_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/PriceTag.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Product sales information
                */
                class ProductSKU : public AbstractModel
                {
                public:
                    ProductSKU();
                    ~ProductSKU() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the product type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * @return InstanceType Specifies the product type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specifies the product type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * @param _instanceType Specifies the product type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Specification code
                     * @return SkuCode Specification code
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置Specification code
                     * @param _skuCode Specification code
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
                     * 获取Elastic TPS upper limit
                     * @return ScaledTpsLimit Elastic TPS upper limit
                     * 
                     */
                    int64_t GetScaledTpsLimit() const;

                    /**
                     * 设置Elastic TPS upper limit
                     * @param _scaledTpsLimit Elastic TPS upper limit
                     * 
                     */
                    void SetScaledTpsLimit(const int64_t& _scaledTpsLimit);

                    /**
                     * 判断参数 ScaledTpsLimit 是否已赋值
                     * @return ScaledTpsLimit 是否已赋值
                     * 
                     */
                    bool ScaledTpsLimitHasBeenSet() const;

                    /**
                     * 获取Default maximum number of topics.
                     * @return TopicNumLimit Default maximum number of topics.
                     * 
                     */
                    int64_t GetTopicNumLimit() const;

                    /**
                     * 设置Default maximum number of topics.
                     * @param _topicNumLimit Default maximum number of topics.
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
                     * 获取Maximum number of consumer groups
                     * @return GroupNumLimit Maximum number of consumer groups
                     * 
                     */
                    int64_t GetGroupNumLimit() const;

                    /**
                     * 设置Maximum number of consumer groups
                     * @param _groupNumLimit Maximum number of consumer groups
                     * 
                     */
                    void SetGroupNumLimit(const int64_t& _groupNumLimit);

                    /**
                     * 判断参数 GroupNumLimit 是否已赋值
                     * @return GroupNumLimit 是否已赋值
                     * 
                     */
                    bool GroupNumLimitHasBeenSet() const;

                    /**
                     * 获取Default message retention time, in hours
                     * @return DefaultRetention Default message retention time, in hours
                     * 
                     */
                    int64_t GetDefaultRetention() const;

                    /**
                     * 设置Default message retention time, in hours
                     * @param _defaultRetention Default message retention time, in hours
                     * 
                     */
                    void SetDefaultRetention(const int64_t& _defaultRetention);

                    /**
                     * 判断参数 DefaultRetention 是否已赋值
                     * @return DefaultRetention 是否已赋值
                     * 
                     */
                    bool DefaultRetentionHasBeenSet() const;

                    /**
                     * 获取Adjustable maximum message retention time, in hours
                     * @return RetentionUpperLimit Adjustable maximum message retention time, in hours
                     * 
                     */
                    int64_t GetRetentionUpperLimit() const;

                    /**
                     * 设置Adjustable maximum message retention time, in hours
                     * @param _retentionUpperLimit Adjustable maximum message retention time, in hours
                     * 
                     */
                    void SetRetentionUpperLimit(const int64_t& _retentionUpperLimit);

                    /**
                     * 判断参数 RetentionUpperLimit 是否已赋值
                     * @return RetentionUpperLimit 是否已赋值
                     * 
                     */
                    bool RetentionUpperLimitHasBeenSet() const;

                    /**
                     * 获取Adjustable minimum message retention time, in hours
                     * @return RetentionLowerLimit Adjustable minimum message retention time, in hours
                     * 
                     */
                    int64_t GetRetentionLowerLimit() const;

                    /**
                     * 设置Adjustable minimum message retention time, in hours
                     * @param _retentionLowerLimit Adjustable minimum message retention time, in hours
                     * 
                     */
                    void SetRetentionLowerLimit(const int64_t& _retentionLowerLimit);

                    /**
                     * 判断参数 RetentionLowerLimit 是否已赋值
                     * @return RetentionLowerLimit 是否已赋值
                     * 
                     */
                    bool RetentionLowerLimitHasBeenSet() const;

                    /**
                     * 获取Maximum delayed message duration, in hours
                     * @return MaxMessageDelay Maximum delayed message duration, in hours
                     * 
                     */
                    int64_t GetMaxMessageDelay() const;

                    /**
                     * 设置Maximum delayed message duration, in hours
                     * @param _maxMessageDelay Maximum delayed message duration, in hours
                     * 
                     */
                    void SetMaxMessageDelay(const int64_t& _maxMessageDelay);

                    /**
                     * 判断参数 MaxMessageDelay 是否已赋值
                     * @return MaxMessageDelay 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayHasBeenSet() const;

                    /**
                     * 获取Whether it is purchasable
                     * @return OnSale Whether it is purchasable
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置Whether it is purchasable
                     * @param _onSale Whether it is purchasable
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
                     * 获取Default maximum number of topics.
                     * @return TopicNumUpperLimit Default maximum number of topics.
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 设置Default maximum number of topics.
                     * @param _topicNumUpperLimit Default maximum number of topics.
                     * 
                     */
                    void SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit);

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                private:

                    /**
                     * Specifies the product type.
Trial version.
BASIC version.
PRO, professional edition.
PLATINUM edition.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Specification code
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * TPS limit
                     */
                    int64_t m_tpsLimit;
                    bool m_tpsLimitHasBeenSet;

                    /**
                     * Elastic TPS upper limit
                     */
                    int64_t m_scaledTpsLimit;
                    bool m_scaledTpsLimitHasBeenSet;

                    /**
                     * Default maximum number of topics.
                     */
                    int64_t m_topicNumLimit;
                    bool m_topicNumLimitHasBeenSet;

                    /**
                     * Maximum number of consumer groups
                     */
                    int64_t m_groupNumLimit;
                    bool m_groupNumLimitHasBeenSet;

                    /**
                     * Default message retention time, in hours
                     */
                    int64_t m_defaultRetention;
                    bool m_defaultRetentionHasBeenSet;

                    /**
                     * Adjustable maximum message retention time, in hours
                     */
                    int64_t m_retentionUpperLimit;
                    bool m_retentionUpperLimitHasBeenSet;

                    /**
                     * Adjustable minimum message retention time, in hours
                     */
                    int64_t m_retentionLowerLimit;
                    bool m_retentionLowerLimitHasBeenSet;

                    /**
                     * Maximum delayed message duration, in hours
                     */
                    int64_t m_maxMessageDelay;
                    bool m_maxMessageDelayHasBeenSet;

                    /**
                     * Whether it is purchasable
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                    /**
                     * Billing item information
                     */
                    std::vector<PriceTag> m_priceTags;
                    bool m_priceTagsHasBeenSet;

                    /**
                     * Default maximum number of topics.
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PRODUCTSKU_H_

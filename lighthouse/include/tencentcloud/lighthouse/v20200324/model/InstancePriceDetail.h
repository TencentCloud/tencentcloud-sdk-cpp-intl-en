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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICEDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstancePrice.h>
#include <tencentcloud/lighthouse/v20200324/model/DiscountDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Instance price details
                */
                class InstancePriceDetail : public AbstractModel
                {
                public:
                    InstancePriceDetail();
                    ~InstancePriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Price inquiry information.
                     * @return InstancePrice Price inquiry information.
                     * 
                     */
                    InstancePrice GetInstancePrice() const;

                    /**
                     * 设置Price inquiry information.
                     * @param _instancePrice Price inquiry information.
                     * 
                     */
                    void SetInstancePrice(const InstancePrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Discount gradient details. each gradient includes duration, discount percentage, total price, discount price, and discount details (user discount, official website discount, final discount).
                     * @return DiscountDetail Discount gradient details. each gradient includes duration, discount percentage, total price, discount price, and discount details (user discount, official website discount, final discount).
                     * 
                     */
                    std::vector<DiscountDetail> GetDiscountDetail() const;

                    /**
                     * 设置Discount gradient details. each gradient includes duration, discount percentage, total price, discount price, and discount details (user discount, official website discount, final discount).
                     * @param _discountDetail Discount gradient details. each gradient includes duration, discount percentage, total price, discount price, and discount details (user discount, official website discount, final discount).
                     * 
                     */
                    void SetDiscountDetail(const std::vector<DiscountDetail>& _discountDetail);

                    /**
                     * 判断参数 DiscountDetail 是否已赋值
                     * @return DiscountDetail 是否已赋值
                     * 
                     */
                    bool DiscountDetailHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Price inquiry information.
                     */
                    InstancePrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Discount gradient details. each gradient includes duration, discount percentage, total price, discount price, and discount details (user discount, official website discount, final discount).
                     */
                    std::vector<DiscountDetail> m_discountDetail;
                    bool m_discountDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICEDETAIL_H_

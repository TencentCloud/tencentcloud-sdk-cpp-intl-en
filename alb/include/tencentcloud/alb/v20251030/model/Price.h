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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_PRICE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/PostPayPriceInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Indicates the price of CLB
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Describes instance pricing. Unit: CNY/hour.
                     * @return InstancePrice Describes instance pricing. Unit: CNY/hour.
                     * 
                     */
                    PostPayPriceInfo GetInstancePrice() const;

                    /**
                     * 设置Describes instance pricing. Unit: CNY/hour.
                     * @param _instancePrice Describes instance pricing. Unit: CNY/hour.
                     * 
                     */
                    void SetInstancePrice(const PostPayPriceInfo& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取Describes the lcu price. Unit: CNY/lcu.
                     * @return LcuPrice Describes the lcu price. Unit: CNY/lcu.
                     * 
                     */
                    PostPayPriceInfo GetLcuPrice() const;

                    /**
                     * 设置Describes the lcu price. Unit: CNY/lcu.
                     * @param _lcuPrice Describes the lcu price. Unit: CNY/lcu.
                     * 
                     */
                    void SetLcuPrice(const PostPayPriceInfo& _lcuPrice);

                    /**
                     * 判断参数 LcuPrice 是否已赋值
                     * @return LcuPrice 是否已赋值
                     * 
                     */
                    bool LcuPriceHasBeenSet() const;

                private:

                    /**
                     * Describes instance pricing. Unit: CNY/hour.
                     */
                    PostPayPriceInfo m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * Describes the lcu price. Unit: CNY/lcu.
                     */
                    PostPayPriceInfo m_lcuPrice;
                    bool m_lcuPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_PRICE_H_

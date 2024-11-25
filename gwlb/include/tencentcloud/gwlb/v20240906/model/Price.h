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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_PRICE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/ItemPrice.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * It indicates the price of the GWLB.
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取It describes the instance price.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstancePrice It describes the instance price.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ItemPrice GetInstancePrice() const;

                    /**
                     * 设置It describes the instance price.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instancePrice It describes the instance price.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstancePrice(const ItemPrice& _instancePrice);

                    /**
                     * 判断参数 InstancePrice 是否已赋值
                     * @return InstancePrice 是否已赋值
                     * 
                     */
                    bool InstancePriceHasBeenSet() const;

                    /**
                     * 获取It describes the price of GLCU.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LcuPrice It describes the price of GLCU.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ItemPrice GetLcuPrice() const;

                    /**
                     * 设置It describes the price of GLCU.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lcuPrice It describes the price of GLCU.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLcuPrice(const ItemPrice& _lcuPrice);

                    /**
                     * 判断参数 LcuPrice 是否已赋值
                     * @return LcuPrice 是否已赋值
                     * 
                     */
                    bool LcuPriceHasBeenSet() const;

                private:

                    /**
                     * It describes the instance price.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ItemPrice m_instancePrice;
                    bool m_instancePriceHasBeenSet;

                    /**
                     * It describes the price of GLCU.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ItemPrice m_lcuPrice;
                    bool m_lcuPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_PRICE_H_

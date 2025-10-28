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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/GoodsPrice.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceMultiSpec response structure.
                */
                class InquirePriceMultiSpecResponse : public AbstractModel
                {
                public:
                    InquirePriceMultiSpecResponse();
                    ~InquirePriceMultiSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the product price.
                     * @return GoodsPrice Specifies the product price.
                     * 
                     */
                    std::vector<GoodsPrice> GetGoodsPrice() const;

                    /**
                     * 判断参数 GoodsPrice 是否已赋值
                     * @return GoodsPrice 是否已赋值
                     * 
                     */
                    bool GoodsPriceHasBeenSet() const;

                private:

                    /**
                     * Specifies the product price.
                     */
                    std::vector<GoodsPrice> m_goodsPrice;
                    bool m_goodsPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMULTISPECRESPONSE_H_

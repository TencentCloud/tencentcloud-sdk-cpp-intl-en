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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GENERATEDEALSANDPAYNEWREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GENERATEDEALSANDPAYNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/GoodNews.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * GenerateDealsAndPayNew request structure.
                */
                class GenerateDealsAndPayNewRequest : public AbstractModel
                {
                public:
                    GenerateDealsAndPayNewRequest();
                    ~GenerateDealsAndPayNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing and ordering input parameters
                     * @return Goods Billing and ordering input parameters
                     * 
                     */
                    std::vector<GoodNews> GetGoods() const;

                    /**
                     * 设置Billing and ordering input parameters
                     * @param _goods Billing and ordering input parameters
                     * 
                     */
                    void SetGoods(const std::vector<GoodNews>& _goods);

                    /**
                     * 判断参数 Goods 是否已赋值
                     * @return Goods 是否已赋值
                     * 
                     */
                    bool GoodsHasBeenSet() const;

                private:

                    /**
                     * Billing and ordering input parameters
                     */
                    std::vector<GoodNews> m_goods;
                    bool m_goodsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GENERATEDEALSANDPAYNEWREQUEST_H_

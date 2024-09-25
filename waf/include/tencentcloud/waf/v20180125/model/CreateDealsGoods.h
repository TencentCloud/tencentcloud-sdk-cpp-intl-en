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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/CreateDealsGoodsDetail.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Input/Output parameter goods of billing & ordering API
                */
                class CreateDealsGoods : public AbstractModel
                {
                public:
                    CreateDealsGoods();
                    ~CreateDealsGoods() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of products
                     * @return GoodsNum Number of products
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of products
                     * @param _goodsNum Number of products
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Product Detail
                     * @return GoodsDetail Product Detail
                     * 
                     */
                    CreateDealsGoodsDetail GetGoodsDetail() const;

                    /**
                     * 设置Product Detail
                     * @param _goodsDetail Product Detail
                     * 
                     */
                    void SetGoodsDetail(const CreateDealsGoodsDetail& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     * 
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取Order type ID, which is used to uniquely identify a business scene. (There are three scenes in total: new purchase, configuration change, and renewal.)
Advanced Edition: 102375 (new purchase), 102376 (renewal), and 102377 (configuration change)
Enterprise Edition: 102378 (new purchase), 102379 (renewal), and 102380 (configuration change)
Ultimate Edition: 102369 (new purchase), 102370 (renewal), and 102371 (configuration change)
Domain name package: 102372 (new purchase), 102373 (renewal), and 102374 (configuration change)
Business expansion package: 101040 (new purchase), 101041 (renewal), and 101042 (configuration change)

Advanced Edition - CLB: 101198 (new purchase), 101199 (renewal), and 101200 (configuration change)
Enterprise Edition - CLB: 101204 (new purchase), 101205 (renewal), and 101206 (configuration change)
Ultimate Edition - CLB: 101201 (new purchase), 101202 (renewal), and 101203 (configuration change)
Domain name package - CLB: 101207 (new purchase), 101208 (renewal), and 101209 (configuration change)
Business expansion package - CLB: 101210 (new purchase), 101211 (renewal), and 101212 (configuration adjustment)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GoodsCategoryId Order type ID, which is used to uniquely identify a business scene. (There are three scenes in total: new purchase, configuration change, and renewal.)
Advanced Edition: 102375 (new purchase), 102376 (renewal), and 102377 (configuration change)
Enterprise Edition: 102378 (new purchase), 102379 (renewal), and 102380 (configuration change)
Ultimate Edition: 102369 (new purchase), 102370 (renewal), and 102371 (configuration change)
Domain name package: 102372 (new purchase), 102373 (renewal), and 102374 (configuration change)
Business expansion package: 101040 (new purchase), 101041 (renewal), and 101042 (configuration change)

Advanced Edition - CLB: 101198 (new purchase), 101199 (renewal), and 101200 (configuration change)
Enterprise Edition - CLB: 101204 (new purchase), 101205 (renewal), and 101206 (configuration change)
Ultimate Edition - CLB: 101201 (new purchase), 101202 (renewal), and 101203 (configuration change)
Domain name package - CLB: 101207 (new purchase), 101208 (renewal), and 101209 (configuration change)
Business expansion package - CLB: 101210 (new purchase), 101211 (renewal), and 101212 (configuration adjustment)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetGoodsCategoryId() const;

                    /**
                     * 设置Order type ID, which is used to uniquely identify a business scene. (There are three scenes in total: new purchase, configuration change, and renewal.)
Advanced Edition: 102375 (new purchase), 102376 (renewal), and 102377 (configuration change)
Enterprise Edition: 102378 (new purchase), 102379 (renewal), and 102380 (configuration change)
Ultimate Edition: 102369 (new purchase), 102370 (renewal), and 102371 (configuration change)
Domain name package: 102372 (new purchase), 102373 (renewal), and 102374 (configuration change)
Business expansion package: 101040 (new purchase), 101041 (renewal), and 101042 (configuration change)

Advanced Edition - CLB: 101198 (new purchase), 101199 (renewal), and 101200 (configuration change)
Enterprise Edition - CLB: 101204 (new purchase), 101205 (renewal), and 101206 (configuration change)
Ultimate Edition - CLB: 101201 (new purchase), 101202 (renewal), and 101203 (configuration change)
Domain name package - CLB: 101207 (new purchase), 101208 (renewal), and 101209 (configuration change)
Business expansion package - CLB: 101210 (new purchase), 101211 (renewal), and 101212 (configuration adjustment)

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _goodsCategoryId Order type ID, which is used to uniquely identify a business scene. (There are three scenes in total: new purchase, configuration change, and renewal.)
Advanced Edition: 102375 (new purchase), 102376 (renewal), and 102377 (configuration change)
Enterprise Edition: 102378 (new purchase), 102379 (renewal), and 102380 (configuration change)
Ultimate Edition: 102369 (new purchase), 102370 (renewal), and 102371 (configuration change)
Domain name package: 102372 (new purchase), 102373 (renewal), and 102374 (configuration change)
Business expansion package: 101040 (new purchase), 101041 (renewal), and 101042 (configuration change)

Advanced Edition - CLB: 101198 (new purchase), 101199 (renewal), and 101200 (configuration change)
Enterprise Edition - CLB: 101204 (new purchase), 101205 (renewal), and 101206 (configuration change)
Ultimate Edition - CLB: 101201 (new purchase), 101202 (renewal), and 101203 (configuration change)
Domain name package - CLB: 101207 (new purchase), 101208 (renewal), and 101209 (configuration change)
Business expansion package - CLB: 101210 (new purchase), 101211 (renewal), and 101212 (configuration adjustment)

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGoodsCategoryId(const int64_t& _goodsCategoryId);

                    /**
                     * 判断参数 GoodsCategoryId 是否已赋值
                     * @return GoodsCategoryId 是否已赋值
                     * 
                     */
                    bool GoodsCategoryIdHasBeenSet() const;

                    /**
                     * 获取Region ID for purchasing WAF instance

1 indicates purchasing resources in Chinese mainland.
9 indicates purchasing resources outside Chinese mainland.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID for purchasing WAF instance

1 indicates purchasing resources in Chinese mainland.
9 indicates purchasing resources outside Chinese mainland.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID for purchasing WAF instance

1 indicates purchasing resources in Chinese mainland.
9 indicates purchasing resources outside Chinese mainland.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID for purchasing WAF instance

1 indicates purchasing resources in Chinese mainland.
9 indicates purchasing resources outside Chinese mainland.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Number of products
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Product Detail
                     */
                    CreateDealsGoodsDetail m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * Order type ID, which is used to uniquely identify a business scene. (There are three scenes in total: new purchase, configuration change, and renewal.)
Advanced Edition: 102375 (new purchase), 102376 (renewal), and 102377 (configuration change)
Enterprise Edition: 102378 (new purchase), 102379 (renewal), and 102380 (configuration change)
Ultimate Edition: 102369 (new purchase), 102370 (renewal), and 102371 (configuration change)
Domain name package: 102372 (new purchase), 102373 (renewal), and 102374 (configuration change)
Business expansion package: 101040 (new purchase), 101041 (renewal), and 101042 (configuration change)

Advanced Edition - CLB: 101198 (new purchase), 101199 (renewal), and 101200 (configuration change)
Enterprise Edition - CLB: 101204 (new purchase), 101205 (renewal), and 101206 (configuration change)
Ultimate Edition - CLB: 101201 (new purchase), 101202 (renewal), and 101203 (configuration change)
Domain name package - CLB: 101207 (new purchase), 101208 (renewal), and 101209 (configuration change)
Business expansion package - CLB: 101210 (new purchase), 101211 (renewal), and 101212 (configuration adjustment)

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_goodsCategoryId;
                    bool m_goodsCategoryIdHasBeenSet;

                    /**
                     * Region ID for purchasing WAF instance

1 indicates purchasing resources in Chinese mainland.
9 indicates purchasing resources outside Chinese mainland.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEDEALSGOODS_H_

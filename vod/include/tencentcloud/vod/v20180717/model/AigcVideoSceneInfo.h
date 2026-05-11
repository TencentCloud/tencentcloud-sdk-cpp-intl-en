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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOSCENEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOSCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProductShowcaseConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Scenario-based AIGC image generation configuration.
                */
                class AigcVideoSceneInfo : public AbstractModel
                {
                public:
                    AigcVideoSceneInfo();
                    ~AigcVideoSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI video scenario type. Optional values:
-product_showcase: Show the product in 360 degrees.
                     * @return Type AI video scenario type. Optional values:
-product_showcase: Show the product in 360 degrees.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置AI video scenario type. Optional values:
-product_showcase: Show the product in 360 degrees.
                     * @param _type AI video scenario type. Optional values:
-product_showcase: Show the product in 360 degrees.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Product display parameter
                     * @return ProductShowcaseConfig Product display parameter
                     * 
                     */
                    ProductShowcaseConfig GetProductShowcaseConfig() const;

                    /**
                     * 设置Product display parameter
                     * @param _productShowcaseConfig Product display parameter
                     * 
                     */
                    void SetProductShowcaseConfig(const ProductShowcaseConfig& _productShowcaseConfig);

                    /**
                     * 判断参数 ProductShowcaseConfig 是否已赋值
                     * @return ProductShowcaseConfig 是否已赋值
                     * 
                     */
                    bool ProductShowcaseConfigHasBeenSet() const;

                private:

                    /**
                     * AI video scenario type. Optional values:
-product_showcase: Show the product in 360 degrees.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Product display parameter
                     */
                    ProductShowcaseConfig m_productShowcaseConfig;
                    bool m_productShowcaseConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOSCENEINFO_H_

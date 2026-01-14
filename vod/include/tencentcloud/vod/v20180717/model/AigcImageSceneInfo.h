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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ChangeClothesConfig.h>
#include <tencentcloud/vod/v20180717/model/ProductImageConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Scenario-Based AIGC image generation configuration.
                */
                class AigcImageSceneInfo : public AbstractModel
                {
                public:
                    AigcImageSceneInfo();
                    ~AigcImageSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI image generation scenario type. valid values:
-change_clothes: AI clothing change.
-product_image: AI-generated product image.
                     * @return Type AI image generation scenario type. valid values:
-change_clothes: AI clothing change.
-product_image: AI-generated product image.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置AI image generation scenario type. valid values:
-change_clothes: AI clothing change.
-product_image: AI-generated product image.
                     * @param _type AI image generation scenario type. valid values:
-change_clothes: AI clothing change.
-product_image: AI-generated product image.
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
                     * 获取Valid when Type is change_clothes. this item is required and indicates the AI clothes-changing image generation config.
                     * @return ChangeClothesConfig Valid when Type is change_clothes. this item is required and indicates the AI clothes-changing image generation config.
                     * 
                     */
                    ChangeClothesConfig GetChangeClothesConfig() const;

                    /**
                     * 设置Valid when Type is change_clothes. this item is required and indicates the AI clothes-changing image generation config.
                     * @param _changeClothesConfig Valid when Type is change_clothes. this item is required and indicates the AI clothes-changing image generation config.
                     * 
                     */
                    void SetChangeClothesConfig(const ChangeClothesConfig& _changeClothesConfig);

                    /**
                     * 判断参数 ChangeClothesConfig 是否已赋值
                     * @return ChangeClothesConfig 是否已赋值
                     * 
                     */
                    bool ChangeClothesConfigHasBeenSet() const;

                    /**
                     * 获取Valid when Type is product_image. indicates the AI-generated product image config.
                     * @return ProductImageConfig Valid when Type is product_image. indicates the AI-generated product image config.
                     * 
                     */
                    ProductImageConfig GetProductImageConfig() const;

                    /**
                     * 设置Valid when Type is product_image. indicates the AI-generated product image config.
                     * @param _productImageConfig Valid when Type is product_image. indicates the AI-generated product image config.
                     * 
                     */
                    void SetProductImageConfig(const ProductImageConfig& _productImageConfig);

                    /**
                     * 判断参数 ProductImageConfig 是否已赋值
                     * @return ProductImageConfig 是否已赋值
                     * 
                     */
                    bool ProductImageConfigHasBeenSet() const;

                private:

                    /**
                     * AI image generation scenario type. valid values:
-change_clothes: AI clothing change.
-product_image: AI-generated product image.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Valid when Type is change_clothes. this item is required and indicates the AI clothes-changing image generation config.
                     */
                    ChangeClothesConfig m_changeClothesConfig;
                    bool m_changeClothesConfigHasBeenSet;

                    /**
                     * Valid when Type is product_image. indicates the AI-generated product image config.
                     */
                    ProductImageConfig m_productImageConfig;
                    bool m_productImageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_

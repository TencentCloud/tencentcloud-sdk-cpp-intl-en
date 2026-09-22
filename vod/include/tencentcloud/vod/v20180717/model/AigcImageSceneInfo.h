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
#include <tencentcloud/vod/v20180717/model/AiTryOnConfig.h>
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
                * Scenario-based AIGC image generation configuration.
                */
                class AigcImageSceneInfo : public AbstractModel
                {
                public:
                    AigcImageSceneInfo();
                    ~AigcImageSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AI image generation scenario type. Available values:</p><ul><li><code>ai_try_on</code>: AI try-on.</li><li><code>product_image</code>: AI product image generation.</li><li><code>outpainting</code>: AI outpainting.</li></ul><p>The following <code>Type</code> values are abandoned and will no longer be updated:</p><ul><li><code>change_clothes</code></li><li><code>change_clothes_under</code></li><li><code>change_clothes_top_wear</code></li><li><code>change_clothes_bottom_wear</code></li><li><code>change_clothes_full_wear</code></li></ul>
                     * @return Type <p>AI image generation scenario type. Available values:</p><ul><li><code>ai_try_on</code>: AI try-on.</li><li><code>product_image</code>: AI product image generation.</li><li><code>outpainting</code>: AI outpainting.</li></ul><p>The following <code>Type</code> values are abandoned and will no longer be updated:</p><ul><li><code>change_clothes</code></li><li><code>change_clothes_under</code></li><li><code>change_clothes_top_wear</code></li><li><code>change_clothes_bottom_wear</code></li><li><code>change_clothes_full_wear</code></li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>AI image generation scenario type. Available values:</p><ul><li><code>ai_try_on</code>: AI try-on.</li><li><code>product_image</code>: AI product image generation.</li><li><code>outpainting</code>: AI outpainting.</li></ul><p>The following <code>Type</code> values are abandoned and will no longer be updated:</p><ul><li><code>change_clothes</code></li><li><code>change_clothes_under</code></li><li><code>change_clothes_top_wear</code></li><li><code>change_clothes_bottom_wear</code></li><li><code>change_clothes_full_wear</code></li></ul>
                     * @param _type <p>AI image generation scenario type. Available values:</p><ul><li><code>ai_try_on</code>: AI try-on.</li><li><code>product_image</code>: AI product image generation.</li><li><code>outpainting</code>: AI outpainting.</li></ul><p>The following <code>Type</code> values are abandoned and will no longer be updated:</p><ul><li><code>change_clothes</code></li><li><code>change_clothes_under</code></li><li><code>change_clothes_top_wear</code></li><li><code>change_clothes_bottom_wear</code></li><li><code>change_clothes_full_wear</code></li></ul>
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
                     * 获取<p>Required when Type is ai_try_on, indicating the AI dressing configuration parameters.</p>
                     * @return AiTryOnConfig <p>Required when Type is ai_try_on, indicating the AI dressing configuration parameters.</p>
                     * 
                     */
                    AiTryOnConfig GetAiTryOnConfig() const;

                    /**
                     * 设置<p>Required when Type is ai_try_on, indicating the AI dressing configuration parameters.</p>
                     * @param _aiTryOnConfig <p>Required when Type is ai_try_on, indicating the AI dressing configuration parameters.</p>
                     * 
                     */
                    void SetAiTryOnConfig(const AiTryOnConfig& _aiTryOnConfig);

                    /**
                     * 判断参数 AiTryOnConfig 是否已赋值
                     * @return AiTryOnConfig 是否已赋值
                     * 
                     */
                    bool AiTryOnConfigHasBeenSet() const;

                    /**
                     * 获取<p><strong>Abandoned. Please use AiTryOnConfig.</strong>When Type is one of the following types, this item is required and represents the AI try-on image generation configuration parameters:</p><ul><li>change_clothes</li><li>change_clothes_under</li></ul>
                     * @return ChangeClothesConfig <p><strong>Abandoned. Please use AiTryOnConfig.</strong>When Type is one of the following types, this item is required and represents the AI try-on image generation configuration parameters:</p><ul><li>change_clothes</li><li>change_clothes_under</li></ul>
                     * 
                     */
                    ChangeClothesConfig GetChangeClothesConfig() const;

                    /**
                     * 设置<p><strong>Abandoned. Please use AiTryOnConfig.</strong>When Type is one of the following types, this item is required and represents the AI try-on image generation configuration parameters:</p><ul><li>change_clothes</li><li>change_clothes_under</li></ul>
                     * @param _changeClothesConfig <p><strong>Abandoned. Please use AiTryOnConfig.</strong>When Type is one of the following types, this item is required and represents the AI try-on image generation configuration parameters:</p><ul><li>change_clothes</li><li>change_clothes_under</li></ul>
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
                     * 获取<p>Required when Type is product_image, indicating the AI-generated product image configuration parameters.</p>
                     * @return ProductImageConfig <p>Required when Type is product_image, indicating the AI-generated product image configuration parameters.</p>
                     * 
                     */
                    ProductImageConfig GetProductImageConfig() const;

                    /**
                     * 设置<p>Required when Type is product_image, indicating the AI-generated product image configuration parameters.</p>
                     * @param _productImageConfig <p>Required when Type is product_image, indicating the AI-generated product image configuration parameters.</p>
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
                     * <p>AI image generation scenario type. Available values:</p><ul><li><code>ai_try_on</code>: AI try-on.</li><li><code>product_image</code>: AI product image generation.</li><li><code>outpainting</code>: AI outpainting.</li></ul><p>The following <code>Type</code> values are abandoned and will no longer be updated:</p><ul><li><code>change_clothes</code></li><li><code>change_clothes_under</code></li><li><code>change_clothes_top_wear</code></li><li><code>change_clothes_bottom_wear</code></li><li><code>change_clothes_full_wear</code></li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Required when Type is ai_try_on, indicating the AI dressing configuration parameters.</p>
                     */
                    AiTryOnConfig m_aiTryOnConfig;
                    bool m_aiTryOnConfigHasBeenSet;

                    /**
                     * <p><strong>Abandoned. Please use AiTryOnConfig.</strong>When Type is one of the following types, this item is required and represents the AI try-on image generation configuration parameters:</p><ul><li>change_clothes</li><li>change_clothes_under</li></ul>
                     */
                    ChangeClothesConfig m_changeClothesConfig;
                    bool m_changeClothesConfigHasBeenSet;

                    /**
                     * <p>Required when Type is product_image, indicating the AI-generated product image configuration parameters.</p>
                     */
                    ProductImageConfig m_productImageConfig;
                    bool m_productImageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_

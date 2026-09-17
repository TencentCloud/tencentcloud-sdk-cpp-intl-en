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
                * 
                */
                class AigcImageSceneInfo : public AbstractModel
                {
                public:
                    AigcImageSceneInfo();
                    ~AigcImageSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return AiTryOnConfig 
                     * 
                     */
                    AiTryOnConfig GetAiTryOnConfig() const;

                    /**
                     * 设置
                     * @param _aiTryOnConfig 
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
                     * 获取
                     * @return ChangeClothesConfig 
                     * 
                     */
                    ChangeClothesConfig GetChangeClothesConfig() const;

                    /**
                     * 设置
                     * @param _changeClothesConfig 
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
                     * 获取
                     * @return ProductImageConfig 
                     * 
                     */
                    ProductImageConfig GetProductImageConfig() const;

                    /**
                     * 设置
                     * @param _productImageConfig 
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
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    AiTryOnConfig m_aiTryOnConfig;
                    bool m_aiTryOnConfigHasBeenSet;

                    /**
                     * 
                     */
                    ChangeClothesConfig m_changeClothesConfig;
                    bool m_changeClothesConfigHasBeenSet;

                    /**
                     * 
                     */
                    ProductImageConfig m_productImageConfig;
                    bool m_productImageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGESCENEINFO_H_

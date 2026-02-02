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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCIMAGEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image information for AIGC generation.
                */
                class AigcImageInfo : public AbstractModel
                {
                public:
                    AigcImageInfo();
                    ~AigcImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image URL for video generation. The URL must be accessible from the public network and must be accessible to crawlers.
                     * @return ImageUrl Image URL for video generation. The URL must be accessible from the public network and must be accessible to crawlers.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Image URL for video generation. The URL must be accessible from the public network and must be accessible to crawlers.
                     * @param _imageUrl Image URL for video generation. The URL must be accessible from the public network and must be accessible to crawlers.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Reference type.
Note:1. When the model uses Vidu's q2 multi-reference image generation, this can also be used to specify the subject ID.2. If the GV model is used, this serves as the reference method. Valid values are asset and style.
                     * @return ReferenceType Reference type.
Note:1. When the model uses Vidu's q2 multi-reference image generation, this can also be used to specify the subject ID.2. If the GV model is used, this serves as the reference method. Valid values are asset and style.
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置Reference type.
Note:1. When the model uses Vidu's q2 multi-reference image generation, this can also be used to specify the subject ID.2. If the GV model is used, this serves as the reference method. Valid values are asset and style.
                     * @param _referenceType Reference type.
Note:1. When the model uses Vidu's q2 multi-reference image generation, this can also be used to specify the subject ID.2. If the GV model is used, this serves as the reference method. Valid values are asset and style.
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                private:

                    /**
                     * Image URL for video generation. The URL must be accessible from the public network and must be accessible to crawlers.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Reference type.
Note:1. When the model uses Vidu's q2 multi-reference image generation, this can also be used to specify the subject ID.2. If the GV model is used, this serves as the reference method. Valid values are asset and style.
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCIMAGEINFO_H_

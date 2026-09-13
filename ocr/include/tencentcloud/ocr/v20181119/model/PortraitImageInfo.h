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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PORTRAITIMAGEINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PORTRAITIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ImageCoordinates.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Avatar photo and coordinates
                */
                class PortraitImageInfo : public AbstractModel
                {
                public:
                    PortraitImageInfo();
                    ~PortraitImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Avatar</p>
                     * @return PortraitImage <p>Avatar</p>
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 设置<p>Avatar</p>
                     * @param _portraitImage <p>Avatar</p>
                     * 
                     */
                    void SetPortraitImage(const std::string& _portraitImage);

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取<p>Avatar coordinate</p>
                     * @return ImageCoordinates <p>Avatar coordinate</p>
                     * 
                     */
                    ImageCoordinates GetImageCoordinates() const;

                    /**
                     * 设置<p>Avatar coordinate</p>
                     * @param _imageCoordinates <p>Avatar coordinate</p>
                     * 
                     */
                    void SetImageCoordinates(const ImageCoordinates& _imageCoordinates);

                    /**
                     * 判断参数 ImageCoordinates 是否已赋值
                     * @return ImageCoordinates 是否已赋值
                     * 
                     */
                    bool ImageCoordinatesHasBeenSet() const;

                private:

                    /**
                     * <p>Avatar</p>
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * <p>Avatar coordinate</p>
                     */
                    ImageCoordinates m_imageCoordinates;
                    bool m_imageCoordinatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PORTRAITIMAGEINFO_H_

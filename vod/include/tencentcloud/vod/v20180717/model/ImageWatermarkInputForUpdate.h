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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class ImageWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    ImageWatermarkInputForUpdate();
                    ~ImageWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ImageContent 
                     * 
                     */
                    std::string GetImageContent() const;

                    /**
                     * 设置
                     * @param _imageContent 
                     * 
                     */
                    void SetImageContent(const std::string& _imageContent);

                    /**
                     * 判断参数 ImageContent 是否已赋值
                     * @return ImageContent 是否已赋值
                     * 
                     */
                    bool ImageContentHasBeenSet() const;

                    /**
                     * 获取
                     * @return Width 
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置
                     * @param _width 
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return Height 
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置
                     * @param _height 
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取
                     * @return RepeatType 
                     * 
                     */
                    std::string GetRepeatType() const;

                    /**
                     * 设置
                     * @param _repeatType 
                     * 
                     */
                    void SetRepeatType(const std::string& _repeatType);

                    /**
                     * 判断参数 RepeatType 是否已赋值
                     * @return RepeatType 是否已赋值
                     * 
                     */
                    bool RepeatTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Transparency 
                     * 
                     */
                    int64_t GetTransparency() const;

                    /**
                     * 设置
                     * @param _transparency 
                     * 
                     */
                    void SetTransparency(const int64_t& _transparency);

                    /**
                     * 判断参数 Transparency 是否已赋值
                     * @return Transparency 是否已赋值
                     * 
                     */
                    bool TransparencyHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_repeatType;
                    bool m_repeatTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_transparency;
                    bool m_transparencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_

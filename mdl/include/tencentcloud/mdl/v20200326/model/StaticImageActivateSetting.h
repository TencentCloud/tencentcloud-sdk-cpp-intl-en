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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STATICIMAGEACTIVATESETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STATICIMAGEACTIVATESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Static image activate setting.
                */
                class StaticImageActivateSetting : public AbstractModel
                {
                public:
                    StaticImageActivateSetting();
                    ~StaticImageActivateSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The address of the image to be inserted, starting with http or https and ending with .png .PNG .bmp .BMP .tga .TGA.
                     * @return ImageUrl The address of the image to be inserted, starting with http or https and ending with .png .PNG .bmp .BMP .tga .TGA.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置The address of the image to be inserted, starting with http or https and ending with .png .PNG .bmp .BMP .tga .TGA.
                     * @param _imageUrl The address of the image to be inserted, starting with http or https and ending with .png .PNG .bmp .BMP .tga .TGA.
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
                     * 获取The layer of the superimposed image, 0-7; the default value is 0, and a higher layer means it is on the top.
                     * @return Layer The layer of the superimposed image, 0-7; the default value is 0, and a higher layer means it is on the top.
                     * 
                     */
                    int64_t GetLayer() const;

                    /**
                     * 设置The layer of the superimposed image, 0-7; the default value is 0, and a higher layer means it is on the top.
                     * @param _layer The layer of the superimposed image, 0-7; the default value is 0, and a higher layer means it is on the top.
                     * 
                     */
                    void SetLayer(const int64_t& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取Opacity, range 0-100; the default value is 100, which means completely opaque.
                     * @return Opacity Opacity, range 0-100; the default value is 100, which means completely opaque.
                     * 
                     */
                    int64_t GetOpacity() const;

                    /**
                     * 设置Opacity, range 0-100; the default value is 100, which means completely opaque.
                     * @param _opacity Opacity, range 0-100; the default value is 100, which means completely opaque.
                     * 
                     */
                    void SetOpacity(const int64_t& _opacity);

                    /**
                     * 判断参数 Opacity 是否已赋值
                     * @return Opacity 是否已赋值
                     * 
                     */
                    bool OpacityHasBeenSet() const;

                    /**
                     * 获取The distance from the left edge in pixels; the default value is 0 and the maximum value is 4096.
                     * @return ImageX The distance from the left edge in pixels; the default value is 0 and the maximum value is 4096.
                     * 
                     */
                    int64_t GetImageX() const;

                    /**
                     * 设置The distance from the left edge in pixels; the default value is 0 and the maximum value is 4096.
                     * @param _imageX The distance from the left edge in pixels; the default value is 0 and the maximum value is 4096.
                     * 
                     */
                    void SetImageX(const int64_t& _imageX);

                    /**
                     * 判断参数 ImageX 是否已赋值
                     * @return ImageX 是否已赋值
                     * 
                     */
                    bool ImageXHasBeenSet() const;

                    /**
                     * 获取The distance from the top edge in pixels; the default value is 0 and the maximum value is 2160.
                     * @return ImageY The distance from the top edge in pixels; the default value is 0 and the maximum value is 2160.
                     * 
                     */
                    int64_t GetImageY() const;

                    /**
                     * 设置The distance from the top edge in pixels; the default value is 0 and the maximum value is 2160.
                     * @param _imageY The distance from the top edge in pixels; the default value is 0 and the maximum value is 2160.
                     * 
                     */
                    void SetImageY(const int64_t& _imageY);

                    /**
                     * 判断参数 ImageY 是否已赋值
                     * @return ImageY 是否已赋值
                     * 
                     */
                    bool ImageYHasBeenSet() const;

                    /**
                     * 获取The width of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means using the original image size. The minimum value is 1 and the maximum value is 4096.
                     * @return Width The width of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means using the original image size. The minimum value is 1 and the maximum value is 4096.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The width of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means using the original image size. The minimum value is 1 and the maximum value is 4096.
                     * @param _width The width of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means using the original image size. The minimum value is 1 and the maximum value is 4096.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The height of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means the original image size is used. The minimum value is 1 and the maximum value is 2160.
                     * @return Height The height of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means the original image size is used. The minimum value is 1 and the maximum value is 2160.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The height of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means the original image size is used. The minimum value is 1 and the maximum value is 2160.
                     * @param _height The height of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means the original image size is used. The minimum value is 1 and the maximum value is 2160.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Overlay duration, in milliseconds, range 0-86400000; default value 0, 0 means continuous.
                     * @return Duration Overlay duration, in milliseconds, range 0-86400000; default value 0, 0 means continuous.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Overlay duration, in milliseconds, range 0-86400000; default value 0, 0 means continuous.
                     * @param _duration Overlay duration, in milliseconds, range 0-86400000; default value 0, 0 means continuous.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Fade-in duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-in effect.
                     * @return FadeIn Fade-in duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-in effect.
                     * 
                     */
                    int64_t GetFadeIn() const;

                    /**
                     * 设置Fade-in duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-in effect.
                     * @param _fadeIn Fade-in duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-in effect.
                     * 
                     */
                    void SetFadeIn(const int64_t& _fadeIn);

                    /**
                     * 判断参数 FadeIn 是否已赋值
                     * @return FadeIn 是否已赋值
                     * 
                     */
                    bool FadeInHasBeenSet() const;

                    /**
                     * 获取Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * @return FadeOut Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * 
                     */
                    int64_t GetFadeOut() const;

                    /**
                     * 设置Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * @param _fadeOut Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     * 
                     */
                    void SetFadeOut(const int64_t& _fadeOut);

                    /**
                     * 判断参数 FadeOut 是否已赋值
                     * @return FadeOut 是否已赋值
                     * 
                     */
                    bool FadeOutHasBeenSet() const;

                private:

                    /**
                     * The address of the image to be inserted, starting with http or https and ending with .png .PNG .bmp .BMP .tga .TGA.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * The layer of the superimposed image, 0-7; the default value is 0, and a higher layer means it is on the top.
                     */
                    int64_t m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * Opacity, range 0-100; the default value is 100, which means completely opaque.
                     */
                    int64_t m_opacity;
                    bool m_opacityHasBeenSet;

                    /**
                     * The distance from the left edge in pixels; the default value is 0 and the maximum value is 4096.
                     */
                    int64_t m_imageX;
                    bool m_imageXHasBeenSet;

                    /**
                     * The distance from the top edge in pixels; the default value is 0 and the maximum value is 2160.
                     */
                    int64_t m_imageY;
                    bool m_imageYHasBeenSet;

                    /**
                     * The width of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means using the original image size. The minimum value is 1 and the maximum value is 4096.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The height of the image superimposed on the video frame, in pixels. The default value is empty (not set), which means the original image size is used. The minimum value is 1 and the maximum value is 2160.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Overlay duration, in milliseconds, range 0-86400000; default value 0, 0 means continuous.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Fade-in duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-in effect.
                     */
                    int64_t m_fadeIn;
                    bool m_fadeInHasBeenSet;

                    /**
                     * Fade-out duration, in milliseconds, range 0-5000; default value 0, 0 means no fade-out effect.
                     */
                    int64_t m_fadeOut;
                    bool m_fadeOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STATICIMAGEACTIVATESETTING_H_

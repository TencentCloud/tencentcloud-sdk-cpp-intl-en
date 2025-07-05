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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_WATERMARKCONFIG_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_WATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * Watermark settings.
Used by actions: GetWatermark.
                */
                class WatermarkConfig : public AbstractModel
                {
                public:
                    WatermarkConfig();
                    ~WatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL of the watermark image. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url The URL of the watermark image. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL of the watermark image. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url The URL of the watermark image. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取The watermark width, which is expressed as a percentage of the video width. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Width The watermark width, which is expressed as a percentage of the video width. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetWidth() const;

                    /**
                     * 设置The watermark width, which is expressed as a percentage of the video width. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _width The watermark width, which is expressed as a percentage of the video width. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWidth(const double& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The watermark height, which is expressed as a percentage of the video height. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Height The watermark height, which is expressed as a percentage of the video height. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetHeight() const;

                    /**
                     * 设置The watermark height, which is expressed as a percentage of the video height. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _height The watermark height, which is expressed as a percentage of the video height. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeight(const double& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The horizontal offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocationX The horizontal offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetLocationX() const;

                    /**
                     * 设置The horizontal offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _locationX The horizontal offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocationX(const double& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取The vertical offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LocationY The vertical offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetLocationY() const;

                    /**
                     * 设置The vertical offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _locationY The vertical offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocationY(const double& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                private:

                    /**
                     * The URL of the watermark image. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The watermark width, which is expressed as a percentage of the video width. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The watermark height, which is expressed as a percentage of the video height. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The horizontal offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle horizontally. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * The vertical offset of the watermark, which is expressed as a percentage of the video width. For example, 50 indicates that the watermark will appear in the middle vertically. Value range: 0-100. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_locationY;
                    bool m_locationYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_WATERMARKCONFIG_H_

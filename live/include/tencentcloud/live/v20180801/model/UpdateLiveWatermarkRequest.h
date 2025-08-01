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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_UPDATELIVEWATERMARKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_UPDATELIVEWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * UpdateLiveWatermark request structure.
                */
                class UpdateLiveWatermarkRequest : public AbstractModel
                {
                public:
                    UpdateLiveWatermarkRequest();
                    ~UpdateLiveWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Watermark ID.
Get the watermark ID in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
                     * @return WatermarkId Watermark ID.
Get the watermark ID in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
                     * 
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置Watermark ID.
Get the watermark ID in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
                     * @param _watermarkId Watermark ID.
Get the watermark ID in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
                     * 
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                    /**
                     * 获取Watermark image URL.
Unallowed characters in the URL:
 ;(){}$>`#"\'|
                     * @return PictureUrl Watermark image URL.
Unallowed characters in the URL:
 ;(){}$>`#"\'|
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置Watermark image URL.
Unallowed characters in the URL:
 ;(){}$>`#"\'|
                     * @param _pictureUrl Watermark image URL.
Unallowed characters in the URL:
 ;(){}$>`#"\'|
                     * 
                     */
                    void SetPictureUrl(const std::string& _pictureUrl);

                    /**
                     * 判断参数 PictureUrl 是否已赋值
                     * @return PictureUrl 是否已赋值
                     * 
                     */
                    bool PictureUrlHasBeenSet() const;

                    /**
                     * 获取Display position: X-axis offset in %. Default value: 0.
                     * @return XPosition Display position: X-axis offset in %. Default value: 0.
                     * 
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置Display position: X-axis offset in %. Default value: 0.
                     * @param _xPosition Display position: X-axis offset in %. Default value: 0.
                     * 
                     */
                    void SetXPosition(const int64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     * 
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取Display position: Y-axis offset in %. Default value: 0.
                     * @return YPosition Display position: Y-axis offset in %. Default value: 0.
                     * 
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置Display position: Y-axis offset in %. Default value: 0.
                     * @param _yPosition Display position: Y-axis offset in %. Default value: 0.
                     * 
                     */
                    void SetYPosition(const int64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     * 
                     */
                    bool YPositionHasBeenSet() const;

                    /**
                     * 获取Watermark name.
Up to 16 bytes.
                     * @return WatermarkName Watermark name.
Up to 16 bytes.
                     * 
                     */
                    std::string GetWatermarkName() const;

                    /**
                     * 设置Watermark name.
Up to 16 bytes.
                     * @param _watermarkName Watermark name.
Up to 16 bytes.
                     * 
                     */
                    void SetWatermarkName(const std::string& _watermarkName);

                    /**
                     * 判断参数 WatermarkName 是否已赋值
                     * @return WatermarkName 是否已赋值
                     * 
                     */
                    bool WatermarkNameHasBeenSet() const;

                    /**
                     * 获取Watermark width or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original width is used by default.
                     * @return Width Watermark width or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original width is used by default.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Watermark width or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original width is used by default.
                     * @param _width Watermark width or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original width is used by default.
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
                     * 获取Watermark height or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original height is used by default.
                     * @return Height Watermark height or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original height is used by default.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Watermark height or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original height is used by default.
                     * @param _height Watermark height or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original height is used by default.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * Watermark ID.
Get the watermark ID in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * Watermark image URL.
Unallowed characters in the URL:
 ;(){}$>`#"\'|
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * Display position: X-axis offset in %. Default value: 0.
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * Display position: Y-axis offset in %. Default value: 0.
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * Watermark name.
Up to 16 bytes.
                     */
                    std::string m_watermarkName;
                    bool m_watermarkNameHasBeenSet;

                    /**
                     * Watermark width or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original width is used by default.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Watermark height or its percentage of the live streaming video width. It is recommended to just specify either height or width as the other will be scaled proportionally to avoid distortions. The original height is used by default.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_UPDATELIVEWATERMARKREQUEST_H_

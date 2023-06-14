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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The information of the watermark image.
                */
                class McuWaterMarkImage : public AbstractModel
                {
                public:
                    McuWaterMarkImage();
                    ~McuWaterMarkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL of the watermark image, which must be in PNG, JPG, or JPEG format and cannot exceed 5 MB.
                     * @return WaterMarkUrl The URL of the watermark image, which must be in PNG, JPG, or JPEG format and cannot exceed 5 MB.
                     * 
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置The URL of the watermark image, which must be in PNG, JPG, or JPEG format and cannot exceed 5 MB.
                     * @param _waterMarkUrl The URL of the watermark image, which must be in PNG, JPG, or JPEG format and cannot exceed 5 MB.
                     * 
                     */
                    void SetWaterMarkUrl(const std::string& _waterMarkUrl);

                    /**
                     * 判断参数 WaterMarkUrl 是否已赋值
                     * @return WaterMarkUrl 是否已赋值
                     * 
                     */
                    bool WaterMarkUrlHasBeenSet() const;

                    /**
                     * 获取The watermark width (pixels).
                     * @return WaterMarkWidth The watermark width (pixels).
                     * 
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置The watermark width (pixels).
                     * @param _waterMarkWidth The watermark width (pixels).
                     * 
                     */
                    void SetWaterMarkWidth(const uint64_t& _waterMarkWidth);

                    /**
                     * 判断参数 WaterMarkWidth 是否已赋值
                     * @return WaterMarkWidth 是否已赋值
                     * 
                     */
                    bool WaterMarkWidthHasBeenSet() const;

                    /**
                     * 获取The watermark height (pixels).
                     * @return WaterMarkHeight The watermark height (pixels).
                     * 
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置The watermark height (pixels).
                     * @param _waterMarkHeight The watermark height (pixels).
                     * 
                     */
                    void SetWaterMarkHeight(const uint64_t& _waterMarkHeight);

                    /**
                     * 判断参数 WaterMarkHeight 是否已赋值
                     * @return WaterMarkHeight 是否已赋值
                     * 
                     */
                    bool WaterMarkHeightHasBeenSet() const;

                    /**
                     * 获取The horizontal offset (pixels) of the watermark.
                     * @return LocationX The horizontal offset (pixels) of the watermark.
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置The horizontal offset (pixels) of the watermark.
                     * @param _locationX The horizontal offset (pixels) of the watermark.
                     * 
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取The vertical offset (pixels) of the watermark.
                     * @return LocationY The vertical offset (pixels) of the watermark.
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置The vertical offset (pixels) of the watermark.
                     * @param _locationY The vertical offset (pixels) of the watermark.
                     * 
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取The image layer of the watermark. If you do not pass this parameter, 0 will be used.
                     * @return ZOrder The image layer of the watermark. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置The image layer of the watermark. If you do not pass this parameter, 0 will be used.
                     * @param _zOrder The image layer of the watermark. If you do not pass this parameter, 0 will be used.
                     * 
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                private:

                    /**
                     * The URL of the watermark image, which must be in PNG, JPG, or JPEG format and cannot exceed 5 MB.
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                    /**
                     * The watermark width (pixels).
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * The watermark height (pixels).
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * The horizontal offset (pixels) of the watermark.
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * The vertical offset (pixels) of the watermark.
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * The image layer of the watermark. If you do not pass this parameter, 0 will be used.
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_

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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_WATERMARKINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_WATERMARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Watermark information.
                */
                class WatermarkInfo : public AbstractModel
                {
                public:
                    WatermarkInfo();
                    ~WatermarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark ID.
                     * @return WatermarkId Watermark ID.
                     * 
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置Watermark ID.
                     * @param _watermarkId Watermark ID.
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
                     * @return PictureUrl Watermark image URL.
                     * 
                     */
                    std::string GetPictureUrl() const;

                    /**
                     * 设置Watermark image URL.
                     * @param _pictureUrl Watermark image URL.
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
                     * 获取Display position: X-axis offset.
                     * @return XPosition Display position: X-axis offset.
                     * 
                     */
                    int64_t GetXPosition() const;

                    /**
                     * 设置Display position: X-axis offset.
                     * @param _xPosition Display position: X-axis offset.
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
                     * 获取Display position: Y-axis offset.
                     * @return YPosition Display position: Y-axis offset.
                     * 
                     */
                    int64_t GetYPosition() const;

                    /**
                     * 设置Display position: Y-axis offset.
                     * @param _yPosition Display position: Y-axis offset.
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
                     * @return WatermarkName Watermark name.
                     * 
                     */
                    std::string GetWatermarkName() const;

                    /**
                     * 设置Watermark name.
                     * @param _watermarkName Watermark name.
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
                     * 获取Current status. 0: not used. 1: in use.
                     * @return Status Current status. 0: not used. 1: in use.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Current status. 0: not used. 1: in use.
                     * @param _status Current status. 0: not used. 1: in use.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The time when the watermark was added.
Note: Beijing time (UTC+8) is used.
                     * @return CreateTime The time when the watermark was added.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the watermark was added.
Note: Beijing time (UTC+8) is used.
                     * @param _createTime The time when the watermark was added.
Note: Beijing time (UTC+8) is used.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Watermark width.
                     * @return Width Watermark width.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Watermark width.
                     * @param _width Watermark width.
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
                     * 获取Watermark height.
                     * @return Height Watermark height.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Watermark height.
                     * @param _height Watermark height.
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
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                    /**
                     * Watermark image URL.
                     */
                    std::string m_pictureUrl;
                    bool m_pictureUrlHasBeenSet;

                    /**
                     * Display position: X-axis offset.
                     */
                    int64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * Display position: Y-axis offset.
                     */
                    int64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                    /**
                     * Watermark name.
                     */
                    std::string m_watermarkName;
                    bool m_watermarkNameHasBeenSet;

                    /**
                     * Current status. 0: not used. 1: in use.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The time when the watermark was added.
Note: Beijing time (UTC+8) is used.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Watermark width.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Watermark height.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_WATERMARKINFO_H_

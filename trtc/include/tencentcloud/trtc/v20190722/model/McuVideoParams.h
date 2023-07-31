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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VideoEncode.h>
#include <tencentcloud/trtc/v20190722/model/McuLayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/McuWaterMarkParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The video parameters for relaying.
                */
                class McuVideoParams : public AbstractModel
                {
                public:
                    McuVideoParams();
                    ~McuVideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The video encoding parameters.
                     * @return VideoEncode The video encoding parameters.
                     * 
                     */
                    VideoEncode GetVideoEncode() const;

                    /**
                     * 设置The video encoding parameters.
                     * @param _videoEncode The video encoding parameters.
                     * 
                     */
                    void SetVideoEncode(const VideoEncode& _videoEncode);

                    /**
                     * 判断参数 VideoEncode 是否已赋值
                     * @return VideoEncode 是否已赋值
                     * 
                     */
                    bool VideoEncodeHasBeenSet() const;

                    /**
                     * 获取The layout parameters.
                     * @return LayoutParams The layout parameters.
                     * 
                     */
                    McuLayoutParams GetLayoutParams() const;

                    /**
                     * 设置The layout parameters.
                     * @param _layoutParams The layout parameters.
                     * 
                     */
                    void SetLayoutParams(const McuLayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取The canvas color. Below are the values for some common colors:
Red: 0xcc0033
Yellow: 0xcc9900
Green: 0xcccc33
Blue: 0x99CCFF
Black: 0x000000
White: 0xFFFFFF
Grey: 0x999999
                     * @return BackGroundColor The canvas color. Below are the values for some common colors:
Red: 0xcc0033
Yellow: 0xcc9900
Green: 0xcccc33
Blue: 0x99CCFF
Black: 0x000000
White: 0xFFFFFF
Grey: 0x999999
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置The canvas color. Below are the values for some common colors:
Red: 0xcc0033
Yellow: 0xcc9900
Green: 0xcccc33
Blue: 0x99CCFF
Black: 0x000000
White: 0xFFFFFF
Grey: 0x999999
                     * @param _backGroundColor The canvas color. Below are the values for some common colors:
Red: 0xcc0033
Yellow: 0xcc9900
Green: 0xcccc33
Blue: 0x99CCFF
Black: 0x000000
White: 0xFFFFFF
Grey: 0x999999
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取The URL of the background image for the canvas. This parameter has a higher priority than `BackGroundColor`.
                     * @return BackgroundImageUrl The URL of the background image for the canvas. This parameter has a higher priority than `BackGroundColor`.
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置The URL of the background image for the canvas. This parameter has a higher priority than `BackGroundColor`.
                     * @param _backgroundImageUrl The URL of the background image for the canvas. This parameter has a higher priority than `BackGroundColor`.
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取The watermark information for the mixed stream.
                     * @return WaterMarkList The watermark information for the mixed stream.
                     * 
                     */
                    std::vector<McuWaterMarkParams> GetWaterMarkList() const;

                    /**
                     * 设置The watermark information for the mixed stream.
                     * @param _waterMarkList The watermark information for the mixed stream.
                     * 
                     */
                    void SetWaterMarkList(const std::vector<McuWaterMarkParams>& _waterMarkList);

                    /**
                     * 判断参数 WaterMarkList 是否已赋值
                     * @return WaterMarkList 是否已赋值
                     * 
                     */
                    bool WaterMarkListHasBeenSet() const;

                    /**
                     * 获取Background image display mode during output: 0 for crop, 1 for scale and display with black background, 2 for proportional scaling. The backend default is proportional scaling.
                     * @return BackgroundRenderMode Background image display mode during output: 0 for crop, 1 for scale and display with black background, 2 for proportional scaling. The backend default is proportional scaling.
                     * 
                     */
                    uint64_t GetBackgroundRenderMode() const;

                    /**
                     * 设置Background image display mode during output: 0 for crop, 1 for scale and display with black background, 2 for proportional scaling. The backend default is proportional scaling.
                     * @param _backgroundRenderMode Background image display mode during output: 0 for crop, 1 for scale and display with black background, 2 for proportional scaling. The backend default is proportional scaling.
                     * 
                     */
                    void SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode);

                    /**
                     * 判断参数 BackgroundRenderMode 是否已赋值
                     * @return BackgroundRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundRenderModeHasBeenSet() const;

                private:

                    /**
                     * The video encoding parameters.
                     */
                    VideoEncode m_videoEncode;
                    bool m_videoEncodeHasBeenSet;

                    /**
                     * The layout parameters.
                     */
                    McuLayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * The canvas color. Below are the values for some common colors:
Red: 0xcc0033
Yellow: 0xcc9900
Green: 0xcccc33
Blue: 0x99CCFF
Black: 0x000000
White: 0xFFFFFF
Grey: 0x999999
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * The URL of the background image for the canvas. This parameter has a higher priority than `BackGroundColor`.
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * The watermark information for the mixed stream.
                     */
                    std::vector<McuWaterMarkParams> m_waterMarkList;
                    bool m_waterMarkListHasBeenSet;

                    /**
                     * Background image display mode during output: 0 for crop, 1 for scale and display with black background, 2 for proportional scaling. The backend default is proportional scaling.
                     */
                    uint64_t m_backgroundRenderMode;
                    bool m_backgroundRenderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_

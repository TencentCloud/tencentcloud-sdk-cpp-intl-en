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
                     * 获取Video encoding parameter for the output stream.
                     * @return VideoEncode Video encoding parameter for the output stream.
                     * 
                     */
                    VideoEncode GetVideoEncode() const;

                    /**
                     * 设置Video encoding parameter for the output stream.
                     * @param _videoEncode Video encoding parameter for the output stream.
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
                     * 获取Stream mixing layout parameter.
                     * @return LayoutParams Stream mixing layout parameter.
                     * 
                     */
                    McuLayoutParams GetLayoutParams() const;

                    /**
                     * 设置Stream mixing layout parameter.
                     * @param _layoutParams Stream mixing layout parameter.
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
                     * 获取The entire canvas background color. commonly used colors:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * @return BackGroundColor The entire canvas background color. commonly used colors:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置The entire canvas background color. commonly used colors:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     * @param _backGroundColor The entire canvas background color. commonly used colors:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
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
                     * 获取The url of the background image for the entire canvas. priority is higher than BackGroundColor. supports png, jpg, and jpeg formats. image size limit is not more than 5MB.
Note:.
1. make sure the image link is accessible. the backend download timeout is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the background image will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if any character outside the supported character sets exists, the background image will not take effect.
                     * @return BackgroundImageUrl The url of the background image for the entire canvas. priority is higher than BackGroundColor. supports png, jpg, and jpeg formats. image size limit is not more than 5MB.
Note:.
1. make sure the image link is accessible. the backend download timeout is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the background image will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if any character outside the supported character sets exists, the background image will not take effect.
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置The url of the background image for the entire canvas. priority is higher than BackGroundColor. supports png, jpg, and jpeg formats. image size limit is not more than 5MB.
Note:.
1. make sure the image link is accessible. the backend download timeout is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the background image will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if any character outside the supported character sets exists, the background image will not take effect.
                     * @param _backgroundImageUrl The url of the background image for the entire canvas. priority is higher than BackGroundColor. supports png, jpg, and jpeg formats. image size limit is not more than 5MB.
Note:.
1. make sure the image link is accessible. the backend download timeout is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the background image will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if any character outside the supported character sets exists, the background image will not take effect.
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
                     * 获取Watermark parameters for the stream mixing layout.
                     * @return WaterMarkList Watermark parameters for the stream mixing layout.
                     * 
                     */
                    std::vector<McuWaterMarkParams> GetWaterMarkList() const;

                    /**
                     * 设置Watermark parameters for the stream mixing layout.
                     * @param _waterMarkList Watermark parameters for the stream mixing layout.
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
                     * 获取The display mode of the background image in the output: 0 for crop, 1 for scale and display black background, 2 for variable-scale scaling. the backend defaults to variable-scale scaling.
                     * @return BackgroundRenderMode The display mode of the background image in the output: 0 for crop, 1 for scale and display black background, 2 for variable-scale scaling. the backend defaults to variable-scale scaling.
                     * 
                     */
                    uint64_t GetBackgroundRenderMode() const;

                    /**
                     * 设置The display mode of the background image in the output: 0 for crop, 1 for scale and display black background, 2 for variable-scale scaling. the backend defaults to variable-scale scaling.
                     * @param _backgroundRenderMode The display mode of the background image in the output: 0 for crop, 1 for scale and display black background, 2 for variable-scale scaling. the backend defaults to variable-scale scaling.
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
                     * Video encoding parameter for the output stream.
                     */
                    VideoEncode m_videoEncode;
                    bool m_videoEncodeHasBeenSet;

                    /**
                     * Stream mixing layout parameter.
                     */
                    McuLayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * The entire canvas background color. commonly used colors:.
Red: 0xcc0033.
Yellow: 0xcc9900.
Green: 0xcccc33.
Blue: 0x99CCFF.
Black: 0x000000.
White: 0xFFFFFF.
Gray: 0x999999.
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * The url of the background image for the entire canvas. priority is higher than BackGroundColor. supports png, jpg, and jpeg formats. image size limit is not more than 5MB.
Note:.
1. make sure the image link is accessible. the backend download timeout is 10 seconds with a maximum of 3 retries. if the image download fails eventually, the background image will not take effect.
2. url supported character sets: ['0-9','a-z','a-z','-', '.', '_', '~', ':', '/', '?', '#', '[', ']','@', '!', '&', '(', ')', '*', '+', ',', '%', '=', ';', '|']. make sure url characters are within the supported character sets. if any character outside the supported character sets exists, the background image will not take effect.
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * Watermark parameters for the stream mixing layout.
                     */
                    std::vector<McuWaterMarkParams> m_waterMarkList;
                    bool m_waterMarkListHasBeenSet;

                    /**
                     * The display mode of the background image in the output: 0 for crop, 1 for scale and display black background, 2 for variable-scale scaling. the backend defaults to variable-scale scaling.
                     */
                    uint64_t m_backgroundRenderMode;
                    bool m_backgroundRenderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_

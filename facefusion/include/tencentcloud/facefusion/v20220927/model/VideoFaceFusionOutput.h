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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_VIDEOFACEFUSIONOUTPUT_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_VIDEOFACEFUSIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * Returned video face fusion result
                */
                class VideoFaceFusionOutput : public AbstractModel
                {
                public:
                    VideoFaceFusionOutput();
                    ~VideoFaceFusionOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取URL of the video output after video face fusion
                     * @return VideoUrl URL of the video output after video face fusion
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置URL of the video output after video face fusion
                     * @param _videoUrl URL of the video output after video face fusion
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取MD5 value of the video output after video face fusion, which is used for verification
                     * @return VideoMD5 MD5 value of the video output after video face fusion, which is used for verification
                     * 
                     */
                    std::string GetVideoMD5() const;

                    /**
                     * 设置MD5 value of the video output after video face fusion, which is used for verification
                     * @param _videoMD5 MD5 value of the video output after video face fusion, which is used for verification
                     * 
                     */
                    void SetVideoMD5(const std::string& _videoMD5);

                    /**
                     * 判断参数 VideoMD5 是否已赋值
                     * @return VideoMD5 是否已赋值
                     * 
                     */
                    bool VideoMD5HasBeenSet() const;

                    /**
                     * 获取Video width
                     * @return Width Video width
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Video width
                     * @param _width Video width
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
                     * 获取Video height
                     * @return Height Video height
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Video height
                     * @param _height Video height
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
                     * 获取Frames per second
                     * @return FPS Frames per second
                     * 
                     */
                    int64_t GetFPS() const;

                    /**
                     * 设置Frames per second
                     * @param _fPS Frames per second
                     * 
                     */
                    void SetFPS(const int64_t& _fPS);

                    /**
                     * 判断参数 FPS 是否已赋值
                     * @return FPS 是否已赋值
                     * 
                     */
                    bool FPSHasBeenSet() const;

                    /**
                     * 获取Video duration, in seconds
                     * @return DurationInSec Video duration, in seconds
                     * 
                     */
                    double GetDurationInSec() const;

                    /**
                     * 设置Video duration, in seconds
                     * @param _durationInSec Video duration, in seconds
                     * 
                     */
                    void SetDurationInSec(const double& _durationInSec);

                    /**
                     * 判断参数 DurationInSec 是否已赋值
                     * @return DurationInSec 是否已赋值
                     * 
                     */
                    bool DurationInSecHasBeenSet() const;

                    /**
                     * 获取Number of frames
                     * @return Frame Number of frames
                     * 
                     */
                    int64_t GetFrame() const;

                    /**
                     * 设置Number of frames
                     * @param _frame Number of frames
                     * 
                     */
                    void SetFrame(const int64_t& _frame);

                    /**
                     * 判断参数 Frame 是否已赋值
                     * @return Frame 是否已赋值
                     * 
                     */
                    bool FrameHasBeenSet() const;

                private:

                    /**
                     * URL of the video output after video face fusion
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * MD5 value of the video output after video face fusion, which is used for verification
                     */
                    std::string m_videoMD5;
                    bool m_videoMD5HasBeenSet;

                    /**
                     * Video width
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video height
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Frames per second
                     */
                    int64_t m_fPS;
                    bool m_fPSHasBeenSet;

                    /**
                     * Video duration, in seconds
                     */
                    double m_durationInSec;
                    bool m_durationInSecHasBeenSet;

                    /**
                     * Number of frames
                     */
                    int64_t m_frame;
                    bool m_frameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_VIDEOFACEFUSIONOUTPUT_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioTransform.h>
#include <tencentcloud/vod/v20180717/model/ImageTransform.h>


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
                class VideoTrackItem : public AbstractModel
                {
                public:
                    VideoTrackItem();
                    ~VideoTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SourceMedia 
                     * 
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置
                     * @param _sourceMedia 
                     * 
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取
                     * @return SourceMediaStartTime 
                     * 
                     */
                    double GetSourceMediaStartTime() const;

                    /**
                     * 设置
                     * @param _sourceMediaStartTime 
                     * 
                     */
                    void SetSourceMediaStartTime(const double& _sourceMediaStartTime);

                    /**
                     * 判断参数 SourceMediaStartTime 是否已赋值
                     * @return SourceMediaStartTime 是否已赋值
                     * 
                     */
                    bool SourceMediaStartTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Duration 
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置
                     * @param _duration 
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetDuration 
                     * 
                     */
                    double GetTargetDuration() const;

                    /**
                     * 设置
                     * @param _targetDuration 
                     * 
                     */
                    void SetTargetDuration(const double& _targetDuration);

                    /**
                     * 判断参数 TargetDuration 是否已赋值
                     * @return TargetDuration 是否已赋值
                     * 
                     */
                    bool TargetDurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return CoordinateOrigin 
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置
                     * @param _coordinateOrigin 
                     * 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     * 
                     */
                    bool CoordinateOriginHasBeenSet() const;

                    /**
                     * 获取
                     * @return XPos 
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置
                     * @param _xPos 
                     * 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取
                     * @return YPos 
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置
                     * @param _yPos 
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

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
                     * @return AudioOperations 
                     * 
                     */
                    std::vector<AudioTransform> GetAudioOperations() const;

                    /**
                     * 设置
                     * @param _audioOperations 
                     * 
                     */
                    void SetAudioOperations(const std::vector<AudioTransform>& _audioOperations);

                    /**
                     * 判断参数 AudioOperations 是否已赋值
                     * @return AudioOperations 是否已赋值
                     * 
                     */
                    bool AudioOperationsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ImageOperations 
                     * 
                     */
                    std::vector<ImageTransform> GetImageOperations() const;

                    /**
                     * 设置
                     * @param _imageOperations 
                     * 
                     */
                    void SetImageOperations(const std::vector<ImageTransform>& _imageOperations);

                    /**
                     * 判断参数 ImageOperations 是否已赋值
                     * @return ImageOperations 是否已赋值
                     * 
                     */
                    bool ImageOperationsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * 
                     */
                    double m_sourceMediaStartTime;
                    bool m_sourceMediaStartTimeHasBeenSet;

                    /**
                     * 
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 
                     */
                    double m_targetDuration;
                    bool m_targetDurationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

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
                    std::vector<AudioTransform> m_audioOperations;
                    bool m_audioOperationsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ImageTransform> m_imageOperations;
                    bool m_imageOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTRACKITEM_H_

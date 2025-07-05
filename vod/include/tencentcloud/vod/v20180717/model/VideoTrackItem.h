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
                * Video segment information of video track.
                */
                class VideoTrackItem : public AbstractModel
                {
                public:
                    VideoTrackItem();
                    ~VideoTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source of media material for video segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files.</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     * @return SourceMedia Source of media material for video segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files.</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     * 
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置Source of media material for video segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files.</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     * @param _sourceMedia Source of media material for video segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files.</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
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
                     * 获取Start time of video segment in material file in seconds. Default value: 0.
                     * @return SourceMediaStartTime Start time of video segment in material file in seconds. Default value: 0.
                     * 
                     */
                    double GetSourceMediaStartTime() const;

                    /**
                     * 设置Start time of video segment in material file in seconds. Default value: 0.
                     * @param _sourceMediaStartTime Start time of video segment in material file in seconds. Default value: 0.
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
                     * 获取Video segment duration in seconds. By default, the length of the video material will be used, which means that the entire material will be captured. If the source file is an image, `Duration` needs to be greater than 0.
                     * @return Duration Video segment duration in seconds. By default, the length of the video material will be used, which means that the entire material will be captured. If the source file is an image, `Duration` needs to be greater than 0.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Video segment duration in seconds. By default, the length of the video material will be used, which means that the entire material will be captured. If the source file is an image, `Duration` needs to be greater than 0.
                     * @param _duration Video segment duration in seconds. By default, the length of the video material will be used, which means that the entire material will be captured. If the source file is an image, `Duration` needs to be greater than 0.
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
                     * 获取The target video duration, in seconds.
<li>If `TargetDuration` is empty or `0`, the target duration is the same as `Duration`.</li>
<li>If `TargetDuration` is a value greater than 0, the playback speed will be changed to make the final video duration the same as the value of `TargetDuration`.</li>
                     * @return TargetDuration The target video duration, in seconds.
<li>If `TargetDuration` is empty or `0`, the target duration is the same as `Duration`.</li>
<li>If `TargetDuration` is a value greater than 0, the playback speed will be changed to make the final video duration the same as the value of `TargetDuration`.</li>
                     * 
                     */
                    double GetTargetDuration() const;

                    /**
                     * 设置The target video duration, in seconds.
<li>If `TargetDuration` is empty or `0`, the target duration is the same as `Duration`.</li>
<li>If `TargetDuration` is a value greater than 0, the playback speed will be changed to make the final video duration the same as the value of `TargetDuration`.</li>
                     * @param _targetDuration The target video duration, in seconds.
<li>If `TargetDuration` is empty or `0`, the target duration is the same as `Duration`.</li>
<li>If `TargetDuration` is a value greater than 0, the playback speed will be changed to make the final video duration the same as the value of `TargetDuration`.</li>
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
                     * 获取Video origin position. Valid values:
<li> Center: the origin of coordinates is the center position, such as the center of canvas.</li>
Default value: Center.
                     * @return CoordinateOrigin Video origin position. Valid values:
<li> Center: the origin of coordinates is the center position, such as the center of canvas.</li>
Default value: Center.
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置Video origin position. Valid values:
<li> Center: the origin of coordinates is the center position, such as the center of canvas.</li>
Default value: Center.
                     * @param _coordinateOrigin Video origin position. Valid values:
<li> Center: the origin of coordinates is the center position, such as the center of canvas.</li>
Default value: Center.
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
                     * 获取The horizontal position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the video segment will be at the position of the specified percentage of the canvas width; for example, `10%` means that `XPos` is 10% of the canvas width.</li>
<li>If the string ends in px, the `XPos` of the video segment will be in px; for example, `100px` means that `XPos` is 100 px.</li>
Default value: 0 px.
                     * @return XPos The horizontal position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the video segment will be at the position of the specified percentage of the canvas width; for example, `10%` means that `XPos` is 10% of the canvas width.</li>
<li>If the string ends in px, the `XPos` of the video segment will be in px; for example, `100px` means that `XPos` is 100 px.</li>
Default value: 0 px.
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置The horizontal position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the video segment will be at the position of the specified percentage of the canvas width; for example, `10%` means that `XPos` is 10% of the canvas width.</li>
<li>If the string ends in px, the `XPos` of the video segment will be in px; for example, `100px` means that `XPos` is 100 px.</li>
Default value: 0 px.
                     * @param _xPos The horizontal position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the video segment will be at the position of the specified percentage of the canvas width; for example, `10%` means that `XPos` is 10% of the canvas width.</li>
<li>If the string ends in px, the `XPos` of the video segment will be in px; for example, `100px` means that `XPos` is 100 px.</li>
Default value: 0 px.
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
                     * 获取The vertical position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the video segment will be at the position of the specified percentage of the canvas height; for example, `10%` means that `YPos` is 10% of the canvas height.</li>
<li>If the string ends in px, the `YPos` of the video segment will be in px; for example, `100px` means that `YPos` is 100 px.</li>
Default value: 0 px.
                     * @return YPos The vertical position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the video segment will be at the position of the specified percentage of the canvas height; for example, `10%` means that `YPos` is 10% of the canvas height.</li>
<li>If the string ends in px, the `YPos` of the video segment will be in px; for example, `100px` means that `YPos` is 100 px.</li>
Default value: 0 px.
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置The vertical position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the video segment will be at the position of the specified percentage of the canvas height; for example, `10%` means that `YPos` is 10% of the canvas height.</li>
<li>If the string ends in px, the `YPos` of the video segment will be in px; for example, `100px` means that `YPos` is 100 px.</li>
Default value: 0 px.
                     * @param _yPos The vertical position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the video segment will be at the position of the specified percentage of the canvas height; for example, `10%` means that `YPos` is 10% of the canvas height.</li>
<li>If the string ends in px, the `YPos` of the video segment will be in px; for example, `100px` means that `YPos` is 100 px.</li>
Default value: 0 px.
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
                     * 获取Video segment width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the video segment will be the specified percentage of the canvas width; for example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If the string ends in px, the `Width` of the video segment will be in px; for example, `100px` means that `Width` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     * @return Width Video segment width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the video segment will be the specified percentage of the canvas width; for example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If the string ends in px, the `Width` of the video segment will be in px; for example, `100px` means that `Width` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Video segment width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the video segment will be the specified percentage of the canvas width; for example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If the string ends in px, the `Width` of the video segment will be in px; for example, `100px` means that `Width` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     * @param _width Video segment width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the video segment will be the specified percentage of the canvas width; for example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If the string ends in px, the `Width` of the video segment will be in px; for example, `100px` means that `Width` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
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
                     * 获取Video segment height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the video segment will be the specified percentage of the canvas height; for example, `10%` means that `Height` is 10% of the canvas height;
</li><li>If the string ends in px, the `Height` of the video segment will be in px; for example, `100px` means that `Height` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     * @return Height Video segment height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the video segment will be the specified percentage of the canvas height; for example, `10%` means that `Height` is 10% of the canvas height;
</li><li>If the string ends in px, the `Height` of the video segment will be in px; for example, `100px` means that `Height` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Video segment height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the video segment will be the specified percentage of the canvas height; for example, `10%` means that `Height` is 10% of the canvas height;
</li><li>If the string ends in px, the `Height` of the video segment will be in px; for example, `100px` means that `Height` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     * @param _height Video segment height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the video segment will be the specified percentage of the canvas height; for example, `10%` means that `Height` is 10% of the canvas height;
</li><li>If the string ends in px, the `Height` of the video segment will be in px; for example, `100px` means that `Height` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
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
                     * 获取Operation on audio such as muting.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioOperations Operation on audio such as muting.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AudioTransform> GetAudioOperations() const;

                    /**
                     * 设置Operation on audio such as muting.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _audioOperations Operation on audio such as muting.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operation on video image such as image rotation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageOperations Operation on video image such as image rotation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ImageTransform> GetImageOperations() const;

                    /**
                     * 设置Operation on video image such as image rotation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _imageOperations Operation on video image such as image rotation.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Source of media material for video segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files.</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * Start time of video segment in material file in seconds. Default value: 0.
                     */
                    double m_sourceMediaStartTime;
                    bool m_sourceMediaStartTimeHasBeenSet;

                    /**
                     * Video segment duration in seconds. By default, the length of the video material will be used, which means that the entire material will be captured. If the source file is an image, `Duration` needs to be greater than 0.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The target video duration, in seconds.
<li>If `TargetDuration` is empty or `0`, the target duration is the same as `Duration`.</li>
<li>If `TargetDuration` is a value greater than 0, the playback speed will be changed to make the final video duration the same as the value of `TargetDuration`.</li>
                     */
                    double m_targetDuration;
                    bool m_targetDurationHasBeenSet;

                    /**
                     * Video origin position. Valid values:
<li> Center: the origin of coordinates is the center position, such as the center of canvas.</li>
Default value: Center.
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * The horizontal position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `XPos` of the video segment will be at the position of the specified percentage of the canvas width; for example, `10%` means that `XPos` is 10% of the canvas width.</li>
<li>If the string ends in px, the `XPos` of the video segment will be in px; for example, `100px` means that `XPos` is 100 px.</li>
Default value: 0 px.
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * The vertical position of the origin of the video segment relative to the origin of the canvas. % and px formats are supported:
<li>If the string ends in %, the `YPos` of the video segment will be at the position of the specified percentage of the canvas height; for example, `10%` means that `YPos` is 10% of the canvas height.</li>
<li>If the string ends in px, the `YPos` of the video segment will be in px; for example, `100px` means that `YPos` is 100 px.</li>
Default value: 0 px.
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * Video segment width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the video segment will be the specified percentage of the canvas width; for example, `10%` means that `Width` is 10% of the canvas width.</li>
<li>If the string ends in px, the `Width` of the video segment will be in px; for example, `100px` means that `Width` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Video segment height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the video segment will be the specified percentage of the canvas height; for example, `10%` means that `Height` is 10% of the canvas height;
</li><li>If the string ends in px, the `Height` of the video segment will be in px; for example, `100px` means that `Height` is 100 px.</li>
<li>If both `Width` and `Height` are empty, then they will be the `Width` and `Height` of the video material, respectively.</li>
<li>If `Width` is empty, but `Height` is not empty, `Width` will be proportionally scaled.</li>
<li>If `Width` is not empty, but `Height` is empty, `Height` will be proportionally scaled.</li>
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Operation on audio such as muting.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioTransform> m_audioOperations;
                    bool m_audioOperationsHasBeenSet;

                    /**
                     * Operation on video image such as image rotation.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageTransform> m_imageOperations;
                    bool m_imageOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEOTRACKITEM_H_

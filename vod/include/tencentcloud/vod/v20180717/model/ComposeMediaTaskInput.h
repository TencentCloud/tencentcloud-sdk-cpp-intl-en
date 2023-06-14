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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaTrack.h>
#include <tencentcloud/vod/v20180717/model/Canvas.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of media file composing task.
                */
                class ComposeMediaTaskInput : public AbstractModel
                {
                public:
                    ComposeMediaTaskInput();
                    ~ComposeMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials.
                     * @return Tracks List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials.
                     * 
                     */
                    std::vector<MediaTrack> GetTracks() const;

                    /**
                     * 设置List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials.
                     * @param _tracks List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials.
                     * 
                     */
                    void SetTracks(const std::vector<MediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取Canvas used for composing video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Canvas Canvas used for composing video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置Canvas used for composing video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _canvas Canvas used for composing video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCanvas(const Canvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取Information of output media file.
                     * @return Output Information of output media file.
                     * 
                     */
                    ComposeMediaOutput GetOutput() const;

                    /**
                     * 设置Information of output media file.
                     * @param _output Information of output media file.
                     * 
                     */
                    void SetOutput(const ComposeMediaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * List of input media tracks, i.e., information of multiple tracks composed of video, audio, image, and other materials.
                     */
                    std::vector<MediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * Canvas used for composing video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * Information of output media file.
                     */
                    ComposeMediaOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_

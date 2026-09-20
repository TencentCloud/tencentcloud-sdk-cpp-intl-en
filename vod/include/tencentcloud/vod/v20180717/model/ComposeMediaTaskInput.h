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
                * Input of a media file creation task.
                */
                class ComposeMediaTaskInput : public AbstractModel
                {
                public:
                    ComposeMediaTaskInput();
                    ~ComposeMediaTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input media track list, including multiple track information composed of materials such as video, audio, and images.
                     * @return Tracks Input media track list, including multiple track information composed of materials such as video, audio, and images.
                     * 
                     */
                    std::vector<MediaTrack> GetTracks() const;

                    /**
                     * 设置Input media track list, including multiple track information composed of materials such as video, audio, and images.
                     * @param _tracks Input media track list, including multiple track information composed of materials such as video, audio, and images.
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
                     * 获取Canvas used when making video files.
                     * @return Canvas Canvas used when making video files.
                     * 
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置Canvas used when making video files.
                     * @param _canvas Canvas used when making video files.
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
                     * 获取Output media file information.
                     * @return Output Output media file information.
                     * 
                     */
                    ComposeMediaOutput GetOutput() const;

                    /**
                     * 设置Output media file information.
                     * @param _output Output media file information.
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
                     * Input media track list, including multiple track information composed of materials such as video, audio, and images.
                     */
                    std::vector<MediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * Canvas used when making video files.
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * Output media file information.
                     */
                    ComposeMediaOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKINPUT_H_

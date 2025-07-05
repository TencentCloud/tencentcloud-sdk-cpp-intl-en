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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskStreamPara.h>
#include <tencentcloud/vod/v20180717/model/HeadTailTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskAudioInput.h>
#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskSubtitleInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateComplexAdaptiveDynamicStreamingTask request structure.
                */
                class CreateComplexAdaptiveDynamicStreamingTaskRequest : public AbstractModel
                {
                public:
                    CreateComplexAdaptiveDynamicStreamingTaskRequest();
                    ~CreateComplexAdaptiveDynamicStreamingTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The VOD application ID.
                     * @return SubAppId The VOD application ID.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置The VOD application ID.
                     * @param _subAppId The VOD application ID.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Media ID of the main media.
                     * @return FileId Media ID of the main media.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media ID of the main media.
                     * @param _fileId Media ID of the main media.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Adaptive bitrate streaming parameters, supporting up to 8 entries.
                     * @return StreamParaSet Adaptive bitrate streaming parameters, supporting up to 8 entries.
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> GetStreamParaSet() const;

                    /**
                     * 设置Adaptive bitrate streaming parameters, supporting up to 8 entries.
                     * @param _streamParaSet Adaptive bitrate streaming parameters, supporting up to 8 entries.
                     * 
                     */
                    void SetStreamParaSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara>& _streamParaSet);

                    /**
                     * 判断参数 StreamParaSet 是否已赋值
                     * @return StreamParaSet 是否已赋值
                     * 
                     */
                    bool StreamParaSetHasBeenSet() const;

                    /**
                     * 获取List of video opening/closing credits configuration template IDs, supporting up to 4 entries. If this field is filled in, the start times of the media specified in AudioSet and SubtitleSet will be automatically adjusted to stay in sync with the main media.
                     * @return HeadTailSet List of video opening/closing credits configuration template IDs, supporting up to 4 entries. If this field is filled in, the start times of the media specified in AudioSet and SubtitleSet will be automatically adjusted to stay in sync with the main media.
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置List of video opening/closing credits configuration template IDs, supporting up to 4 entries. If this field is filled in, the start times of the media specified in AudioSet and SubtitleSet will be automatically adjusted to stay in sync with the main media.
                     * @param _headTailSet List of video opening/closing credits configuration template IDs, supporting up to 4 entries. If this field is filled in, the start times of the media specified in AudioSet and SubtitleSet will be automatically adjusted to stay in sync with the main media.
                     * 
                     */
                    void SetHeadTailSet(const std::vector<HeadTailTaskInput>& _headTailSet);

                    /**
                     * 判断参数 HeadTailSet 是否已赋值
                     * @return HeadTailSet 是否已赋值
                     * 
                     */
                    bool HeadTailSetHasBeenSet() const;

                    /**
                     * 获取Audio media parameters, supporting up to 16 entries. Each array element corresponds to an audio stream in the output. If you want to add the audio stream from the main media file to the output, you also need to specify it here. The order of elements in the array will determine the order of audio streams in the output. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * @return AudioSet Audio media parameters, supporting up to 16 entries. Each array element corresponds to an audio stream in the output. If you want to add the audio stream from the main media file to the output, you also need to specify it here. The order of elements in the array will determine the order of audio streams in the output. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> GetAudioSet() const;

                    /**
                     * 设置Audio media parameters, supporting up to 16 entries. Each array element corresponds to an audio stream in the output. If you want to add the audio stream from the main media file to the output, you also need to specify it here. The order of elements in the array will determine the order of audio streams in the output. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * @param _audioSet Audio media parameters, supporting up to 16 entries. Each array element corresponds to an audio stream in the output. If you want to add the audio stream from the main media file to the output, you also need to specify it here. The order of elements in the array will determine the order of audio streams in the output. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * 
                     */
                    void SetAudioSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput>& _audioSet);

                    /**
                     * 判断参数 AudioSet 是否已赋值
                     * @return AudioSet 是否已赋值
                     * 
                     */
                    bool AudioSetHasBeenSet() const;

                    /**
                     * 获取List of subtitle IDs, supporting up to 16 entries. Each array element corresponds to an subtitle stream in the output. The order of elements in the array will determine the order of subtitles in the output.
                     * @return SubtitleSet List of subtitle IDs, supporting up to 16 entries. Each array element corresponds to an subtitle stream in the output. The order of elements in the array will determine the order of subtitles in the output.
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> GetSubtitleSet() const;

                    /**
                     * 设置List of subtitle IDs, supporting up to 16 entries. Each array element corresponds to an subtitle stream in the output. The order of elements in the array will determine the order of subtitles in the output.
                     * @param _subtitleSet List of subtitle IDs, supporting up to 16 entries. Each array element corresponds to an subtitle stream in the output. The order of elements in the array will determine the order of subtitles in the output.
                     * 
                     */
                    void SetSubtitleSet(const std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                private:

                    /**
                     * The VOD application ID.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media ID of the main media.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Adaptive bitrate streaming parameters, supporting up to 8 entries.
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> m_streamParaSet;
                    bool m_streamParaSetHasBeenSet;

                    /**
                     * List of video opening/closing credits configuration template IDs, supporting up to 4 entries. If this field is filled in, the start times of the media specified in AudioSet and SubtitleSet will be automatically adjusted to stay in sync with the main media.
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * Audio media parameters, supporting up to 16 entries. Each array element corresponds to an audio stream in the output. If you want to add the audio stream from the main media file to the output, you also need to specify it here. The order of elements in the array will determine the order of audio streams in the output. If the input media file contains both video and audio streams, the video stream will be ignored.
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> m_audioSet;
                    bool m_audioSetHasBeenSet;

                    /**
                     * List of subtitle IDs, supporting up to 16 entries. Each array element corresponds to an subtitle stream in the output. The order of elements in the array will determine the order of subtitles in the output.
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_

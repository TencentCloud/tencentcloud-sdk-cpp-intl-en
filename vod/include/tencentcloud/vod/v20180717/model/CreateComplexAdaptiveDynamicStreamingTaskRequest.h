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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
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
                     * 获取Media ID of the main media file.
                     * @return FileId Media ID of the main media file.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media ID of the main media file.
                     * @param _fileId Media ID of the main media file.
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
                     * 获取Adaptive Bitrate Parameters support a maximum of 8.
                     * @return StreamParaSet Adaptive Bitrate Parameters support a maximum of 8.
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> GetStreamParaSet() const;

                    /**
                     * 设置Adaptive Bitrate Parameters support a maximum of 8.
                     * @param _streamParaSet Adaptive Bitrate Parameters support a maximum of 8.
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
                     * 获取Credits list, supports multiple opening and ending sequences, with a maximum of 4 supported. If this field is filled, the start time of the media specified in AudioSet and SubtitleSet will automatically adjust to keep synchronized with the main media.
                     * @return HeadTailSet Credits list, supports multiple opening and ending sequences, with a maximum of 4 supported. If this field is filled, the start time of the media specified in AudioSet and SubtitleSet will automatically adjust to keep synchronized with the main media.
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置Credits list, supports multiple opening and ending sequences, with a maximum of 4 supported. If this field is filled, the start time of the media specified in AudioSet and SubtitleSet will automatically adjust to keep synchronized with the main media.
                     * @param _headTailSet Credits list, supports multiple opening and ending sequences, with a maximum of 4 supported. If this field is filled, the start time of the media specified in AudioSet and SubtitleSet will automatically adjust to keep synchronized with the main media.
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
                     * 获取Multilingual audio stream parameters, supports a maximum of 16. Each array element corresponds to an audio stream in the adaptive bitrate stream. If you need to add the audio stream from the main media file to the output adaptive bitrate stream, you must specify it here. The order of elements in an array determines the order of audio streams in the adaptive bitrate stream. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * @return AudioSet Multilingual audio stream parameters, supports a maximum of 16. Each array element corresponds to an audio stream in the adaptive bitrate stream. If you need to add the audio stream from the main media file to the output adaptive bitrate stream, you must specify it here. The order of elements in an array determines the order of audio streams in the adaptive bitrate stream. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> GetAudioSet() const;

                    /**
                     * 设置Multilingual audio stream parameters, supports a maximum of 16. Each array element corresponds to an audio stream in the adaptive bitrate stream. If you need to add the audio stream from the main media file to the output adaptive bitrate stream, you must specify it here. The order of elements in an array determines the order of audio streams in the adaptive bitrate stream. If the input media file contains both video and audio streams, the video stream will be ignored.
                     * @param _audioSet Multilingual audio stream parameters, supports a maximum of 16. Each array element corresponds to an audio stream in the adaptive bitrate stream. If you need to add the audio stream from the main media file to the output adaptive bitrate stream, you must specify it here. The order of elements in an array determines the order of audio streams in the adaptive bitrate stream. If the input media file contains both video and audio streams, the video stream will be ignored.
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
                     * 获取Multilingual subtitle parameters, with a maximum of 16 supported. Each element in an array corresponds to a subtitle stream in the adaptive bitrate stream. The order of elements in an array determines the order of subtitle streams in the adaptive bitrate stream.
                     * @return SubtitleSet Multilingual subtitle parameters, with a maximum of 16 supported. Each element in an array corresponds to a subtitle stream in the adaptive bitrate stream. The order of elements in an array determines the order of subtitle streams in the adaptive bitrate stream.
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> GetSubtitleSet() const;

                    /**
                     * 设置Multilingual subtitle parameters, with a maximum of 16 supported. Each element in an array corresponds to a subtitle stream in the adaptive bitrate stream. The order of elements in an array determines the order of subtitle streams in the adaptive bitrate stream.
                     * @param _subtitleSet Multilingual subtitle parameters, with a maximum of 16 supported. Each element in an array corresponds to a subtitle stream in the adaptive bitrate stream. The order of elements in an array determines the order of subtitle streams in the adaptive bitrate stream.
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media ID of the main media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Adaptive Bitrate Parameters support a maximum of 8.
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> m_streamParaSet;
                    bool m_streamParaSetHasBeenSet;

                    /**
                     * Credits list, supports multiple opening and ending sequences, with a maximum of 4 supported. If this field is filled, the start time of the media specified in AudioSet and SubtitleSet will automatically adjust to keep synchronized with the main media.
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * Multilingual audio stream parameters, supports a maximum of 16. Each array element corresponds to an audio stream in the adaptive bitrate stream. If you need to add the audio stream from the main media file to the output adaptive bitrate stream, you must specify it here. The order of elements in an array determines the order of audio streams in the adaptive bitrate stream. If the input media file contains both video and audio streams, the video stream will be ignored.
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> m_audioSet;
                    bool m_audioSetHasBeenSet;

                    /**
                     * Multilingual subtitle parameters, with a maximum of 16 supported. Each element in an array corresponds to a subtitle stream in the adaptive bitrate stream. The order of elements in an array determines the order of subtitle streams in the adaptive bitrate stream.
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_

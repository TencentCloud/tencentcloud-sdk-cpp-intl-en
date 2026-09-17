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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return FileId 
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置
                     * @param _fileId 
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
                     * 获取
                     * @return StreamParaSet 
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> GetStreamParaSet() const;

                    /**
                     * 设置
                     * @param _streamParaSet 
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
                     * 获取
                     * @return HeadTailSet 
                     * 
                     */
                    std::vector<HeadTailTaskInput> GetHeadTailSet() const;

                    /**
                     * 设置
                     * @param _headTailSet 
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
                     * 获取
                     * @return AudioSet 
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> GetAudioSet() const;

                    /**
                     * 设置
                     * @param _audioSet 
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
                     * 获取
                     * @return SubtitleSet 
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> GetSubtitleSet() const;

                    /**
                     * 设置
                     * @param _subtitleSet 
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
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> m_streamParaSet;
                    bool m_streamParaSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<HeadTailTaskInput> m_headTailSet;
                    bool m_headTailSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> m_audioSet;
                    bool m_audioSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATECOMPLEXADAPTIVEDYNAMICSTREAMINGTASKREQUEST_H_

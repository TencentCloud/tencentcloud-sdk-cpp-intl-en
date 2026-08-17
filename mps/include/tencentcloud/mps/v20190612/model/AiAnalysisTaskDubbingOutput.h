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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDUBBINGOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDUBBINGOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent translation result information
                */
                class AiAnalysisTaskDubbingOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDubbingOutput();
                    ~AiAnalysisTaskDubbingOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Dubbed video path.</p>
                     * @return VideoPath <p>Dubbed video path.</p>
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置<p>Dubbed video path.</p>
                     * @param _videoPath <p>Dubbed video path.</p>
                     * 
                     */
                    void SetVideoPath(const std::string& _videoPath);

                    /**
                     * 判断参数 VideoPath 是否已赋值
                     * @return VideoPath 是否已赋值
                     * 
                     */
                    bool VideoPathHasBeenSet() const;

                    /**
                     * 获取<p>Tag file path</p>
                     * @return SpeakerPath <p>Tag file path</p>
                     * 
                     */
                    std::string GetSpeakerPath() const;

                    /**
                     * 设置<p>Tag file path</p>
                     * @param _speakerPath <p>Tag file path</p>
                     * 
                     */
                    void SetSpeakerPath(const std::string& _speakerPath);

                    /**
                     * 判断参数 SpeakerPath 是否已赋值
                     * @return SpeakerPath 是否已赋值
                     * 
                     */
                    bool SpeakerPathHasBeenSet() const;

                    /**
                     * 获取<p>Voice type id</p>
                     * @return VoiceId <p>Voice type id</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice type id</p>
                     * @param _voiceId <p>Voice type id</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Storage location of the dubbed video.</p>
                     * @return OutputStorage <p>Storage location of the dubbed video.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Storage location of the dubbed video.</p>
                     * @param _outputStorage <p>Storage location of the dubbed video.</p>
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>Additional results, currently including subtitle file result URLs</p>
                     * @return ExtraOutput <p>Additional results, currently including subtitle file result URLs</p>
                     * 
                     */
                    std::string GetExtraOutput() const;

                    /**
                     * 设置<p>Additional results, currently including subtitle file result URLs</p>
                     * @param _extraOutput <p>Additional results, currently including subtitle file result URLs</p>
                     * 
                     */
                    void SetExtraOutput(const std::string& _extraOutput);

                    /**
                     * 判断参数 ExtraOutput 是否已赋值
                     * @return ExtraOutput 是否已赋值
                     * 
                     */
                    bool ExtraOutputHasBeenSet() const;

                    /**
                     * 获取<p>FileId of the dubbed video.</p>
                     * @return VideoFileId <p>FileId of the dubbed video.</p>
                     * 
                     */
                    std::string GetVideoFileId() const;

                    /**
                     * 设置<p>FileId of the dubbed video.</p>
                     * @param _videoFileId <p>FileId of the dubbed video.</p>
                     * 
                     */
                    void SetVideoFileId(const std::string& _videoFileId);

                    /**
                     * 判断参数 VideoFileId 是否已赋值
                     * @return VideoFileId 是否已赋值
                     * 
                     */
                    bool VideoFileIdHasBeenSet() const;

                    /**
                     * 获取<p>FileId of the tag file.</p>
                     * @return SpeakerFileId <p>FileId of the tag file.</p>
                     * 
                     */
                    std::string GetSpeakerFileId() const;

                    /**
                     * 设置<p>FileId of the tag file.</p>
                     * @param _speakerFileId <p>FileId of the tag file.</p>
                     * 
                     */
                    void SetSpeakerFileId(const std::string& _speakerFileId);

                    /**
                     * 判断参数 SpeakerFileId 是否已赋值
                     * @return SpeakerFileId 是否已赋值
                     * 
                     */
                    bool SpeakerFileIdHasBeenSet() const;

                private:

                    /**
                     * <p>Dubbed video path.</p>
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

                    /**
                     * <p>Tag file path</p>
                     */
                    std::string m_speakerPath;
                    bool m_speakerPathHasBeenSet;

                    /**
                     * <p>Voice type id</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Storage location of the dubbed video.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Additional results, currently including subtitle file result URLs</p>
                     */
                    std::string m_extraOutput;
                    bool m_extraOutputHasBeenSet;

                    /**
                     * <p>FileId of the dubbed video.</p>
                     */
                    std::string m_videoFileId;
                    bool m_videoFileIdHasBeenSet;

                    /**
                     * <p>FileId of the tag file.</p>
                     */
                    std::string m_speakerFileId;
                    bool m_speakerFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDUBBINGOUTPUT_H_

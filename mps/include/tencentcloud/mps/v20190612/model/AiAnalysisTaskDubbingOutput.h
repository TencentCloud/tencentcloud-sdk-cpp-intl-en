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
                * Intelligent translation result information.
                */
                class AiAnalysisTaskDubbingOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDubbingOutput();
                    ~AiAnalysisTaskDubbingOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the video path for translation.
                     * @return VideoPath Specifies the video path for translation.
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置Specifies the video path for translation.
                     * @param _videoPath Specifies the video path for translation.
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
                     * 获取Specifies the file path of the tag.

                     * @return SpeakerPath Specifies the file path of the tag.

                     * 
                     */
                    std::string GetSpeakerPath() const;

                    /**
                     * 设置Specifies the file path of the tag.

                     * @param _speakerPath Specifies the file path of the tag.

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
                     * 获取Specifies the storage location of the transcoded video.
                     * @return OutputStorage Specifies the storage location of the transcoded video.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Specifies the storage location of the transcoded video.
                     * @param _outputStorage Specifies the storage location of the transcoded video.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * Specifies the video path for translation.
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

                    /**
                     * Specifies the file path of the tag.

                     */
                    std::string m_speakerPath;
                    bool m_speakerPathHasBeenSet;

                    /**
                     * Specifies the storage location of the transcoded video.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDUBBINGOUTPUT_H_

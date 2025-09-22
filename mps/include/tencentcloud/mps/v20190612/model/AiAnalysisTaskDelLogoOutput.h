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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SubtitlePosition.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent removal result.
                */
                class AiAnalysisTaskDelLogoOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskDelLogoOutput();
                    ~AiAnalysisTaskDelLogoOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Path of a file after removal.
                     * @return Path Path of a file after removal.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path of a file after removal.
                     * @param _path Path of a file after removal.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Storage location of a file after removal.
                     * @return OutputStorage Storage location of a file after removal.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage location of a file after removal.
                     * @param _outputStorage Storage location of a file after removal.
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
                     * 获取Path of a subtitle file extracted from a video.
                     * @return OriginSubtitlePath Path of a subtitle file extracted from a video.
                     * 
                     */
                    std::string GetOriginSubtitlePath() const;

                    /**
                     * 设置Path of a subtitle file extracted from a video.
                     * @param _originSubtitlePath Path of a subtitle file extracted from a video.
                     * 
                     */
                    void SetOriginSubtitlePath(const std::string& _originSubtitlePath);

                    /**
                     * 判断参数 OriginSubtitlePath 是否已赋值
                     * @return OriginSubtitlePath 是否已赋值
                     * 
                     */
                    bool OriginSubtitlePathHasBeenSet() const;

                    /**
                     * 获取Path of a subtitle translation file extracted from a video.
                     * @return TranslateSubtitlePath Path of a subtitle translation file extracted from a video.
                     * 
                     */
                    std::string GetTranslateSubtitlePath() const;

                    /**
                     * 设置Path of a subtitle translation file extracted from a video.
                     * @param _translateSubtitlePath Path of a subtitle translation file extracted from a video.
                     * 
                     */
                    void SetTranslateSubtitlePath(const std::string& _translateSubtitlePath);

                    /**
                     * 判断参数 TranslateSubtitlePath 是否已赋值
                     * @return TranslateSubtitlePath 是否已赋值
                     * 
                     */
                    bool TranslateSubtitlePathHasBeenSet() const;

                    /**
                     * 获取Position of the erased subtitle. Note: This field is only valid for subtitle extraction when the option to return subtitle positions is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubtitlePos Position of the erased subtitle. Note: This field is only valid for subtitle extraction when the option to return subtitle positions is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SubtitlePosition GetSubtitlePos() const;

                    /**
                     * 设置Position of the erased subtitle. Note: This field is only valid for subtitle extraction when the option to return subtitle positions is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subtitlePos Position of the erased subtitle. Note: This field is only valid for subtitle extraction when the option to return subtitle positions is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubtitlePos(const SubtitlePosition& _subtitlePos);

                    /**
                     * 判断参数 SubtitlePos 是否已赋值
                     * @return SubtitlePos 是否已赋值
                     * 
                     */
                    bool SubtitlePosHasBeenSet() const;

                    /**
                     * 获取Specifies the file url of the video after voice cloning.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VoiceClonedVideo Specifies the file url of the video after voice cloning.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVoiceClonedVideo() const;

                    /**
                     * 设置Specifies the file url of the video after voice cloning.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _voiceClonedVideo Specifies the file url of the video after voice cloning.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVoiceClonedVideo(const std::string& _voiceClonedVideo);

                    /**
                     * 判断参数 VoiceClonedVideo 是否已赋值
                     * @return VoiceClonedVideo 是否已赋值
                     * 
                     */
                    bool VoiceClonedVideoHasBeenSet() const;

                    /**
                     * 获取Specifies the file address of the voice type clone annotation.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VoiceClonedMarkFile Specifies the file address of the voice type clone annotation.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVoiceClonedMarkFile() const;

                    /**
                     * 设置Specifies the file address of the voice type clone annotation.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _voiceClonedMarkFile Specifies the file address of the voice type clone annotation.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVoiceClonedMarkFile(const std::string& _voiceClonedMarkFile);

                    /**
                     * 判断参数 VoiceClonedMarkFile 是否已赋值
                     * @return VoiceClonedMarkFile 是否已赋值
                     * 
                     */
                    bool VoiceClonedMarkFileHasBeenSet() const;

                private:

                    /**
                     * Path of a file after removal.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Storage location of a file after removal.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Path of a subtitle file extracted from a video.
                     */
                    std::string m_originSubtitlePath;
                    bool m_originSubtitlePathHasBeenSet;

                    /**
                     * Path of a subtitle translation file extracted from a video.
                     */
                    std::string m_translateSubtitlePath;
                    bool m_translateSubtitlePathHasBeenSet;

                    /**
                     * Position of the erased subtitle. Note: This field is only valid for subtitle extraction when the option to return subtitle positions is enabled.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SubtitlePosition m_subtitlePos;
                    bool m_subtitlePosHasBeenSet;

                    /**
                     * Specifies the file url of the video after voice cloning.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_voiceClonedVideo;
                    bool m_voiceClonedVideoHasBeenSet;

                    /**
                     * Specifies the file address of the voice type clone annotation.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_voiceClonedMarkFile;
                    bool m_voiceClonedMarkFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_

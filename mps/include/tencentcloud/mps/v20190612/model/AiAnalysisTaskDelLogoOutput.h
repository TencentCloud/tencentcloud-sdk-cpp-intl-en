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
                     * 获取<p>Path of a file after removal.</p>
                     * @return Path <p>Path of a file after removal.</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Path of a file after removal.</p>
                     * @param _path <p>Path of a file after removal.</p>
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
                     * 获取<p>Storage location of a file after removal.</p>
                     * @return OutputStorage <p>Storage location of a file after removal.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Storage location of a file after removal.</p>
                     * @param _outputStorage <p>Storage location of a file after removal.</p>
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
                     * 获取<p>Path of subtitle file extracted from video.</p>
                     * @return OriginSubtitlePath <p>Path of subtitle file extracted from video.</p>
                     * 
                     */
                    std::string GetOriginSubtitlePath() const;

                    /**
                     * 设置<p>Path of subtitle file extracted from video.</p>
                     * @param _originSubtitlePath <p>Path of subtitle file extracted from video.</p>
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
                     * 获取<p>Path of a subtitle translation file extracted from a video.</p>
                     * @return TranslateSubtitlePath <p>Path of a subtitle translation file extracted from a video.</p>
                     * 
                     */
                    std::string GetTranslateSubtitlePath() const;

                    /**
                     * 设置<p>Path of a subtitle translation file extracted from a video.</p>
                     * @param _translateSubtitlePath <p>Path of a subtitle translation file extracted from a video.</p>
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
                     * 获取<p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitlePos <p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SubtitlePosition GetSubtitlePos() const;

                    /**
                     * 设置<p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitlePos <p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>File URL of the video after voice type cloning</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceClonedVideo <p>File URL of the video after voice type cloning</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoiceClonedVideo() const;

                    /**
                     * 设置<p>File URL of the video after voice type cloning</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voiceClonedVideo <p>File URL of the video after voice type cloning</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>File address of the voice type clone annotation</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoiceClonedMarkFile <p>File address of the voice type clone annotation</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoiceClonedMarkFile() const;

                    /**
                     * 设置<p>File address of the voice type clone annotation</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voiceClonedMarkFile <p>File address of the voice type clone annotation</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVoiceClonedMarkFile(const std::string& _voiceClonedMarkFile);

                    /**
                     * 判断参数 VoiceClonedMarkFile 是否已赋值
                     * @return VoiceClonedMarkFile 是否已赋值
                     * 
                     */
                    bool VoiceClonedMarkFileHasBeenSet() const;

                    /**
                     * 获取<p>Result path of a video for removal only</p>
                     * @return ErasedVideoPath <p>Result path of a video for removal only</p>
                     * 
                     */
                    std::string GetErasedVideoPath() const;

                    /**
                     * 设置<p>Result path of a video for removal only</p>
                     * @param _erasedVideoPath <p>Result path of a video for removal only</p>
                     * 
                     */
                    void SetErasedVideoPath(const std::string& _erasedVideoPath);

                    /**
                     * 判断参数 ErasedVideoPath 是否已赋值
                     * @return ErasedVideoPath 是否已赋值
                     * 
                     */
                    bool ErasedVideoPathHasBeenSet() const;

                    /**
                     * 获取<p>Voice cloning editing information</p><p>Editing information for secondary modifications of voice cloning</p>
                     * @return DubbingEditInfoUrl <p>Voice cloning editing information</p><p>Editing information for secondary modifications of voice cloning</p>
                     * 
                     */
                    std::string GetDubbingEditInfoUrl() const;

                    /**
                     * 设置<p>Voice cloning editing information</p><p>Editing information for secondary modifications of voice cloning</p>
                     * @param _dubbingEditInfoUrl <p>Voice cloning editing information</p><p>Editing information for secondary modifications of voice cloning</p>
                     * 
                     */
                    void SetDubbingEditInfoUrl(const std::string& _dubbingEditInfoUrl);

                    /**
                     * 判断参数 DubbingEditInfoUrl 是否已赋值
                     * @return DubbingEditInfoUrl 是否已赋值
                     * 
                     */
                    bool DubbingEditInfoUrlHasBeenSet() const;

                    /**
                     * 获取<p>FileId of a file after removal.</p>
                     * @return FileId <p>FileId of a file after removal.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>FileId of a file after removal.</p>
                     * @param _fileId <p>FileId of a file after removal.</p>
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
                     * 获取<p>FileId of the subtitle file extracted from video.</p>
                     * @return OriginSubtitleFileId <p>FileId of the subtitle file extracted from video.</p>
                     * 
                     */
                    std::string GetOriginSubtitleFileId() const;

                    /**
                     * 设置<p>FileId of the subtitle file extracted from video.</p>
                     * @param _originSubtitleFileId <p>FileId of the subtitle file extracted from video.</p>
                     * 
                     */
                    void SetOriginSubtitleFileId(const std::string& _originSubtitleFileId);

                    /**
                     * 判断参数 OriginSubtitleFileId 是否已赋值
                     * @return OriginSubtitleFileId 是否已赋值
                     * 
                     */
                    bool OriginSubtitleFileIdHasBeenSet() const;

                    /**
                     * 获取<p>FileId of a subtitle translation file extracted from a video.</p>
                     * @return TranslateSubtitleFileId <p>FileId of a subtitle translation file extracted from a video.</p>
                     * 
                     */
                    std::string GetTranslateSubtitleFileId() const;

                    /**
                     * 设置<p>FileId of a subtitle translation file extracted from a video.</p>
                     * @param _translateSubtitleFileId <p>FileId of a subtitle translation file extracted from a video.</p>
                     * 
                     */
                    void SetTranslateSubtitleFileId(const std::string& _translateSubtitleFileId);

                    /**
                     * 判断参数 TranslateSubtitleFileId 是否已赋值
                     * @return TranslateSubtitleFileId 是否已赋值
                     * 
                     */
                    bool TranslateSubtitleFileIdHasBeenSet() const;

                private:

                    /**
                     * <p>Path of a file after removal.</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Storage location of a file after removal.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Path of subtitle file extracted from video.</p>
                     */
                    std::string m_originSubtitlePath;
                    bool m_originSubtitlePathHasBeenSet;

                    /**
                     * <p>Path of a subtitle translation file extracted from a video.</p>
                     */
                    std::string m_translateSubtitlePath;
                    bool m_translateSubtitlePathHasBeenSet;

                    /**
                     * <p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SubtitlePosition m_subtitlePos;
                    bool m_subtitlePosHasBeenSet;

                    /**
                     * <p>File URL of the video after voice type cloning</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voiceClonedVideo;
                    bool m_voiceClonedVideoHasBeenSet;

                    /**
                     * <p>File address of the voice type clone annotation</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voiceClonedMarkFile;
                    bool m_voiceClonedMarkFileHasBeenSet;

                    /**
                     * <p>Result path of a video for removal only</p>
                     */
                    std::string m_erasedVideoPath;
                    bool m_erasedVideoPathHasBeenSet;

                    /**
                     * <p>Voice cloning editing information</p><p>Editing information for secondary modifications of voice cloning</p>
                     */
                    std::string m_dubbingEditInfoUrl;
                    bool m_dubbingEditInfoUrlHasBeenSet;

                    /**
                     * <p>FileId of a file after removal.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>FileId of the subtitle file extracted from video.</p>
                     */
                    std::string m_originSubtitleFileId;
                    bool m_originSubtitleFileIdHasBeenSet;

                    /**
                     * <p>FileId of a subtitle translation file extracted from a video.</p>
                     */
                    std::string m_translateSubtitleFileId;
                    bool m_translateSubtitleFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKDELLOGOOUTPUT_H_

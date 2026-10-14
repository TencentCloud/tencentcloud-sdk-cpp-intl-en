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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitlePosition.h>
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
                * AI dubbing result information
                */
                class AIDubbingTaskOutput : public AbstractModel
                {
                public:
                    AIDubbingTaskOutput();
                    ~AIDubbingTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>File URL of the video after voice type cloning</p>
                     * @return VoiceClonedVideo <p>File URL of the video after voice type cloning</p>
                     * 
                     */
                    std::string GetVoiceClonedVideo() const;

                    /**
                     * 设置<p>File URL of the video after voice type cloning</p>
                     * @param _voiceClonedVideo <p>File URL of the video after voice type cloning</p>
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
                     * @return VoiceClonedMarkFile <p>File address of the voice type clone annotation</p>
                     * 
                     */
                    std::string GetVoiceClonedMarkFile() const;

                    /**
                     * 设置<p>File address of the voice type clone annotation</p>
                     * @param _voiceClonedMarkFile <p>File address of the voice type clone annotation</p>
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
                     * 获取<p>Video output path.</p>
                     * @return VideoPath <p>Video output path.</p>
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置<p>Video output path.</p>
                     * @param _videoPath <p>Video output path.</p>
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

                    /**
                     * 获取<p>Tag file path.</p>
                     * @return SpeakerPath <p>Tag file path.</p>
                     * 
                     */
                    std::string GetSpeakerPath() const;

                    /**
                     * 设置<p>Tag file path.</p>
                     * @param _speakerPath <p>Tag file path.</p>
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
                     * 获取<p>Fileid of the tag file.</p>
                     * @return SpeakerFileId <p>Fileid of the tag file.</p>
                     * 
                     */
                    std::string GetSpeakerFileId() const;

                    /**
                     * 设置<p>Fileid of the tag file.</p>
                     * @param _speakerFileId <p>Fileid of the tag file.</p>
                     * 
                     */
                    void SetSpeakerFileId(const std::string& _speakerFileId);

                    /**
                     * 判断参数 SpeakerFileId 是否已赋值
                     * @return SpeakerFileId 是否已赋值
                     * 
                     */
                    bool SpeakerFileIdHasBeenSet() const;

                    /**
                     * 获取<p>FileId of the video output after removal.</p>
                     * @return EraseVideoFileId <p>FileId of the video output after removal.</p>
                     * 
                     */
                    std::string GetEraseVideoFileId() const;

                    /**
                     * 设置<p>FileId of the video output after removal.</p>
                     * @param _eraseVideoFileId <p>FileId of the video output after removal.</p>
                     * 
                     */
                    void SetEraseVideoFileId(const std::string& _eraseVideoFileId);

                    /**
                     * 判断参数 EraseVideoFileId 是否已赋值
                     * @return EraseVideoFileId 是否已赋值
                     * 
                     */
                    bool EraseVideoFileIdHasBeenSet() const;

                    /**
                     * 获取<p>Erase video output path.</p>
                     * @return EraseVideoPath <p>Erase video output path.</p>
                     * 
                     */
                    std::string GetEraseVideoPath() const;

                    /**
                     * 设置<p>Erase video output path.</p>
                     * @param _eraseVideoPath <p>Erase video output path.</p>
                     * 
                     */
                    void SetEraseVideoPath(const std::string& _eraseVideoPath);

                    /**
                     * 判断参数 EraseVideoPath 是否已赋值
                     * @return EraseVideoPath 是否已赋值
                     * 
                     */
                    bool EraseVideoPathHasBeenSet() const;

                    /**
                     * 获取<p>Dubbed audio file path of the translation.</p>
                     * @return DstAudioPath <p>Dubbed audio file path of the translation.</p>
                     * 
                     */
                    std::string GetDstAudioPath() const;

                    /**
                     * 设置<p>Dubbed audio file path of the translation.</p>
                     * @param _dstAudioPath <p>Dubbed audio file path of the translation.</p>
                     * 
                     */
                    void SetDstAudioPath(const std::string& _dstAudioPath);

                    /**
                     * 判断参数 DstAudioPath 是否已赋值
                     * @return DstAudioPath 是否已赋值
                     * 
                     */
                    bool DstAudioPathHasBeenSet() const;

                    /**
                     * 获取<p>FileId of the audio file for the translated dubbing.</p>
                     * @return DstAudioFileId <p>FileId of the audio file for the translated dubbing.</p>
                     * 
                     */
                    std::string GetDstAudioFileId() const;

                    /**
                     * 设置<p>FileId of the audio file for the translated dubbing.</p>
                     * @param _dstAudioFileId <p>FileId of the audio file for the translated dubbing.</p>
                     * 
                     */
                    void SetDstAudioFileId(const std::string& _dstAudioFileId);

                    /**
                     * 判断参数 DstAudioFileId 是否已赋值
                     * @return DstAudioFileId 是否已赋值
                     * 
                     */
                    bool DstAudioFileIdHasBeenSet() const;

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
                     * 获取<p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
                     * @return SubtitlePos <p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
                     * 
                     */
                    SubtitlePosition GetSubtitlePos() const;

                    /**
                     * 设置<p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
                     * @param _subtitlePos <p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
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
                     * 获取<p>Storage location of the output file of the AI dubbing task.</p>
                     * @return OutputStorage <p>Storage location of the output file of the AI dubbing task.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Storage location of the output file of the AI dubbing task.</p>
                     * @param _outputStorage <p>Storage location of the output file of the AI dubbing task.</p>
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
                     * <p>File URL of the video after voice type cloning</p>
                     */
                    std::string m_voiceClonedVideo;
                    bool m_voiceClonedVideoHasBeenSet;

                    /**
                     * <p>File address of the voice type clone annotation</p>
                     */
                    std::string m_voiceClonedMarkFile;
                    bool m_voiceClonedMarkFileHasBeenSet;

                    /**
                     * <p>Video output path.</p>
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

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

                    /**
                     * <p>Tag file path.</p>
                     */
                    std::string m_speakerPath;
                    bool m_speakerPathHasBeenSet;

                    /**
                     * <p>Fileid of the tag file.</p>
                     */
                    std::string m_speakerFileId;
                    bool m_speakerFileIdHasBeenSet;

                    /**
                     * <p>FileId of the video output after removal.</p>
                     */
                    std::string m_eraseVideoFileId;
                    bool m_eraseVideoFileIdHasBeenSet;

                    /**
                     * <p>Erase video output path.</p>
                     */
                    std::string m_eraseVideoPath;
                    bool m_eraseVideoPathHasBeenSet;

                    /**
                     * <p>Dubbed audio file path of the translation.</p>
                     */
                    std::string m_dstAudioPath;
                    bool m_dstAudioPathHasBeenSet;

                    /**
                     * <p>FileId of the audio file for the translated dubbing.</p>
                     */
                    std::string m_dstAudioFileId;
                    bool m_dstAudioFileIdHasBeenSet;

                    /**
                     * <p>Voice cloning editing information</p><p>Editing information for secondary modifications of voice cloning</p>
                     */
                    std::string m_dubbingEditInfoUrl;
                    bool m_dubbingEditInfoUrlHasBeenSet;

                    /**
                     * <p>Subtitle position after removal. <strong>Note</strong>: only applicable to subtitle extraction when return of subtitle position is enabled.</p>
                     */
                    SubtitlePosition m_subtitlePos;
                    bool m_subtitlePosHasBeenSet;

                    /**
                     * <p>Storage location of the output file of the AI dubbing task.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIDUBBINGTASKOUTPUT_H_

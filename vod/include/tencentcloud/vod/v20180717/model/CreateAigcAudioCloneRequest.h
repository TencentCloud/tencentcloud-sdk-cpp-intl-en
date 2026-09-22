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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioCloneInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcAudioClone request structure.
                */
                class CreateAigcAudioCloneRequest : public AbstractModel
                {
                public:
                    CreateAigcAudioCloneRequest();
                    ~CreateAigcAudioCloneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b></p>
                     * @return SubAppId <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b></p>
                     * @param _subAppId <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b></p>
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
                     * 获取<p>Original audio file (ensure it is accessible). The model will use the voice type of the audio passed in this parameter as an example to clone the voice type.  </p><p>Input limitations: Note 1: Supported audio formats: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be at least 10 seconds and no more than 5 minutes; Note 3: The uploaded audio file size must not exceed 20 mb; Note 4: The audio content must not involve copyright, otherwise it will be removed or terminated.</p>
                     * @return AudioFileInfo <p>Original audio file (ensure it is accessible). The model will use the voice type of the audio passed in this parameter as an example to clone the voice type.  </p><p>Input limitations: Note 1: Supported audio formats: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be at least 10 seconds and no more than 5 minutes; Note 3: The uploaded audio file size must not exceed 20 mb; Note 4: The audio content must not involve copyright, otherwise it will be removed or terminated.</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetAudioFileInfo() const;

                    /**
                     * 设置<p>Original audio file (ensure it is accessible). The model will use the voice type of the audio passed in this parameter as an example to clone the voice type.  </p><p>Input limitations: Note 1: Supported audio formats: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be at least 10 seconds and no more than 5 minutes; Note 3: The uploaded audio file size must not exceed 20 mb; Note 4: The audio content must not involve copyright, otherwise it will be removed or terminated.</p>
                     * @param _audioFileInfo <p>Original audio file (ensure it is accessible). The model will use the voice type of the audio passed in this parameter as an example to clone the voice type.  </p><p>Input limitations: Note 1: Supported audio formats: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be at least 10 seconds and no more than 5 minutes; Note 3: The uploaded audio file size must not exceed 20 mb; Note 4: The audio content must not involve copyright, otherwise it will be removed or terminated.</p>
                     * 
                     */
                    void SetAudioFileInfo(const AigcAudioCloneInputFileInfo& _audioFileInfo);

                    /**
                     * 判断参数 AudioFileInfo 是否已赋值
                     * @return AudioFileInfo 是否已赋值
                     * 
                     */
                    bool AudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>Custom voice ID, for example: "vidu01".</p><p>Input limitations:</p><ul><li>Length range of a custom voice_ID: [8,256];</li><li>The first character must be an English letter;</li><li>Numbers, letters, hyphens, and underscores are allowed;</li><li>The last character cannot be - or _</li><li>voice_ID cannot duplicate an existing ID, otherwise an error will occur.</li></ul>
                     * @return VoiceId <p>Custom voice ID, for example: "vidu01".</p><p>Input limitations:</p><ul><li>Length range of a custom voice_ID: [8,256];</li><li>The first character must be an English letter;</li><li>Numbers, letters, hyphens, and underscores are allowed;</li><li>The last character cannot be - or _</li><li>voice_ID cannot duplicate an existing ID, otherwise an error will occur.</li></ul>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Custom voice ID, for example: "vidu01".</p><p>Input limitations:</p><ul><li>Length range of a custom voice_ID: [8,256];</li><li>The first character must be an English letter;</li><li>Numbers, letters, hyphens, and underscores are allowed;</li><li>The last character cannot be - or _</li><li>voice_ID cannot duplicate an existing ID, otherwise an error will occur.</li></ul>
                     * @param _voiceId <p>Custom voice ID, for example: "vidu01".</p><p>Input limitations:</p><ul><li>Length range of a custom voice_ID: [8,256];</li><li>The first character must be an English letter;</li><li>Numbers, letters, hyphens, and underscores are allowed;</li><li>The last character cannot be - or _</li><li>voice_ID cannot duplicate an existing ID, otherwise an error will occur.</li></ul>
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
                     * 获取<p>Replicate audition parameters.</p><p>Parameter format: up to 1000 characters. The model will use the cloned voice type to read aloud the text content and return an audition audio link. Note: Audition will be charged based on the number of characters for text to speech.</p>
                     * @return Text <p>Replicate audition parameters.</p><p>Parameter format: up to 1000 characters. The model will use the cloned voice type to read aloud the text content and return an audition audio link. Note: Audition will be charged based on the number of characters for text to speech.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Replicate audition parameters.</p><p>Parameter format: up to 1000 characters. The model will use the cloned voice type to read aloud the text content and return an audition audio link. Note: Audition will be charged based on the number of characters for text to speech.</p>
                     * @param _text <p>Replicate audition parameters.</p><p>Parameter format: up to 1000 characters. The model will use the cloned voice type to read aloud the text content and return an audition audio link. Note: Audition will be charged based on the number of characters for text to speech.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Sample audio for voice replication. Providing this parameter will help in enhancing the voice similarity and stability of text to speech. If you use this parameter, you need to upload a short sample audio at the same time.</p><p>Input limitations: Note 1: Audio formats supported: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be less than 8 seconds; Note 3: The uploaded audio file size should be no more than 20 mb.</p>
                     * @return PromptAudioFileInfo <p>Sample audio for voice replication. Providing this parameter will help in enhancing the voice similarity and stability of text to speech. If you use this parameter, you need to upload a short sample audio at the same time.</p><p>Input limitations: Note 1: Audio formats supported: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be less than 8 seconds; Note 3: The uploaded audio file size should be no more than 20 mb.</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetPromptAudioFileInfo() const;

                    /**
                     * 设置<p>Sample audio for voice replication. Providing this parameter will help in enhancing the voice similarity and stability of text to speech. If you use this parameter, you need to upload a short sample audio at the same time.</p><p>Input limitations: Note 1: Audio formats supported: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be less than 8 seconds; Note 3: The uploaded audio file size should be no more than 20 mb.</p>
                     * @param _promptAudioFileInfo <p>Sample audio for voice replication. Providing this parameter will help in enhancing the voice similarity and stability of text to speech. If you use this parameter, you need to upload a short sample audio at the same time.</p><p>Input limitations: Note 1: Audio formats supported: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be less than 8 seconds; Note 3: The uploaded audio file size should be no more than 20 mb.</p>
                     * 
                     */
                    void SetPromptAudioFileInfo(const AigcAudioCloneInputFileInfo& _promptAudioFileInfo);

                    /**
                     * 判断参数 PromptAudioFileInfo 是否已赋值
                     * @return PromptAudioFileInfo 是否已赋值
                     * 
                     */
                    bool PromptAudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>The text content corresponding to the sample audio must match the audio content, and punctuation is required at the end of each sentence.</p>
                     * @return PromptText <p>The text content corresponding to the sample audio must match the audio content, and punctuation is required at the end of each sentence.</p>
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置<p>The text content corresponding to the sample audio must match the audio content, and punctuation is required at the end of each sentence.</p>
                     * @param _promptText <p>The text content corresponding to the sample audio must match the audio content, and punctuation is required at the end of each sentence.</p>
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                    /**
                     * 获取<p>Pass-through parameter. Input parameter limit: without any processing, only data transmission. Note: up to 1048576 characters</p>
                     * @return Payload <p>Pass-through parameter. Input parameter limit: without any processing, only data transmission. Note: up to 1048576 characters</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>Pass-through parameter. Input parameter limit: without any processing, only data transmission. Note: up to 1048576 characters</p>
                     * @param _payload <p>Pass-through parameter. Input parameter limit: without any processing, only data transmission. Note: up to 1048576 characters</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>Source context. This is used to pass user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field, used for special purposes.</p>
                     * @return ExtInfo <p>Reserved field, used for special purposes.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used for special purposes.</p>
                     * @param _extInfo <p>Reserved field, used for special purposes.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Original audio file (ensure it is accessible). The model will use the voice type of the audio passed in this parameter as an example to clone the voice type.  </p><p>Input limitations: Note 1: Supported audio formats: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be at least 10 seconds and no more than 5 minutes; Note 3: The uploaded audio file size must not exceed 20 mb; Note 4: The audio content must not involve copyright, otherwise it will be removed or terminated.</p>
                     */
                    AigcAudioCloneInputFileInfo m_audioFileInfo;
                    bool m_audioFileInfoHasBeenSet;

                    /**
                     * <p>Custom voice ID, for example: "vidu01".</p><p>Input limitations:</p><ul><li>Length range of a custom voice_ID: [8,256];</li><li>The first character must be an English letter;</li><li>Numbers, letters, hyphens, and underscores are allowed;</li><li>The last character cannot be - or _</li><li>voice_ID cannot duplicate an existing ID, otherwise an error will occur.</li></ul>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Replicate audition parameters.</p><p>Parameter format: up to 1000 characters. The model will use the cloned voice type to read aloud the text content and return an audition audio link. Note: Audition will be charged based on the number of characters for text to speech.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Sample audio for voice replication. Providing this parameter will help in enhancing the voice similarity and stability of text to speech. If you use this parameter, you need to upload a short sample audio at the same time.</p><p>Input limitations: Note 1: Audio formats supported: mp3, m4a, wav; Note 2: The duration of the uploaded audio file should be less than 8 seconds; Note 3: The uploaded audio file size should be no more than 20 mb.</p>
                     */
                    AigcAudioCloneInputFileInfo m_promptAudioFileInfo;
                    bool m_promptAudioFileInfoHasBeenSet;

                    /**
                     * <p>The text content corresponding to the sample audio must match the audio content, and punctuation is required at the end of each sentence.</p>
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                    /**
                     * <p>Pass-through parameter. Input parameter limit: without any processing, only data transmission. Note: up to 1048576 characters</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The audio and video quality revival complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Reserved field, used for special purposes.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEREQUEST_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcCustomVoice request structure.
                */
                class CreateAigcCustomVoiceRequest : public AbstractModel
                {
                public:
                    CreateAigcCustomVoiceRequest();
                    ~CreateAigcCustomVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
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
                     * 获取<p>Timbre name. The maximum length of the text content is 20 characters.</p>
                     * @return VoiceName <p>Timbre name. The maximum length of the text content is 20 characters.</p>
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置<p>Timbre name. The maximum length of the text content is 20 characters.</p>
                     * @param _voiceName <p>Timbre name. The maximum length of the text content is 20 characters.</p>
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取<p>Access link for the timbre data file. Supports audio/video files in .mp3 / .wav / .mp4 / .mov format. The voice in the audio should be clean and noiseless, with only one voice type. The duration should be no shorter than 5 seconds and no longer than 30 seconds.</p>
                     * @return VoiceUrl <p>Access link for the timbre data file. Supports audio/video files in .mp3 / .wav / .mp4 / .mov format. The voice in the audio should be clean and noiseless, with only one voice type. The duration should be no shorter than 5 seconds and no longer than 30 seconds.</p>
                     * 
                     */
                    std::string GetVoiceUrl() const;

                    /**
                     * 设置<p>Access link for the timbre data file. Supports audio/video files in .mp3 / .wav / .mp4 / .mov format. The voice in the audio should be clean and noiseless, with only one voice type. The duration should be no shorter than 5 seconds and no longer than 30 seconds.</p>
                     * @param _voiceUrl <p>Access link for the timbre data file. Supports audio/video files in .mp3 / .wav / .mp4 / .mov format. The voice in the audio should be clean and noiseless, with only one voice type. The duration should be no shorter than 5 seconds and no longer than 30 seconds.</p>
                     * 
                     */
                    void SetVoiceUrl(const std::string& _voiceUrl);

                    /**
                     * 判断参数 VoiceUrl 是否已赋值
                     * @return VoiceUrl 是否已赋值
                     * 
                     */
                    bool VoiceUrlHasBeenSet() const;

                    /**
                     * 获取<p>History works ID. Audio material can be provided by referring to history works.</p>
                     * @return VideoId <p>History works ID. Audio material can be provided by referring to history works.</p>
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置<p>History works ID. Audio material can be provided by referring to history works.</p>
                     * @param _videoId <p>History works ID. Audio material can be provided by referring to history works.</p>
                     * 
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                    /**
                     * 获取<p>If the overseas custom timbre library is enabled, you can input <code>True</code> to use it.</p><p>Enumeration value:</p><ul><li>True: Use the overseas custom timbre library.</li><li>False: Non-use of the overseas custom timbre library.</li></ul>
                     * @return DisableModeration <p>If the overseas custom timbre library is enabled, you can input <code>True</code> to use it.</p><p>Enumeration value:</p><ul><li>True: Use the overseas custom timbre library.</li><li>False: Non-use of the overseas custom timbre library.</li></ul>
                     * 
                     */
                    std::string GetDisableModeration() const;

                    /**
                     * 设置<p>If the overseas custom timbre library is enabled, you can input <code>True</code> to use it.</p><p>Enumeration value:</p><ul><li>True: Use the overseas custom timbre library.</li><li>False: Non-use of the overseas custom timbre library.</li></ul>
                     * @param _disableModeration <p>If the overseas custom timbre library is enabled, you can input <code>True</code> to use it.</p><p>Enumeration value:</p><ul><li>True: Use the overseas custom timbre library.</li><li>False: Non-use of the overseas custom timbre library.</li></ul>
                     * 
                     */
                    void SetDisableModeration(const std::string& _disableModeration);

                    /**
                     * 判断参数 DisableModeration 是否已赋值
                     * @return DisableModeration 是否已赋值
                     * 
                     */
                    bool DisableModerationHasBeenSet() const;

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
                     * 获取<p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications, whether it is the default application or a newly created application.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Timbre name. The maximum length of the text content is 20 characters.</p>
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * <p>Access link for the timbre data file. Supports audio/video files in .mp3 / .wav / .mp4 / .mov format. The voice in the audio should be clean and noiseless, with only one voice type. The duration should be no shorter than 5 seconds and no longer than 30 seconds.</p>
                     */
                    std::string m_voiceUrl;
                    bool m_voiceUrlHasBeenSet;

                    /**
                     * <p>History works ID. Audio material can be provided by referring to history works.</p>
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                    /**
                     * <p>If the overseas custom timbre library is enabled, you can input <code>True</code> to use it.</p><p>Enumeration value:</p><ul><li>True: Use the overseas custom timbre library.</li><li>False: Non-use of the overseas custom timbre library.</li></ul>
                     */
                    std::string m_disableModeration;
                    bool m_disableModerationHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. The task complete callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMVOICEREQUEST_H_

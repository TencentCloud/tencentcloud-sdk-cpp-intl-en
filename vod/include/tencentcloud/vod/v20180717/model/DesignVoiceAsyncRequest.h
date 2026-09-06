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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VoiceSettings.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DesignVoiceAsync request structure.
                */
                class DesignVoiceAsyncRequest : public AbstractModel
                {
                public:
                    DesignVoiceAsyncRequest();
                    ~DesignVoiceAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Voice description.</p>
                     * @return Prompt <p>Voice description.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Voice description.</p>
                     * @param _prompt <p>Voice description.</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>VOD application ID. For customers who activated on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</p>
                     * @return SubAppId <p>VOD application ID. For customers who activated on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</p>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<p>VOD application ID. For customers who activated on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</p>
                     * @param _subAppId <p>VOD application ID. For customers who activated on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</p>
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Voice settings</p>
                     * @return VoiceSettings <p>Voice settings</p>
                     * 
                     */
                    VoiceSettings GetVoiceSettings() const;

                    /**
                     * 设置<p>Voice settings</p>
                     * @param _voiceSettings <p>Voice settings</p>
                     * 
                     */
                    void SetVoiceSettings(const VoiceSettings& _voiceSettings);

                    /**
                     * 判断参数 VoiceSettings 是否已赋值
                     * @return VoiceSettings 是否已赋值
                     * 
                     */
                    bool VoiceSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Audition synthesis text. Maximum 500 characters.</p>
                     * @return PreviewText <p>Audition synthesis text. Maximum 500 characters.</p>
                     * 
                     */
                    std::string GetPreviewText() const;

                    /**
                     * 设置<p>Audition synthesis text. Maximum 500 characters.</p>
                     * @param _previewText <p>Audition synthesis text. Maximum 500 characters.</p>
                     * 
                     */
                    void SetPreviewText(const std::string& _previewText);

                    /**
                     * 判断参数 PreviewText 是否已赋值
                     * @return PreviewText 是否已赋值
                     * 
                     */
                    bool PreviewTextHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                    /**
                     * 获取<p>Identifies the source context. This is used to pass through user request information. The callback and task flow status change callback return the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Identifies the source context. This is used to pass through user request information. The callback and task flow status change callback return the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Identifies the source context. This is used to pass through user request information. The callback and task flow status change callback return the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Identifies the source context. This is used to pass through user request information. The callback and task flow status change callback return the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Identification Code for Task Deduplication. If a request with the same identification code has been made within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Not specifying it or specifying an empty string means no deduplication.</p>
                     * @return SessionId <p>Identification Code for Task Deduplication. If a request with the same identification code has been made within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Not specifying it or specifying an empty string means no deduplication.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identification Code for Task Deduplication. If a request with the same identification code has been made within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Not specifying it or specifying an empty string means no deduplication.</p>
                     * @param _sessionId <p>Identification Code for Task Deduplication. If a request with the same identification code has been made within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Not specifying it or specifying an empty string means no deduplication.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>Voice description.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>VOD application ID. For customers who activated on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Voice settings</p>
                     */
                    VoiceSettings m_voiceSettings;
                    bool m_voiceSettingsHasBeenSet;

                    /**
                     * <p>Audition synthesis text. Maximum 500 characters.</p>
                     */
                    std::string m_previewText;
                    bool m_previewTextHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                    /**
                     * <p>Identifies the source context. This is used to pass through user request information. The callback and task flow status change callback return the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Identification Code for Task Deduplication. If a request with the same identification code has been made within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Not specifying it or specifying an empty string means no deduplication.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_

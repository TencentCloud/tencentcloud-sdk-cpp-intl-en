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
                     * 获取
                     * @return Prompt 
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置
                     * @param _prompt 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return VoiceSettings 
                     * 
                     */
                    VoiceSettings GetVoiceSettings() const;

                    /**
                     * 设置
                     * @param _voiceSettings 
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
                     * 获取
                     * @return PreviewText 
                     * 
                     */
                    std::string GetPreviewText() const;

                    /**
                     * 设置
                     * @param _previewText 
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
                     * 获取
                     * @return ExtParam 
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置
                     * @param _extParam 
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
                     * 获取
                     * @return SessionContext 
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置
                     * @param _sessionContext 
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
                     * 获取
                     * @return SessionId 
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置
                     * @param _sessionId 
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
                     * 
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    VoiceSettings m_voiceSettings;
                    bool m_voiceSettingsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_previewText;
                    bool m_previewTextHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCREQUEST_H_

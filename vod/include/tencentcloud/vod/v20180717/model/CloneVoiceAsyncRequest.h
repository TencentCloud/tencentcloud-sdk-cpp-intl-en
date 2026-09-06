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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCREQUEST_H_

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
                * CloneVoiceAsync request structure.
                */
                class CloneVoiceAsyncRequest : public AbstractModel
                {
                public:
                    CloneVoiceAsyncRequest();
                    ~CloneVoiceAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be filled in with the app ID to access resources in VOD applications, whether in the default or a newly created application.</p>
                     * @return SubAppId <p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be filled in with the app ID to access resources in VOD applications, whether in the default or a newly created application.</p>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be filled in with the app ID to access resources in VOD applications, whether in the default or a newly created application.</p>
                     * @param _subAppId <p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be filled in with the app ID to access resources in VOD applications, whether in the default or a newly created application.</p>
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
                     * 获取<p>Base64-encoded audio for cloning.</p>
                     * @return AudioData <p>Base64-encoded audio for cloning.</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>Base64-encoded audio for cloning.</p>
                     * @param _audioData <p>Base64-encoded audio for cloning.</p>
                     * 
                     */
                    void SetAudioData(const std::string& _audioData);

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @return AudioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @param _audioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>Clone file FileID. Valid when AudioData and AudioUrl are empty</p>
                     * @return AudioFileId <p>Clone file FileID. Valid when AudioData and AudioUrl are empty</p>
                     * 
                     */
                    std::string GetAudioFileId() const;

                    /**
                     * 设置<p>Clone file FileID. Valid when AudioData and AudioUrl are empty</p>
                     * @param _audioFileId <p>Clone file FileID. Valid when AudioData and AudioUrl are empty</p>
                     * 
                     */
                    void SetAudioFileId(const std::string& _audioFileId);

                    /**
                     * 判断参数 AudioFileId 是否已赋值
                     * @return AudioFileId 是否已赋值
                     * 
                     */
                    bool AudioFileIdHasBeenSet() const;

                    /**
                     * 获取<p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * @return LanguageBoost <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * 
                     */
                    std::string GetLanguageBoost() const;

                    /**
                     * 设置<p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * @param _languageBoost <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * 
                     */
                    void SetLanguageBoost(const std::string& _languageBoost);

                    /**
                     * 判断参数 LanguageBoost 是否已赋值
                     * @return LanguageBoost 是否已赋值
                     * 
                     */
                    bool LanguageBoostHasBeenSet() const;

                    /**
                     * 获取<p>Timbre clone expansion parameters. Supported fields of <code>ExtParam</code>: </p><ul><li><code>text</code> (string): Text for audition synthesis, up to 1000 characters; do not return the audition audio when empty or not passed.</li></ul>
                     * @return ExtParam <p>Timbre clone expansion parameters. Supported fields of <code>ExtParam</code>: </p><ul><li><code>text</code> (string): Text for audition synthesis, up to 1000 characters; do not return the audition audio when empty or not passed.</li></ul>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Timbre clone expansion parameters. Supported fields of <code>ExtParam</code>: </p><ul><li><code>text</code> (string): Text for audition synthesis, up to 1000 characters; do not return the audition audio when empty or not passed.</li></ul>
                     * @param _extParam <p>Timbre clone expansion parameters. Supported fields of <code>ExtParam</code>: </p><ul><li><code>text</code> (string): Text for audition synthesis, up to 1000 characters; do not return the audition audio when empty or not passed.</li></ul>
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
                     * 获取<p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * @return SessionId <p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * @param _sessionId <p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
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
                     * <p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be filled in with the app ID to access resources in VOD applications, whether in the default or a newly created application.</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Base64-encoded audio for cloning.</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Clone file FileID. Valid when AudioData and AudioUrl are empty</p>
                     */
                    std::string m_audioFileId;
                    bool m_audioFileIdHasBeenSet;

                    /**
                     * <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     */
                    std::string m_languageBoost;
                    bool m_languageBoostHasBeenSet;

                    /**
                     * <p>Timbre clone expansion parameters. Supported fields of <code>ExtParam</code>: </p><ul><li><code>text</code> (string): Text for audition synthesis, up to 1000 characters; do not return the audition audio when empty or not passed.</li></ul>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                    /**
                     * <p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLONEVOICEASYNCREQUEST_H_

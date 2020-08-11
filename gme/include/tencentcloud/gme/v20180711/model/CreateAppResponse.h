/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealtimeSpeechConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageConf.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterConf.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateApp output parameters
                */
                class CreateAppResponse : public AbstractModel
                {
                public:
                    CreateAppResponse();
                    ~CreateAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Application ID, which is automatically generated by the backend.
                     * @return BizId Application ID, which is automatically generated by the backend.
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Application name, which is passed through from the `AppName` input parameter
                     * @return AppName Application name, which is passed through from the `AppName` input parameter
                     */
                    std::string GetAppName() const;

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Project ID, which is passed through from the entered `ProjectId`
                     * @return ProjectId Project ID, which is passed through from the entered `ProjectId`
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Application key, which is used when the GME SDK is initialized
                     * @return SecretKey Application key, which is used when the GME SDK is initialized
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Service creation timestamp
                     * @return CreateTime Service creation timestamp
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Configuration information of voice chat
                     * @return RealtimeSpeechConf Configuration information of voice chat
                     */
                    RealtimeSpeechConf GetRealtimeSpeechConf() const;

                    /**
                     * 判断参数 RealtimeSpeechConf 是否已赋值
                     * @return RealtimeSpeechConf 是否已赋值
                     */
                    bool RealtimeSpeechConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of voice messaging and speech-to-text
                     * @return VoiceMessageConf Configuration information of voice messaging and speech-to-text
                     */
                    VoiceMessageConf GetVoiceMessageConf() const;

                    /**
                     * 判断参数 VoiceMessageConf 是否已赋值
                     * @return VoiceMessageConf 是否已赋值
                     */
                    bool VoiceMessageConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of phrase analysis
                     * @return VoiceFilterConf Configuration information of phrase analysis
                     */
                    VoiceFilterConf GetVoiceFilterConf() const;

                    /**
                     * 判断参数 VoiceFilterConf 是否已赋值
                     * @return VoiceFilterConf 是否已赋值
                     */
                    bool VoiceFilterConfHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is automatically generated by the backend.
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Application name, which is passed through from the `AppName` input parameter
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Project ID, which is passed through from the entered `ProjectId`
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Application key, which is used when the GME SDK is initialized
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Service creation timestamp
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Configuration information of voice chat
                     */
                    RealtimeSpeechConf m_realtimeSpeechConf;
                    bool m_realtimeSpeechConfHasBeenSet;

                    /**
                     * Configuration information of voice messaging and speech-to-text
                     */
                    VoiceMessageConf m_voiceMessageConf;
                    bool m_voiceMessageConfHasBeenSet;

                    /**
                     * Configuration information of phrase analysis
                     */
                    VoiceFilterConf m_voiceFilterConf;
                    bool m_voiceFilterConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESPONSE_H_
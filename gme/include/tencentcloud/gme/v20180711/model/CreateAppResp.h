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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESP_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Output parameters of `CreateApp`
                */
                class CreateAppResp : public AbstractModel
                {
                public:
                    CreateAppResp();
                    ~CreateAppResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID, automatically generated by the backend.
                     * @return BizId Application ID, automatically generated by the backend.
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID, automatically generated by the backend.
                     * @param BizId Application ID, automatically generated by the backend.
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Application name, the input of `AppName`.
                     * @return AppName Application name, the input of `AppName`.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Application name, the input of `AppName`.
                     * @param AppName Application name, the input of `AppName`.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Project ID, the input of `ProjectId`.
                     * @return ProjectId Project ID, the input of `ProjectId`.
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID, the input of `ProjectId`.
                     * @param ProjectId Project ID, the input of `ProjectId`.
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Application key, used to initialize GME SDK.
                     * @return SecretKey Application key, used to initialize GME SDK.
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Application key, used to initialize GME SDK.
                     * @param SecretKey Application key, used to initialize GME SDK.
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取Timestamp, indicating when the service is created.
                     * @return CreateTime Timestamp, indicating when the service is created.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Timestamp, indicating when the service is created.
                     * @param CreateTime Timestamp, indicating when the service is created.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Configuration information of Voice Chat
                     * @return RealtimeSpeechConf Configuration information of Voice Chat
                     */
                    RealtimeSpeechConf GetRealtimeSpeechConf() const;

                    /**
                     * 设置Configuration information of Voice Chat
                     * @param RealtimeSpeechConf Configuration information of Voice Chat
                     */
                    void SetRealtimeSpeechConf(const RealtimeSpeechConf& _realtimeSpeechConf);

                    /**
                     * 判断参数 RealtimeSpeechConf 是否已赋值
                     * @return RealtimeSpeechConf 是否已赋值
                     */
                    bool RealtimeSpeechConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of Voice Message Service
                     * @return VoiceMessageConf Configuration information of Voice Message Service
                     */
                    VoiceMessageConf GetVoiceMessageConf() const;

                    /**
                     * 设置Configuration information of Voice Message Service
                     * @param VoiceMessageConf Configuration information of Voice Message Service
                     */
                    void SetVoiceMessageConf(const VoiceMessageConf& _voiceMessageConf);

                    /**
                     * 判断参数 VoiceMessageConf 是否已赋值
                     * @return VoiceMessageConf 是否已赋值
                     */
                    bool VoiceMessageConfHasBeenSet() const;

                    /**
                     * 获取Configuration information of Voice Analysis Service
                     * @return VoiceFilterConf Configuration information of Voice Analysis Service
                     */
                    VoiceFilterConf GetVoiceFilterConf() const;

                    /**
                     * 设置Configuration information of Voice Analysis Service
                     * @param VoiceFilterConf Configuration information of Voice Analysis Service
                     */
                    void SetVoiceFilterConf(const VoiceFilterConf& _voiceFilterConf);

                    /**
                     * 判断参数 VoiceFilterConf 是否已赋值
                     * @return VoiceFilterConf 是否已赋值
                     */
                    bool VoiceFilterConfHasBeenSet() const;

                private:

                    /**
                     * Application ID, automatically generated by the backend.
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Application name, the input of `AppName`.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Project ID, the input of `ProjectId`.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Application key, used to initialize GME SDK.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Timestamp, indicating when the service is created.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Configuration information of Voice Chat
                     */
                    RealtimeSpeechConf m_realtimeSpeechConf;
                    bool m_realtimeSpeechConfHasBeenSet;

                    /**
                     * Configuration information of Voice Message Service
                     */
                    VoiceMessageConf m_voiceMessageConf;
                    bool m_voiceMessageConfHasBeenSet;

                    /**
                     * Configuration information of Voice Analysis Service
                     */
                    VoiceFilterConf m_voiceFilterConf;
                    bool m_voiceFilterConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATEAPPRESP_H_

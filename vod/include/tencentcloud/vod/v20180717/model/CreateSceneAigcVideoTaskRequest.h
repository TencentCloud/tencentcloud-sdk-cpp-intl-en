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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoSceneInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoOutputConfig.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTaskInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateSceneAigcVideoTask request structure.
                */
                class CreateSceneAigcVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateSceneAigcVideoTaskRequest();
                    ~CreateSceneAigcVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**VOD application ID.** Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).
                     * @return SubAppId **VOD application ID.** Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置**VOD application ID.** Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).
                     * @param _subAppId **VOD application ID.** Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).
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
                     * 获取Scenario-based video parameter configuration.
                     * @return SceneInfo Scenario-based video parameter configuration.
                     * 
                     */
                    AigcVideoSceneInfo GetSceneInfo() const;

                    /**
                     * 设置Scenario-based video parameter configuration.
                     * @param _sceneInfo Scenario-based video parameter configuration.
                     * 
                     */
                    void SetSceneInfo(const AigcVideoSceneInfo& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                    /**
                     * 获取Scenario-based output media file configuration for video tasks.
                     * @return OutputConfig Scenario-based output media file configuration for video tasks.
                     * 
                     */
                    SceneAigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Scenario-based output media file configuration for video tasks.
                     * @param _outputConfig Scenario-based output media file configuration for video tasks.
                     * 
                     */
                    void SetOutputConfig(const SceneAigcVideoOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取Input image list. Supported image formats: jpg, jpeg, png, webp.


                     * @return FileInfos Input image list. Supported image formats: jpg, jpeg, png, webp.


                     * 
                     */
                    std::vector<SceneAigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input image list. Supported image formats: jpg, jpeg, png, webp.


                     * @param _fileInfos Input image list. Supported image formats: jpg, jpeg, png, webp.


                     * 
                     */
                    void SetFileInfos(const std::vector<SceneAigcVideoTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     * @return SessionId An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     * @param _sessionId An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
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
                     * 获取Source context, used for passing through user request information. The audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * @return SessionContext Source context, used for passing through user request information. The audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used for passing through user request information. The audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * @param _sessionContext Source context, used for passing through user request information. The audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
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
                     * 获取Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     * @return TasksPriority Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     * @param _tasksPriority Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
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
                     * 获取Reserved field, used for special purpose.
                     * @return ExtInfo Reserved field, used for special purpose.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used for special purpose.
                     * @param _extInfo Reserved field, used for special purpose.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取Customize prompt
                     * @return Prompt Customize prompt
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Customize prompt
                     * @param _prompt Customize prompt
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * **VOD application ID.** Customers who activate on-demand services from December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Scenario-based video parameter configuration.
                     */
                    AigcVideoSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * Scenario-based output media file configuration for video tasks.
                     */
                    SceneAigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * Input image list. Supported image formats: jpg, jpeg, png, webp.


                     */
                    std::vector<SceneAigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used for passing through user request information. The audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved field, used for special purpose.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * Customize prompt
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCVIDEOTASKREQUEST_H_

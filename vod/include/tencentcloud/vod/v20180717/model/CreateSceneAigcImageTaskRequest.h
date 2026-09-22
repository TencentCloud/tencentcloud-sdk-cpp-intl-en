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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCIMAGETASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcImageSceneInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateSceneAigcImageTask request structure.
                */
                class CreateSceneAigcImageTaskRequest : public AbstractModel
                {
                public:
                    CreateSceneAigcImageTaskRequest();
                    ~CreateSceneAigcImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**VOD application ID. For customers who activate on-demand services after December 25, 2023, when accessing resources in on-demand applications (whether the default application or a newly created application), this field must be filled in with the app ID.**
                     * @return SubAppId **VOD application ID. For customers who activate on-demand services after December 25, 2023, when accessing resources in on-demand applications (whether the default application or a newly created application), this field must be filled in with the app ID.**
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置**VOD application ID. For customers who activate on-demand services after December 25, 2023, when accessing resources in on-demand applications (whether the default application or a newly created application), this field must be filled in with the app ID.**
                     * @param _subAppId **VOD application ID. For customers who activate on-demand services after December 25, 2023, when accessing resources in on-demand applications (whether the default application or a newly created application), this field must be filled in with the app ID.**
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
                     * 获取Scenario-based image generation parameter configuration.
                     * @return SceneInfo Scenario-based image generation parameter configuration.
                     * 
                     */
                    AigcImageSceneInfo GetSceneInfo() const;

                    /**
                     * 设置Scenario-based image generation parameter configuration.
                     * @param _sceneInfo Scenario-based image generation parameter configuration.
                     * 
                     */
                    void SetSceneInfo(const AigcImageSceneInfo& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                    /**
                     * 获取Input image list. Supported image formats: jpg, jpeg, png, webp. Different scenarios require different input data:

- AI outfit changing scenario: Input Only 1 **model** image.
- AI product image generation scenario: manually input 1–10 images of the same product from different angles.
                     * @return FileInfos Input image list. Supported image formats: jpg, jpeg, png, webp. Different scenarios require different input data:

- AI outfit changing scenario: Input Only 1 **model** image.
- AI product image generation scenario: manually input 1–10 images of the same product from different angles.
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input image list. Supported image formats: jpg, jpeg, png, webp. Different scenarios require different input data:

- AI outfit changing scenario: Input Only 1 **model** image.
- AI product image generation scenario: manually input 1–10 images of the same product from different angles.
                     * @param _fileInfos Input image list. Supported image formats: jpg, jpeg, png, webp. Different scenarios require different input data:

- AI outfit changing scenario: Input Only 1 **model** image.
- AI product image generation scenario: manually input 1–10 images of the same product from different angles.
                     * 
                     */
                    void SetFileInfos(const std::vector<SceneAigcImageTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取Configuration of the output media file for a scenario-based image generation task.
                     * @return OutputConfig Configuration of the output media file for a scenario-based image generation task.
                     * 
                     */
                    SceneAigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Configuration of the output media file for a scenario-based image generation task.
                     * @param _outputConfig Configuration of the output media file for a scenario-based image generation task.
                     * 
                     */
                    void SetOutputConfig(const SceneAigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * @return SessionId Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * @param _sessionId Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
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
                     * 获取Source context. This is used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. The maximum length is 1000 characters.
                     * @return SessionContext Source context. This is used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. The maximum length is 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context. This is used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. The maximum length is 1000 characters.
                     * @param _sessionContext Source context. This is used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. The maximum length is 1000 characters.
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
                     * 获取Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @return TasksPriority Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @param _tasksPriority Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
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
                     * 获取Reserved field, used for special purposes.
                     * @return ExtInfo Reserved field, used for special purposes.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used for special purposes.
                     * @param _extInfo Reserved field, used for special purposes.
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
                     * **VOD application ID. For customers who activate on-demand services after December 25, 2023, when accessing resources in on-demand applications (whether the default application or a newly created application), this field must be filled in with the app ID.**
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Scenario-based image generation parameter configuration.
                     */
                    AigcImageSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * Input image list. Supported image formats: jpg, jpeg, png, webp. Different scenarios require different input data:

- AI outfit changing scenario: Input Only 1 **model** image.
- AI product image generation scenario: manually input 1–10 images of the same product from different angles.
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Configuration of the output media file for a scenario-based image generation task.
                     */
                    SceneAigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context. This is used to pass through user request information. The value of this field will be returned in the audio and video quality revival completion callback. The maximum length is 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved field, used for special purposes.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCIMAGETASKREQUEST_H_

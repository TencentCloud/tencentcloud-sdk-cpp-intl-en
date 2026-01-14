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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Scenario-Based image generation parameter configuration.
                     * @return SceneInfo Scenario-Based image generation parameter configuration.
                     * 
                     */
                    AigcImageSceneInfo GetSceneInfo() const;

                    /**
                     * 设置Scenario-Based image generation parameter configuration.
                     * @param _sceneInfo Scenario-Based image generation parameter configuration.
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
                     * 获取Input image list. supported image formats: jpg, jpeg, png, webp. different scenarios require different input data.

- AI clothing change scenario: input only 1 model image.
- AI product image scenario: manually input 1-10 images of different angles per product.
                     * @return FileInfos Input image list. supported image formats: jpg, jpeg, png, webp. different scenarios require different input data.

- AI clothing change scenario: input only 1 model image.
- AI product image scenario: manually input 1-10 images of different angles per product.
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input image list. supported image formats: jpg, jpeg, png, webp. different scenarios require different input data.

- AI clothing change scenario: input only 1 model image.
- AI product image scenario: manually input 1-10 images of different angles per product.
                     * @param _fileInfos Input image list. supported image formats: jpg, jpeg, png, webp. different scenarios require different input data.

- AI clothing change scenario: input only 1 model image.
- AI product image scenario: manually input 1-10 images of different angles per product.
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
                     * 获取Specifies the output media file configuration for the scenario-based image task.
                     * @return OutputConfig Specifies the output media file configuration for the scenario-based image task.
                     * 
                     */
                    SceneAigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Specifies the output media file configuration for the scenario-based image task.
                     * @param _outputConfig Specifies the output media file configuration for the scenario-based image task.
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
                     * 获取An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * @return SessionId An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * @param _sessionId An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
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
                     * 获取Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * @return SessionContext Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     * @param _sessionContext Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
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
                     * 获取Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     * @return TasksPriority Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     * @param _tasksPriority Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
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

                private:

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Scenario-Based image generation parameter configuration.
                     */
                    AigcImageSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * Input image list. supported image formats: jpg, jpeg, png, webp. different scenarios require different input data.

- AI clothing change scenario: input only 1 model image.
- AI product image scenario: manually input 1-10 images of different angles per product.
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Specifies the output media file configuration for the scenario-based image task.
                     */
                    SceneAigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field, up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Task priority. the higher the value, the higher the priority. the value range is from -10 to 10. if left blank, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved field, used for special purpose.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESCENEAIGCIMAGETASKREQUEST_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoSceneInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcVideoOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Scenario-based AIGC video generation task info
                */
                class SceneAigcVideoTaskInput : public AbstractModel
                {
                public:
                    SceneAigcVideoTaskInput();
                    ~SceneAigcVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scenario-based image generation parameter configuration.
                     * @return SceneInfo Scenario-based image generation parameter configuration.
                     * 
                     */
                    AigcVideoSceneInfo GetSceneInfo() const;

                    /**
                     * 设置Scenario-based image generation parameter configuration.
                     * @param _sceneInfo Scenario-based image generation parameter configuration.
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
                     * 获取Input image list.
                     * @return FileInfos Input image list.
                     * 
                     */
                    std::vector<SceneAigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input image list.
                     * @param _fileInfos Input image list.
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
                     * 获取Output media file configuration for scenario-based image generation tasks.
                     * @return OutputConfig Output media file configuration for scenario-based image generation tasks.
                     * 
                     */
                    SceneAigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Output media file configuration for scenario-based image generation tasks.
                     * @param _outputConfig Output media file configuration for scenario-based image generation tasks.
                     * 
                     */
                    void SetOutputConfig(const SceneAigcVideoOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * Scenario-based image generation parameter configuration.
                     */
                    AigcVideoSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * Input image list.
                     */
                    std::vector<SceneAigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Output media file configuration for scenario-based image generation tasks.
                     */
                    SceneAigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCVIDEOTASKINPUT_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Scene AIGC image task input.
                */
                class SceneAigcImageTaskInput : public AbstractModel
                {
                public:
                    SceneAigcImageTaskInput();
                    ~SceneAigcImageTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scenario-based Image Generation Parameter Configuration.
                     * @return SceneInfo Scenario-based Image Generation Parameter Configuration.
                     * 
                     */
                    AigcImageSceneInfo GetSceneInfo() const;

                    /**
                     * 设置Scenario-based Image Generation Parameter Configuration.
                     * @param _sceneInfo Scenario-based Image Generation Parameter Configuration.
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
                     * 获取File information of the input image.
                     * @return FileInfos File information of the input image.
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置File information of the input image.
                     * @param _fileInfos File information of the input image.
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
                     * 获取Output media file configuration for the task.
                     * @return OutputConfig Output media file configuration for the task.
                     * 
                     */
                    SceneAigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Output media file configuration for the task.
                     * @param _outputConfig Output media file configuration for the task.
                     * 
                     */
                    void SetOutputConfig(const SceneAigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * Scenario-based Image Generation Parameter Configuration.
                     */
                    AigcImageSceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                    /**
                     * File information of the input image.
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * Output media file configuration for the task.
                     */
                    SceneAigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKINPUT_H_

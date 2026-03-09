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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_SCENE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_SCENE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Scenario details.
                */
                class Scene : public AbstractModel
                {
                public:
                    Scene();
                    ~Scene() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scene ID.
                     * @return SceneId Scene ID.
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置Scene ID.
                     * @param _sceneId Scene ID.
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取Scenario name.
                     * @return SceneName Scenario name.
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置Scenario name.
                     * @param _sceneName Scenario name.
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取Scene creator.

- TAT: public scenario.
                     * @return CreatedBy Scene creator.

- TAT: public scenario.
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置Scene creator.

- TAT: public scenario.
                     * @param _createdBy Scene creator.

- TAT: public scenario.
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @return CreatedTime Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @param _createdTime Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @return UpdatedTime Update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * @param _updatedTime Update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * Scene ID.
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * Scenario name.
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * Scene creator.

- TAT: public scenario.
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * Creation time. the format is YYYY-MM-DDThh:MM:ssZ.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Update time. the format is YYYY-MM-DDThh:MM:ssZ.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_SCENE_H_

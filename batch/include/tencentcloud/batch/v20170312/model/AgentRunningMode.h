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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_AGENTRUNNINGMODE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_AGENTRUNNINGMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Agent running mode
                */
                class AgentRunningMode : public AbstractModel
                {
                public:
                    AgentRunningMode();
                    ~AgentRunningMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scenario type. Windows is supported
                     * @return Scene Scenario type. Windows is supported
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Scenario type. Windows is supported
                     * @param _scene Scenario type. Windows is supported
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取The user that runs the Agent
                     * @return User The user that runs the Agent
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置The user that runs the Agent
                     * @param _user The user that runs the Agent
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取The session that runs the Agent
                     * @return Session The session that runs the Agent
                     * 
                     */
                    std::string GetSession() const;

                    /**
                     * 设置The session that runs the Agent
                     * @param _session The session that runs the Agent
                     * 
                     */
                    void SetSession(const std::string& _session);

                    /**
                     * 判断参数 Session 是否已赋值
                     * @return Session 是否已赋值
                     * 
                     */
                    bool SessionHasBeenSet() const;

                private:

                    /**
                     * Scenario type. Windows is supported
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * The user that runs the Agent
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * The session that runs the Agent
                     */
                    std::string m_session;
                    bool m_sessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_AGENTRUNNINGMODE_H_

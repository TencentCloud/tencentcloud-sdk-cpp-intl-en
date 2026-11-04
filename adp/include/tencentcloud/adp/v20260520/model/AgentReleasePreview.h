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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTRELEASEPREVIEW_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTRELEASEPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentRelease.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent release preview information
                */
                class AgentReleasePreview : public AbstractModel
                {
                public:
                    AgentReleasePreview();
                    ~AgentReleasePreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AgentID</p>
                     * @return AgentId <p>AgentID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>AgentID</p>
                     * @param _agentId <p>AgentID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent Name</p>
                     * @return Name <p>Agent Name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent Name</p>
                     * @param _name <p>Agent Name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Update time, unix timestamp in seconds (s)</p>
                     * @return UpdateTime <p>Update time, unix timestamp in seconds (s)</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time, unix timestamp in seconds (s)</p>
                     * @param _updateTime <p>Update time, unix timestamp in seconds (s)</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Status, status value: 1: Add new, 2: Modify, 3: Delete</p>
                     * @return Action <p>Status, status value: 1: Add new, 2: Modify, 3: Delete</p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>Status, status value: 1: Add new, 2: Modify, 3: Delete</p>
                     * @param _action <p>Status, status value: 1: Add new, 2: Modify, 3: Delete</p>
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Action description.</p>
                     * @return ActionDescription <p>Action description.</p>
                     * 
                     */
                    std::string GetActionDescription() const;

                    /**
                     * 设置<p>Action description.</p>
                     * @param _actionDescription <p>Action description.</p>
                     * 
                     */
                    void SetActionDescription(const std::string& _actionDescription);

                    /**
                     * 判断参数 ActionDescription 是否已赋值
                     * @return ActionDescription 是否已赋值
                     * 
                     */
                    bool ActionDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Publish a message</p>
                     * @return Message <p>Publish a message</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Publish a message</p>
                     * @param _message <p>Publish a message</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>Release detail</p>
                     * @return ReleaseList <p>Release detail</p>
                     * 
                     */
                    std::vector<AgentRelease> GetReleaseList() const;

                    /**
                     * 设置<p>Release detail</p>
                     * @param _releaseList <p>Release detail</p>
                     * 
                     */
                    void SetReleaseList(const std::vector<AgentRelease>& _releaseList);

                    /**
                     * 判断参数 ReleaseList 是否已赋值
                     * @return ReleaseList 是否已赋值
                     * 
                     */
                    bool ReleaseListHasBeenSet() const;

                private:

                    /**
                     * <p>AgentID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent Name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Update time, unix timestamp in seconds (s)</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Status, status value: 1: Add new, 2: Modify, 3: Delete</p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Action description.</p>
                     */
                    std::string m_actionDescription;
                    bool m_actionDescriptionHasBeenSet;

                    /**
                     * <p>Publish a message</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Release detail</p>
                     */
                    std::vector<AgentRelease> m_releaseList;
                    bool m_releaseListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTRELEASEPREVIEW_H_

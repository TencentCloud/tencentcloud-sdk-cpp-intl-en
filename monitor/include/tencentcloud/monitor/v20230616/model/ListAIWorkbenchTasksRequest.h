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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHTASKSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ListAIWorkbenchTasks request structure.
                */
                class ListAIWorkbenchTasksRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchTasksRequest();
                    ~ListAIWorkbenchTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of items per page</p>
                     * @return PerPage <p>Number of items per page</p>
                     * 
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置<p>Number of items per page</p>
                     * @param _perPage <p>Number of items per page</p>
                     * 
                     */
                    void SetPerPage(const int64_t& _perPage);

                    /**
                     * 判断参数 PerPage 是否已赋值
                     * @return PerPage 是否已赋值
                     * 
                     */
                    bool PerPageHasBeenSet() const;

                    /**
                     * 获取<p>Page number.</p>
                     * @return PageNo <p>Page number.</p>
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置<p>Page number.</p>
                     * @param _pageNo <p>Page number.</p>
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取<p>Filter by Agent</p>
                     * @return AgentId <p>Filter by Agent</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Filter by Agent</p>
                     * @param _agentId <p>Filter by Agent</p>
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
                     * 获取<p>Filter by trigger type</p>
                     * @return TriggerType <p>Filter by trigger type</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Filter by trigger type</p>
                     * @param _triggerType <p>Filter by trigger type</p>
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Search keyword</p>
                     * @return Keyword <p>Search keyword</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>Search keyword</p>
                     * @param _keyword <p>Search keyword</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>Task ID list filter</p>
                     * @return TaskIds <p>Task ID list filter</p>
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置<p>Task ID list filter</p>
                     * @param _taskIds <p>Task ID list filter</p>
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable filter criteria</p>
                     * @return Enabled <p>Whether to enable filter criteria</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable filter criteria</p>
                     * @param _enabled <p>Whether to enable filter criteria</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>Number of items per page</p>
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                    /**
                     * <p>Page number.</p>
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * <p>Filter by Agent</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Filter by trigger type</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Search keyword</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Task ID list filter</p>
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * <p>Whether to enable filter criteria</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHTASKSREQUEST_H_

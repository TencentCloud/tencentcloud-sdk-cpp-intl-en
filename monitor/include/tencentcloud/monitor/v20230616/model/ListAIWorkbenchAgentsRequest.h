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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHAGENTSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHAGENTSREQUEST_H_

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
                * ListAIWorkbenchAgents request structure.
                */
                class ListAIWorkbenchAgentsRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchAgentsRequest();
                    ~ListAIWorkbenchAgentsRequest() = default;
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
                     * 获取<p>Status filtering</p>
                     * @return Status <p>Status filtering</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status filtering</p>
                     * @param _status <p>Status filtering</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Category filtering</p>
                     * @return Category <p>Category filtering</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Category filtering</p>
                     * @param _category <p>Category filtering</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

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
                     * 获取<p>Filter by source</p>
                     * @return Source <p>Filter by source</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Filter by source</p>
                     * @param _source <p>Filter by source</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Agent ID list filtering</p>
                     * @return AgentIds <p>Agent ID list filtering</p>
                     * 
                     */
                    std::vector<std::string> GetAgentIds() const;

                    /**
                     * 设置<p>Agent ID list filtering</p>
                     * @param _agentIds <p>Agent ID list filtering</p>
                     * 
                     */
                    void SetAgentIds(const std::vector<std::string>& _agentIds);

                    /**
                     * 判断参数 AgentIds 是否已赋值
                     * @return AgentIds 是否已赋值
                     * 
                     */
                    bool AgentIdsHasBeenSet() const;

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
                     * <p>Status filtering</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Category filtering</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Search keyword</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Filter by source</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Agent ID list filtering</p>
                     */
                    std::vector<std::string> m_agentIds;
                    bool m_agentIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHAGENTSREQUEST_H_

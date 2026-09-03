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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHSKILLSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHSKILLSREQUEST_H_

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
                * ListAIWorkbenchSkills request structure.
                */
                class ListAIWorkbenchSkillsRequest : public AbstractModel
                {
                public:
                    ListAIWorkbenchSkillsRequest();
                    ~ListAIWorkbenchSkillsRequest() = default;
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
                     * 获取<p>Filter by type</p>
                     * @return Type <p>Filter by type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Filter by type</p>
                     * @param _type <p>Filter by type</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取<p>Whether to enable filter</p>
                     * @return Enabled <p>Whether to enable filter</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable filter</p>
                     * @param _enabled <p>Whether to enable filter</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Skill ID list filter</p>
                     * @return SkillIds <p>Skill ID list filter</p>
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>Skill ID list filter</p>
                     * @param _skillIds <p>Skill ID list filter</p>
                     * 
                     */
                    void SetSkillIds(const std::vector<std::string>& _skillIds);

                    /**
                     * 判断参数 SkillIds 是否已赋值
                     * @return SkillIds 是否已赋值
                     * 
                     */
                    bool SkillIdsHasBeenSet() const;

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
                     * <p>Filter by type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Search keyword</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Whether to enable filter</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Skill ID list filter</p>
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_LISTAIWORKBENCHSKILLSREQUEST_H_

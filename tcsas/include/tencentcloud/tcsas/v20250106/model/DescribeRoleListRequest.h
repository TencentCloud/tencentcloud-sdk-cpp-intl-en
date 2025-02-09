/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEROLELISTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEROLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeRoleList request structure.
                */
                class DescribeRoleListRequest : public AbstractModel
                {
                public:
                    DescribeRoleListRequest();
                    ~DescribeRoleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page offset
                     * @return Offset Page offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset
                     * @param _offset Page offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page
                     * @return Limit Number of results per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page
                     * @param _limit Number of results per page
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Keywords for search (role name)
                     * @return Keyword Keywords for search (role name)
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keywords for search (role name)
                     * @param _keyword Keywords for search (role name)
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
                     * 获取Team ID
                     * @return TeamId Team ID
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
                     * @param _teamId Team ID
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                private:

                    /**
                     * Page offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Keywords for search (role name)
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Team ID
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEROLELISTREQUEST_H_

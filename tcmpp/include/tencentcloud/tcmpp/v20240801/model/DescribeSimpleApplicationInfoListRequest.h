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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESIMPLEAPPLICATIONINFOLISTREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESIMPLEAPPLICATIONINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeSimpleApplicationInfoList request structure.
                */
                class DescribeSimpleApplicationInfoListRequest : public AbstractModel
                {
                public:
                    DescribeSimpleApplicationInfoListRequest();
                    ~DescribeSimpleApplicationInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Query keywords (application name)
                     * @return Keyword Query keywords (application name)
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Query keywords (application name)
                     * @param _keyword Query keywords (application name)
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
                     * 获取Whether TCMPP Assistant is loaded
                     * @return LoadAssistantApp Whether TCMPP Assistant is loaded
                     * 
                     */
                    bool GetLoadAssistantApp() const;

                    /**
                     * 设置Whether TCMPP Assistant is loaded
                     * @param _loadAssistantApp Whether TCMPP Assistant is loaded
                     * 
                     */
                    void SetLoadAssistantApp(const bool& _loadAssistantApp);

                    /**
                     * 判断参数 LoadAssistantApp 是否已赋值
                     * @return LoadAssistantApp 是否已赋值
                     * 
                     */
                    bool LoadAssistantAppHasBeenSet() const;

                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                private:

                    /**
                     * Pagination offset
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
                     * Query keywords (application name)
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Whether TCMPP Assistant is loaded
                     */
                    bool m_loadAssistantApp;
                    bool m_loadAssistantAppHasBeenSet;

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBESIMPLEAPPLICATIONINFOLISTREQUEST_H_

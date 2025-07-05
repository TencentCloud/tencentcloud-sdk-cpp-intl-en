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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFOSEARCHCRITERIA_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFOSEARCHCRITERIA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * User attribute search criteria.

                */
                class AuthorizationInfoSearchCriteria : public AbstractModel
                {
                public:
                    AuthorizationInfoSearchCriteria();
                    ~AuthorizationInfoSearchCriteria() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Search by name. When the query type is user, the match criteria include username and application name. When the query type is user group, the match criteria include user group name and application name. When the query type is organization, the match criteria include organization name and application name.
                     * @return Keyword Search by name. When the query type is user, the match criteria include username and application name. When the query type is user group, the match criteria include user group name and application name. When the query type is organization, the match criteria include organization name and application name.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search by name. When the query type is user, the match criteria include username and application name. When the query type is user group, the match criteria include user group name and application name. When the query type is organization, the match criteria include organization name and application name.
                     * @param _keyword Search by name. When the query type is user, the match criteria include username and application name. When the query type is user group, the match criteria include user group name and application name. When the query type is organization, the match criteria include organization name and application name.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Search by name. When the query type is user, the match criteria include username and application name. When the query type is user group, the match criteria include user group name and application name. When the query type is organization, the match criteria include organization name and application name.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFOSEARCHCRITERIA_H_

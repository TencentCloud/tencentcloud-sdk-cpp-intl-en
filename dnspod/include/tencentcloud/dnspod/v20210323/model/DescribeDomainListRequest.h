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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainList request structure.
                */
                class DescribeDomainListRequest : public AbstractModel
                {
                public:
                    DescribeDomainListRequest();
                    ~DescribeDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain group type. Valid values: `ALL` (default), `MINE`, `SHARE`, `ISMARK`, `PAUSE`, `VIP`, `RECENT`, `SHARE_OUT`, and `FREE`.
                     * @return Type The domain group type. Valid values: `ALL` (default), `MINE`, `SHARE`, `ISMARK`, `PAUSE`, `VIP`, `RECENT`, `SHARE_OUT`, and `FREE`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The domain group type. Valid values: `ALL` (default), `MINE`, `SHARE`, `ISMARK`, `PAUSE`, `VIP`, `RECENT`, `SHARE_OUT`, and `FREE`.
                     * @param _type The domain group type. Valid values: `ALL` (default), `MINE`, `SHARE`, `ISMARK`, `PAUSE`, `VIP`, `RECENT`, `SHARE_OUT`, and `FREE`.
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
                     * 获取Record offset starting from `0`. Default value: `0`.
                     * @return Offset Record offset starting from `0`. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset starting from `0`. Default value: `0`.
                     * @param _offset Record offset starting from `0`. Default value: `0`.
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
                     * 获取Number of domains to be obtained. For example, `20` indicates to obtain 20 domains. Default value: `3000`.
                     * @return Limit Number of domains to be obtained. For example, `20` indicates to obtain 20 domains. Default value: `3000`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of domains to be obtained. For example, `20` indicates to obtain 20 domains. Default value: `3000`.
                     * @param _limit Number of domains to be obtained. For example, `20` indicates to obtain 20 domains. Default value: `3000`.
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
                     * 获取Group ID, which can be passed in to get all domains in the specified group
                     * @return GroupId Group ID, which can be passed in to get all domains in the specified group
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Group ID, which can be passed in to get all domains in the specified group
                     * @param _groupId Group ID, which can be passed in to get all domains in the specified group
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Keyword for searching for a domain
                     * @return Keyword Keyword for searching for a domain
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword for searching for a domain
                     * @param _keyword Keyword for searching for a domain
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
                     * The domain group type. Valid values: `ALL` (default), `MINE`, `SHARE`, `ISMARK`, `PAUSE`, `VIP`, `RECENT`, `SHARE_OUT`, and `FREE`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Record offset starting from `0`. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of domains to be obtained. For example, `20` indicates to obtain 20 domains. Default value: `3000`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Group ID, which can be passed in to get all domains in the specified group
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Keyword for searching for a domain
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINLISTREQUEST_H_

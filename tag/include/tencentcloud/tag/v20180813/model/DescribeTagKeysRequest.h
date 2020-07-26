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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGKEYSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeTagKeys request structure.
                */
                class DescribeTagKeysRequest : public AbstractModel
                {
                public:
                    DescribeTagKeysRequest();
                    ~DescribeTagKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Creator `Uin`. If not specified, `Uin` is only used as the query condition.
                     * @return CreateUin Creator `Uin`. If not specified, `Uin` is only used as the query condition.
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `Uin`. If not specified, `Uin` is only used as the query condition.
                     * @param CreateUin Creator `Uin`. If not specified, `Uin` is only used as the query condition.
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * @return Offset Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * @param Offset Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page size. The default value is 0.
                     * @return Limit Page size. The default value is 0.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size. The default value is 0.
                     * @param Limit Page size. The default value is 0.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Whether to show project
                     * @return ShowProject Whether to show project
                     */
                    uint64_t GetShowProject() const;

                    /**
                     * 设置Whether to show project
                     * @param ShowProject Whether to show project
                     */
                    void SetShowProject(const uint64_t& _showProject);

                    /**
                     * 判断参数 ShowProject 是否已赋值
                     * @return ShowProject 是否已赋值
                     */
                    bool ShowProjectHasBeenSet() const;

                private:

                    /**
                     * Creator `Uin`. If not specified, `Uin` is only used as the query condition.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. The default value is 0.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether to show project
                     */
                    uint64_t m_showProject;
                    bool m_showProjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGKEYSREQUEST_H_

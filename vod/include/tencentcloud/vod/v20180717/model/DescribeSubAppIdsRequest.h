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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeSubAppIds request structure.
                */
                class DescribeSubAppIdsRequest : public AbstractModel
                {
                public:
                    DescribeSubAppIdsRequest();
                    ~DescribeSubAppIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subapplication name.
                     * @return Name Subapplication name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subapplication name.
                     * @param Name Subapplication name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Tag information. You can query the list of subapplications with specified tags.
                     * @return Tags Tag information. You can query the list of subapplications with specified tags.
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置Tag information. You can query the list of subapplications with specified tags.
                     * @param Tags Tag information. You can query the list of subapplications with specified tags.
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Page number offset from the beginning of paginated queries. Default value: 0.
                     * @return Offset Page number offset from the beginning of paginated queries. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number offset from the beginning of paginated queries. Default value: 0.
                     * @param Offset Page number offset from the beginning of paginated queries. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum return results of pulling paginated queries. Default: 200; maximum: 200.
                     * @return Limit Maximum return results of pulling paginated queries. Default: 200; maximum: 200.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum return results of pulling paginated queries. Default: 200; maximum: 200.
                     * @param Limit Maximum return results of pulling paginated queries. Default: 200; maximum: 200.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Subapplication name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Tag information. You can query the list of subapplications with specified tags.
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Page number offset from the beginning of paginated queries. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum return results of pulling paginated queries. Default: 200; maximum: 200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSREQUEST_H_

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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEROLELISTREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEROLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/RoleTags.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
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
                     * 获取Page number, beginning from 1
                     * @return Page Page number, beginning from 1
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number, beginning from 1
                     * @param _page Page number, beginning from 1
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of lines per page, no greater than 200
                     * @return Rp Number of lines per page, no greater than 200
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of lines per page, no greater than 200
                     * @param _rp Number of lines per page, no greater than 200
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取A parameter used to filter the list of roles under a tag.
                     * @return Tags A parameter used to filter the list of roles under a tag.
                     * 
                     */
                    std::vector<RoleTags> GetTags() const;

                    /**
                     * 设置A parameter used to filter the list of roles under a tag.
                     * @param _tags A parameter used to filter the list of roles under a tag.
                     * 
                     */
                    void SetTags(const std::vector<RoleTags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Page number, beginning from 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of lines per page, no greater than 200
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * A parameter used to filter the list of roles under a tag.
                     */
                    std::vector<RoleTags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEROLELISTREQUEST_H_

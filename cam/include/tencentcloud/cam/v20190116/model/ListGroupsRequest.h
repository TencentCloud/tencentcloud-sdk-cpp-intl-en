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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListGroups request structure.
                */
                class ListGroupsRequest : public AbstractModel
                {
                public:
                    ListGroupsRequest();
                    ~ListGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number; default is 1
                     * @return Page Page number; default is 1
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number; default is 1
                     * @param Page Page number; default is 1
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of entries per page; default is 20
                     * @return Rp Number of entries per page; default is 20
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of entries per page; default is 20
                     * @param Rp Number of entries per page; default is 20
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取Filter by User Group name
                     * @return Keyword Filter by User Group name
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Filter by User Group name
                     * @param Keyword Filter by User Group name
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Page number; default is 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of entries per page; default is 20
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Filter by User Group name
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSREQUEST_H_

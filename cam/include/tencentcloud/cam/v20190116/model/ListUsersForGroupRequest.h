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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTUSERSFORGROUPREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTUSERSFORGROUPREQUEST_H_

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
                * ListUsersForGroup request structure.
                */
                class ListUsersForGroupRequest : public AbstractModel
                {
                public:
                    ListUsersForGroupRequest();
                    ~ListUsersForGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User group ID
                     * @return GroupId User group ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置User group ID
                     * @param _groupId User group ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Page number; default is 1
                     * @return Page Page number; default is 1
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number; default is 1
                     * @param _page Page number; default is 1
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
                     * 获取Number of entries per page; default is 20
                     * @return Rp Number of entries per page; default is 20
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of entries per page; default is 20
                     * @param _rp Number of entries per page; default is 20
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                private:

                    /**
                     * User group ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTUSERSFORGROUPREQUEST_H_

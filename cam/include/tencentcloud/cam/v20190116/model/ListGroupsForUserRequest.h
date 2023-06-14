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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSFORUSERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSFORUSERREQUEST_H_

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
                * ListGroupsForUser request structure.
                */
                class ListGroupsForUserRequest : public AbstractModel
                {
                public:
                    ListGroupsForUserRequest();
                    ~ListGroupsForUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-user UID
                     * @return Uid Sub-user UID
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置Sub-user UID
                     * @param _uid Sub-user UID
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

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
                     * 获取Sub-account UIN
                     * @return SubUin Sub-account UIN
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置Sub-account UIN
                     * @param _subUin Sub-account UIN
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                private:

                    /**
                     * Sub-user UID
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Number of entries per page; default is 20
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Page number; default is 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Sub-account UIN
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTGROUPSFORUSERREQUEST_H_

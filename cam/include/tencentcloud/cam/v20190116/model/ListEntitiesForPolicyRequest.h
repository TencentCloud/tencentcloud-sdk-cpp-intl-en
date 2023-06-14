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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTENTITIESFORPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTENTITIESFORPOLICYREQUEST_H_

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
                * ListEntitiesForPolicy request structure.
                */
                class ListEntitiesForPolicyRequest : public AbstractModel
                {
                public:
                    ListEntitiesForPolicyRequest();
                    ~ListEntitiesForPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Page number, which starts from 1. Default is 1
                     * @return Page Page number, which starts from 1. Default is 1
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page number, which starts from 1. Default is 1
                     * @param _page Page number, which starts from 1. Default is 1
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
                     * 获取Number of entries per page; 20 by default
                     * @return Rp Number of entries per page; 20 by default
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置Number of entries per page; 20 by default
                     * @param _rp Number of entries per page; 20 by default
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
                     * 获取Valid values: `All`, `User`, `Group`, and `Role`. `All` means all entity types will be returned; `User` means only sub-accounts will be returned; `Group` means only User Groups will be returned; `Role` means only roles will be returned. `All` is the default value.
                     * @return EntityFilter Valid values: `All`, `User`, `Group`, and `Role`. `All` means all entity types will be returned; `User` means only sub-accounts will be returned; `Group` means only User Groups will be returned; `Role` means only roles will be returned. `All` is the default value.
                     * 
                     */
                    std::string GetEntityFilter() const;

                    /**
                     * 设置Valid values: `All`, `User`, `Group`, and `Role`. `All` means all entity types will be returned; `User` means only sub-accounts will be returned; `Group` means only User Groups will be returned; `Role` means only roles will be returned. `All` is the default value.
                     * @param _entityFilter Valid values: `All`, `User`, `Group`, and `Role`. `All` means all entity types will be returned; `User` means only sub-accounts will be returned; `Group` means only User Groups will be returned; `Role` means only roles will be returned. `All` is the default value.
                     * 
                     */
                    void SetEntityFilter(const std::string& _entityFilter);

                    /**
                     * 判断参数 EntityFilter 是否已赋值
                     * @return EntityFilter 是否已赋值
                     * 
                     */
                    bool EntityFilterHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Page number, which starts from 1. Default is 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of entries per page; 20 by default
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * Valid values: `All`, `User`, `Group`, and `Role`. `All` means all entity types will be returned; `User` means only sub-accounts will be returned; `Group` means only User Groups will be returned; `Role` means only roles will be returned. `All` is the default value.
                     */
                    std::string m_entityFilter;
                    bool m_entityFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTENTITIESFORPOLICYREQUEST_H_

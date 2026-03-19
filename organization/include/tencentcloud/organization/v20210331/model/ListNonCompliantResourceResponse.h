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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCERESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/ResourceTagMapping.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListNonCompliantResource response structure.
                */
                class ListNonCompliantResourceResponse : public AbstractModel
                {
                public:
                    ListNonCompliantResourceResponse();
                    ~ListNonCompliantResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource and tag compliance information.
                     * @return Items Resource and tag compliance information.
                     * 
                     */
                    std::vector<ResourceTagMapping> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Token value obtained for the next page.
                     * @return PaginationToken Token value obtained for the next page.
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                private:

                    /**
                     * Resource and tag compliance information.
                     */
                    std::vector<ResourceTagMapping> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Token value obtained for the next page.
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTNONCOMPLIANTRESOURCERESPONSE_H_

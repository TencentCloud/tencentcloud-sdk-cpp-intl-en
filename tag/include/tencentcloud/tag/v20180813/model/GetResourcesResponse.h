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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESRESPONSE_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/ResourceTagMapping.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * GetResources response structure.
                */
                class GetResourcesResponse : public AbstractModel
                {
                public:
                    GetResourcesResponse();
                    ~GetResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Token value obtained for the next page
                     * @return PaginationToken Token value obtained for the next page
                     * 
                     */
                    std::string GetPaginationToken() const;

                    /**
                     * 判断参数 PaginationToken 是否已赋值
                     * @return PaginationToken 是否已赋值
                     * 
                     */
                    bool PaginationTokenHasBeenSet() const;

                    /**
                     * 获取List of resources and their associated tags (key-value pairs)
                     * @return ResourceTagMappingList List of resources and their associated tags (key-value pairs)
                     * 
                     */
                    std::vector<ResourceTagMapping> GetResourceTagMappingList() const;

                    /**
                     * 判断参数 ResourceTagMappingList 是否已赋值
                     * @return ResourceTagMappingList 是否已赋值
                     * 
                     */
                    bool ResourceTagMappingListHasBeenSet() const;

                private:

                    /**
                     * Token value obtained for the next page
                     */
                    std::string m_paginationToken;
                    bool m_paginationTokenHasBeenSet;

                    /**
                     * List of resources and their associated tags (key-value pairs)
                     */
                    std::vector<ResourceTagMapping> m_resourceTagMappingList;
                    bool m_resourceTagMappingListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_GETRESOURCESRESPONSE_H_

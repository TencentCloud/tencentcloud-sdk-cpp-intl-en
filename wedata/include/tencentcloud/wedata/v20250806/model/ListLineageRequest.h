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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTLINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListLineage request structure.
                */
                class ListLineageRequest : public AbstractModel
                {
                public:
                    ListLineageRequest();
                    ~ListLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Entity unique ID.
                     * @return ResourceUniqueId Entity unique ID.
                     * 
                     */
                    std::string GetResourceUniqueId() const;

                    /**
                     * 设置Entity unique ID.
                     * @param _resourceUniqueId Entity unique ID.
                     * 
                     */
                    void SetResourceUniqueId(const std::string& _resourceUniqueId);

                    /**
                     * 判断参数 ResourceUniqueId 是否已赋值
                     * @return ResourceUniqueId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取Entity type TABLE|METRIC|MODEL|SERVICE|COLUMN.
                     * @return ResourceType Entity type TABLE|METRIC|MODEL|SERVICE|COLUMN.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Entity type TABLE|METRIC|MODEL|SERVICE|COLUMN.
                     * @param _resourceType Entity type TABLE|METRIC|MODEL|SERVICE|COLUMN.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Lineage direction INPUT｜OUTPUT.
                     * @return Direction Lineage direction INPUT｜OUTPUT.
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置Lineage direction INPUT｜OUTPUT.
                     * @param _direction Lineage direction INPUT｜OUTPUT.
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Pagination size.
                     * @return PageSize Pagination size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size.
                     * @param _pageSize Pagination size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Source: WEDATA|THIRD default WEDATA.
                     * @return Platform Source: WEDATA|THIRD default WEDATA.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Source: WEDATA|THIRD default WEDATA.
                     * @param _platform Source: WEDATA|THIRD default WEDATA.
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * Entity unique ID.
                     */
                    std::string m_resourceUniqueId;
                    bool m_resourceUniqueIdHasBeenSet;

                    /**
                     * Entity type TABLE|METRIC|MODEL|SERVICE|COLUMN.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Lineage direction INPUT｜OUTPUT.
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Source: WEDATA|THIRD default WEDATA.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTLINEAGEREQUEST_H_

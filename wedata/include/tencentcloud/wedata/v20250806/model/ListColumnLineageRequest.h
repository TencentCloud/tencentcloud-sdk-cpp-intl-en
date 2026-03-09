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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCOLUMNLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCOLUMNLINEAGEREQUEST_H_

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
                * ListColumnLineage request structure.
                */
                class ListColumnLineageRequest : public AbstractModel
                {
                public:
                    ListColumnLineageRequest();
                    ~ListColumnLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Table unique ID.
                     * @return TableUniqueId Table unique ID.
                     * 
                     */
                    std::string GetTableUniqueId() const;

                    /**
                     * 设置Table unique ID.
                     * @param _tableUniqueId Table unique ID.
                     * 
                     */
                    void SetTableUniqueId(const std::string& _tableUniqueId);

                    /**
                     * 判断参数 TableUniqueId 是否已赋值
                     * @return TableUniqueId 是否已赋值
                     * 
                     */
                    bool TableUniqueIdHasBeenSet() const;

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
                     * 获取Column name.
                     * @return ColumnName Column name.
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置Column name.
                     * @param _columnName Column name.
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

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
                     * Table unique ID.
                     */
                    std::string m_tableUniqueId;
                    bool m_tableUniqueIdHasBeenSet;

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
                     * Column name.
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCOLUMNLINEAGEREQUEST_H_

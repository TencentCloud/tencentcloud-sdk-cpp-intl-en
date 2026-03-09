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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>
#include <tencentcloud/wedata/v20250806/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListQualityRuleTemplates request structure.
                */
                class ListQualityRuleTemplatesRequest : public AbstractModel
                {
                public:
                    ListQualityRuleTemplatesRequest();
                    ~ListQualityRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Workspace ID.
                     * @return ProjectId Workspace ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Workspace ID.
                     * @param _projectId Workspace ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Current page, which is 1 by default.
                     * @return PageNumber Current page, which is 1 by default.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Current page, which is 1 by default.
                     * @param _pageNumber Current page, which is 1 by default.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of records per page, which is 10 by default.
                     * @return PageSize Number of records per page, which is 10 by default.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of records per page, which is 10 by default.
                     * @param _pageSize Number of records per page, which is 10 by default.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Common sort.
Supported sorting fields:.
CitationCount - sort by number of references.
UpdateTime - sort by update time.
Sorting order:.
1 - ascending (ASC).
2 - descending (DESC).
                     * @return OrderFields Common sort.
Supported sorting fields:.
CitationCount - sort by number of references.
UpdateTime - sort by update time.
Sorting order:.
1 - ascending (ASC).
2 - descending (DESC).
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置Common sort.
Supported sorting fields:.
CitationCount - sort by number of references.
UpdateTime - sort by update time.
Sorting order:.
1 - ascending (ASC).
2 - descending (DESC).
                     * @param _orderFields Common sort.
Supported sorting fields:.
CitationCount - sort by number of references.
UpdateTime - sort by update time.
Sorting order:.
1 - ascending (ASC).
2 - descending (DESC).
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取Universal filter criteria.
1. Id
Description: template ID.
Value: unique identifier of the template.

2. Keyword
Description: search by keyword, supports template name fuzzy search.
Value: string.

3. Type
Description: template type.
Value: 1 - system template; 2 - custom template; support multiple values (OR relationship).

4. QualityDim
Describes the quality detection dimension.
Valid values: 1 - accuracy; 2 - uniqueness; 3 - integrity; 4 - consistency; 5 - timeliness; 6 - validity. support multiple values (OR relationship).

5. SourceObjectType
Describes the applicable source data object type for rule.
Value: 1 - constant; 2 - offline table level; 3 - offline field level; 4 - database level. supports multiple values (OR relationship).

6. SourceEngineTypes
Description: specifies the source data engine type to which the template applies.
Value: 1 - MySQL; 2 - Hive; 4 - Spark; 8 - Livy; 16 - DLC; 32 - Gbase; 64 - TCHouse-P; 128 - Doris; 256 - TCHouse-D; 512 - EMR_StarRocks; 1024 - TCHouse-X. supports multiple values (OR relationship).

                     * @return Filters Universal filter criteria.
1. Id
Description: template ID.
Value: unique identifier of the template.

2. Keyword
Description: search by keyword, supports template name fuzzy search.
Value: string.

3. Type
Description: template type.
Value: 1 - system template; 2 - custom template; support multiple values (OR relationship).

4. QualityDim
Describes the quality detection dimension.
Valid values: 1 - accuracy; 2 - uniqueness; 3 - integrity; 4 - consistency; 5 - timeliness; 6 - validity. support multiple values (OR relationship).

5. SourceObjectType
Describes the applicable source data object type for rule.
Value: 1 - constant; 2 - offline table level; 3 - offline field level; 4 - database level. supports multiple values (OR relationship).

6. SourceEngineTypes
Description: specifies the source data engine type to which the template applies.
Value: 1 - MySQL; 2 - Hive; 4 - Spark; 8 - Livy; 16 - DLC; 32 - Gbase; 64 - TCHouse-P; 128 - Doris; 256 - TCHouse-D; 512 - EMR_StarRocks; 1024 - TCHouse-X. supports multiple values (OR relationship).

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Universal filter criteria.
1. Id
Description: template ID.
Value: unique identifier of the template.

2. Keyword
Description: search by keyword, supports template name fuzzy search.
Value: string.

3. Type
Description: template type.
Value: 1 - system template; 2 - custom template; support multiple values (OR relationship).

4. QualityDim
Describes the quality detection dimension.
Valid values: 1 - accuracy; 2 - uniqueness; 3 - integrity; 4 - consistency; 5 - timeliness; 6 - validity. support multiple values (OR relationship).

5. SourceObjectType
Describes the applicable source data object type for rule.
Value: 1 - constant; 2 - offline table level; 3 - offline field level; 4 - database level. supports multiple values (OR relationship).

6. SourceEngineTypes
Description: specifies the source data engine type to which the template applies.
Value: 1 - MySQL; 2 - Hive; 4 - Spark; 8 - Livy; 16 - DLC; 32 - Gbase; 64 - TCHouse-P; 128 - Doris; 256 - TCHouse-D; 512 - EMR_StarRocks; 1024 - TCHouse-X. supports multiple values (OR relationship).

                     * @param _filters Universal filter criteria.
1. Id
Description: template ID.
Value: unique identifier of the template.

2. Keyword
Description: search by keyword, supports template name fuzzy search.
Value: string.

3. Type
Description: template type.
Value: 1 - system template; 2 - custom template; support multiple values (OR relationship).

4. QualityDim
Describes the quality detection dimension.
Valid values: 1 - accuracy; 2 - uniqueness; 3 - integrity; 4 - consistency; 5 - timeliness; 6 - validity. support multiple values (OR relationship).

5. SourceObjectType
Describes the applicable source data object type for rule.
Value: 1 - constant; 2 - offline table level; 3 - offline field level; 4 - database level. supports multiple values (OR relationship).

6. SourceEngineTypes
Description: specifies the source data engine type to which the template applies.
Value: 1 - MySQL; 2 - Hive; 4 - Spark; 8 - Livy; 16 - DLC; 32 - Gbase; 64 - TCHouse-P; 128 - Doris; 256 - TCHouse-D; 512 - EMR_StarRocks; 1024 - TCHouse-X. supports multiple values (OR relationship).

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Workspace ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Current page, which is 1 by default.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of records per page, which is 10 by default.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Common sort.
Supported sorting fields:.
CitationCount - sort by number of references.
UpdateTime - sort by update time.
Sorting order:.
1 - ascending (ASC).
2 - descending (DESC).
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Universal filter criteria.
1. Id
Description: template ID.
Value: unique identifier of the template.

2. Keyword
Description: search by keyword, supports template name fuzzy search.
Value: string.

3. Type
Description: template type.
Value: 1 - system template; 2 - custom template; support multiple values (OR relationship).

4. QualityDim
Describes the quality detection dimension.
Valid values: 1 - accuracy; 2 - uniqueness; 3 - integrity; 4 - consistency; 5 - timeliness; 6 - validity. support multiple values (OR relationship).

5. SourceObjectType
Describes the applicable source data object type for rule.
Value: 1 - constant; 2 - offline table level; 3 - offline field level; 4 - database level. supports multiple values (OR relationship).

6. SourceEngineTypes
Description: specifies the source data engine type to which the template applies.
Value: 1 - MySQL; 2 - Hive; 4 - Spark; 8 - Livy; 16 - DLC; 32 - Gbase; 64 - TCHouse-P; 128 - Doris; 256 - TCHouse-D; 512 - EMR_StarRocks; 1024 - TCHouse-X. supports multiple values (OR relationship).

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULETEMPLATESREQUEST_H_

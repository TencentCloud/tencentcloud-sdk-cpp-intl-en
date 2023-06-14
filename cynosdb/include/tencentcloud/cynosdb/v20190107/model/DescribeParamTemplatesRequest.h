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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates request structure.
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database engine version number
                     * @return EngineVersions Database engine version number
                     * 
                     */
                    std::vector<std::string> GetEngineVersions() const;

                    /**
                     * 设置Database engine version number
                     * @param _engineVersions Database engine version number
                     * 
                     */
                    void SetEngineVersions(const std::vector<std::string>& _engineVersions);

                    /**
                     * 判断参数 EngineVersions 是否已赋值
                     * @return EngineVersions 是否已赋值
                     * 
                     */
                    bool EngineVersionsHasBeenSet() const;

                    /**
                     * 获取Template name
                     * @return TemplateNames Template name
                     * 
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置Template name
                     * @param _templateNames Template name
                     * 
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     * 
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取Template ID
                     * @return TemplateIds Template ID
                     * 
                     */
                    std::vector<int64_t> GetTemplateIds() const;

                    /**
                     * 设置Template ID
                     * @param _templateIds Template ID
                     * 
                     */
                    void SetTemplateIds(const std::vector<int64_t>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取Database Type. Valid values: `NORMAL`, `SERVERLESS`.
                     * @return DbModes Database Type. Valid values: `NORMAL`, `SERVERLESS`.
                     * 
                     */
                    std::vector<std::string> GetDbModes() const;

                    /**
                     * 设置Database Type. Valid values: `NORMAL`, `SERVERLESS`.
                     * @param _dbModes Database Type. Valid values: `NORMAL`, `SERVERLESS`.
                     * 
                     */
                    void SetDbModes(const std::vector<std::string>& _dbModes);

                    /**
                     * 判断参数 DbModes 是否已赋值
                     * @return DbModes 是否已赋值
                     * 
                     */
                    bool DbModesHasBeenSet() const;

                    /**
                     * 获取Offset for query
                     * @return Offset Offset for query
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for query
                     * @param _offset Offset for query
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit on queries
                     * @return Limit Limit on queries
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on queries
                     * @param _limit Limit on queries
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Product type of the queried template
                     * @return Products Product type of the queried template
                     * 
                     */
                    std::vector<std::string> GetProducts() const;

                    /**
                     * 设置Product type of the queried template
                     * @param _products Product type of the queried template
                     * 
                     */
                    void SetProducts(const std::vector<std::string>& _products);

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取Template type
                     * @return TemplateTypes Template type
                     * 
                     */
                    std::vector<std::string> GetTemplateTypes() const;

                    /**
                     * 设置Template type
                     * @param _templateTypes Template type
                     * 
                     */
                    void SetTemplateTypes(const std::vector<std::string>& _templateTypes);

                    /**
                     * 判断参数 TemplateTypes 是否已赋值
                     * @return TemplateTypes 是否已赋值
                     * 
                     */
                    bool TemplateTypesHasBeenSet() const;

                    /**
                     * 获取Version type
                     * @return EngineTypes Version type
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 设置Version type
                     * @param _engineTypes Version type
                     * 
                     */
                    void SetEngineTypes(const std::vector<std::string>& _engineTypes);

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                    /**
                     * 获取The sorting order of the returned results
                     * @return OrderBy The sorting order of the returned results
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置The sorting order of the returned results
                     * @param _orderBy The sorting order of the returned results
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `desc`, `asc `.
                     * @return OrderDirection Sorting order. Valid values: `desc`, `asc `.
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置Sorting order. Valid values: `desc`, `asc `.
                     * @param _orderDirection Sorting order. Valid values: `desc`, `asc `.
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * Database engine version number
                     */
                    std::vector<std::string> m_engineVersions;
                    bool m_engineVersionsHasBeenSet;

                    /**
                     * Template name
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * Template ID
                     */
                    std::vector<int64_t> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * Database Type. Valid values: `NORMAL`, `SERVERLESS`.
                     */
                    std::vector<std::string> m_dbModes;
                    bool m_dbModesHasBeenSet;

                    /**
                     * Offset for query
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on queries
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Product type of the queried template
                     */
                    std::vector<std::string> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * Template type
                     */
                    std::vector<std::string> m_templateTypes;
                    bool m_templateTypesHasBeenSet;

                    /**
                     * Version type
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                    /**
                     * The sorting order of the returned results
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `desc`, `asc `.
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

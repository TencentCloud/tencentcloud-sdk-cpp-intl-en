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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHFILTER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SearchFilter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Search filter
                */
                class SearchFilter : public AbstractModel
                {
                public:
                    SearchFilter();
                    ~SearchFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Search filter type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_FILTER_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE</td><td>1</td><td>User-customized tag value</td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE_ID</td><td>2</td><td>User-customized tag value ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_ID</td><td>3</td><td>Retrieve by specified document ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_CATEGORY_ID</td><td>4</td><td>Retrieve by specified document classification ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DB_TABLE_ID</td><td>5</td><td>Retrieve by specified database table ID</td></tr><tr><td>SEARCH_FILTER_TYPE_KB_SCHEMA_ID</td><td>6</td><td>Specified knowledge base schema ID</td></tr></tbody></table></p>
                     * @return FilterType <p>Search filter type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_FILTER_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE</td><td>1</td><td>User-customized tag value</td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE_ID</td><td>2</td><td>User-customized tag value ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_ID</td><td>3</td><td>Retrieve by specified document ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_CATEGORY_ID</td><td>4</td><td>Retrieve by specified document classification ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DB_TABLE_ID</td><td>5</td><td>Retrieve by specified database table ID</td></tr><tr><td>SEARCH_FILTER_TYPE_KB_SCHEMA_ID</td><td>6</td><td>Specified knowledge base schema ID</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetFilterType() const;

                    /**
                     * 设置<p>Search filter type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_FILTER_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE</td><td>1</td><td>User-customized tag value</td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE_ID</td><td>2</td><td>User-customized tag value ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_ID</td><td>3</td><td>Retrieve by specified document ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_CATEGORY_ID</td><td>4</td><td>Retrieve by specified document classification ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DB_TABLE_ID</td><td>5</td><td>Retrieve by specified database table ID</td></tr><tr><td>SEARCH_FILTER_TYPE_KB_SCHEMA_ID</td><td>6</td><td>Specified knowledge base schema ID</td></tr></tbody></table></p>
                     * @param _filterType <p>Search filter type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_FILTER_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE</td><td>1</td><td>User-customized tag value</td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE_ID</td><td>2</td><td>User-customized tag value ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_ID</td><td>3</td><td>Retrieve by specified document ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_CATEGORY_ID</td><td>4</td><td>Retrieve by specified document classification ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DB_TABLE_ID</td><td>5</td><td>Retrieve by specified database table ID</td></tr><tr><td>SEARCH_FILTER_TYPE_KB_SCHEMA_ID</td><td>6</td><td>Specified knowledge base schema ID</td></tr></tbody></table></p>
                     * 
                     */
                    void SetFilterType(const int64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Filter value list. According to SearchFilterType, take value 1: pass a custom tag value; 2: pass a custom tag value ID; 3: pass a document ID; 4: pass a category ID</p>
                     * @return FilterValueList <p>Filter value list. According to SearchFilterType, take value 1: pass a custom tag value; 2: pass a custom tag value ID; 3: pass a document ID; 4: pass a category ID</p>
                     * 
                     */
                    std::vector<std::string> GetFilterValueList() const;

                    /**
                     * 设置<p>Filter value list. According to SearchFilterType, take value 1: pass a custom tag value; 2: pass a custom tag value ID; 3: pass a document ID; 4: pass a category ID</p>
                     * @param _filterValueList <p>Filter value list. According to SearchFilterType, take value 1: pass a custom tag value; 2: pass a custom tag value ID; 3: pass a document ID; 4: pass a category ID</p>
                     * 
                     */
                    void SetFilterValueList(const std::vector<std::string>& _filterValueList);

                    /**
                     * 判断参数 FilterValueList 是否已赋值
                     * @return FilterValueList 是否已赋值
                     * 
                     */
                    bool FilterValueListHasBeenSet() const;

                    /**
                     * 获取<p>User-customized tag ID</p>
                     * @return LabelId <p>User-customized tag ID</p>
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置<p>User-customized tag ID</p>
                     * @param _labelId <p>User-customized tag ID</p>
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取<p>Logical operator: AND or OR<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>LOGIC_OPR_NOOP</td><td>0</td><td></td></tr><tr><td>LOGIC_OPR_AND</td><td>1</td><td></td></tr><tr><td>LOGIC_OPR_OR</td><td>2</td><td></td></tr></tbody></table></p>
                     * @return LogicOp <p>Logical operator: AND or OR<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>LOGIC_OPR_NOOP</td><td>0</td><td></td></tr><tr><td>LOGIC_OPR_AND</td><td>1</td><td></td></tr><tr><td>LOGIC_OPR_OR</td><td>2</td><td></td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetLogicOp() const;

                    /**
                     * 设置<p>Logical operator: AND or OR<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>LOGIC_OPR_NOOP</td><td>0</td><td></td></tr><tr><td>LOGIC_OPR_AND</td><td>1</td><td></td></tr><tr><td>LOGIC_OPR_OR</td><td>2</td><td></td></tr></tbody></table></p>
                     * @param _logicOp <p>Logical operator: AND or OR<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>LOGIC_OPR_NOOP</td><td>0</td><td></td></tr><tr><td>LOGIC_OPR_AND</td><td>1</td><td></td></tr><tr><td>LOGIC_OPR_OR</td><td>2</td><td></td></tr></tbody></table></p>
                     * 
                     */
                    void SetLogicOp(const int64_t& _logicOp);

                    /**
                     * 判断参数 LogicOp 是否已赋值
                     * @return LogicOp 是否已赋值
                     * 
                     */
                    bool LogicOpHasBeenSet() const;

                    /**
                     * 获取<p>Nested search filter</p>
                     * @return SearchFilterList <p>Nested search filter</p>
                     * 
                     */
                    std::vector<SearchFilter> GetSearchFilterList() const;

                    /**
                     * 设置<p>Nested search filter</p>
                     * @param _searchFilterList <p>Nested search filter</p>
                     * 
                     */
                    void SetSearchFilterList(const std::vector<SearchFilter>& _searchFilterList);

                    /**
                     * 判断参数 SearchFilterList 是否已赋值
                     * @return SearchFilterList 是否已赋值
                     * 
                     */
                    bool SearchFilterListHasBeenSet() const;

                private:

                    /**
                     * <p>Search filter type<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>SEARCH_FILTER_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE</td><td>1</td><td>User-customized tag value</td></tr><tr><td>SEARCH_FILTER_TYPE_CUSTOMER_LABEL_VALUE_ID</td><td>2</td><td>User-customized tag value ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_ID</td><td>3</td><td>Retrieve by specified document ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DOC_CATEGORY_ID</td><td>4</td><td>Retrieve by specified document classification ID</td></tr><tr><td>SEARCH_FILTER_TYPE_DB_TABLE_ID</td><td>5</td><td>Retrieve by specified database table ID</td></tr><tr><td>SEARCH_FILTER_TYPE_KB_SCHEMA_ID</td><td>6</td><td>Specified knowledge base schema ID</td></tr></tbody></table></p>
                     */
                    int64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * <p>Filter value list. According to SearchFilterType, take value 1: pass a custom tag value; 2: pass a custom tag value ID; 3: pass a document ID; 4: pass a category ID</p>
                     */
                    std::vector<std::string> m_filterValueList;
                    bool m_filterValueListHasBeenSet;

                    /**
                     * <p>User-customized tag ID</p>
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * <p>Logical operator: AND or OR<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>LOGIC_OPR_NOOP</td><td>0</td><td></td></tr><tr><td>LOGIC_OPR_AND</td><td>1</td><td></td></tr><tr><td>LOGIC_OPR_OR</td><td>2</td><td></td></tr></tbody></table></p>
                     */
                    int64_t m_logicOp;
                    bool m_logicOpHasBeenSet;

                    /**
                     * <p>Nested search filter</p>
                     */
                    std::vector<SearchFilter> m_searchFilterList;
                    bool m_searchFilterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHFILTER_H_

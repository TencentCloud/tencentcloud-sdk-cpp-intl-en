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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineRule.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselineRule request structure.
                */
                class ModifyBaselineRuleRequest : public AbstractModel
                {
                public:
                    ModifyBaselineRuleRequest();
                    ~ModifyBaselineRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取None
                     * @return Data None
                     * 
                     */
                    BaselineRule GetData() const;

                    /**
                     * 设置None
                     * @param _data None
                     * 
                     */
                    void SetData(const BaselineRule& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Whether to select all based on the filtering criteria
                     * @return SelectAll Whether to select all based on the filtering criteria
                     * 
                     */
                    int64_t GetSelectAll() const;

                    /**
                     * 设置Whether to select all based on the filtering criteria
                     * @param _selectAll Whether to select all based on the filtering criteria
                     * 
                     */
                    void SetSelectAll(const int64_t& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取<li>ItemName - string - Required: No - Item name</li>
                     * @return Filters <li>ItemName - string - Required: No - Item name</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>ItemName - string - Required: No - Item name</li>
                     * @param _filters <li>ItemName - string - Required: No - Item name</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取0: detection item, 1: detection item category.
                     * @return IdType 0: detection item, 1: detection item category.
                     * 
                     */
                    uint64_t GetIdType() const;

                    /**
                     * 设置0: detection item, 1: detection item category.
                     * @param _idType 0: detection item, 1: detection item category.
                     * 
                     */
                    void SetIdType(const uint64_t& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取ID of the detection item to be excluded.
                     * @return ExcludeIds ID of the detection item to be excluded.
                     * 
                     */
                    std::vector<uint64_t> GetExcludeIds() const;

                    /**
                     * 设置ID of the detection item to be excluded.
                     * @param _excludeIds ID of the detection item to be excluded.
                     * 
                     */
                    void SetExcludeIds(const std::vector<uint64_t>& _excludeIds);

                    /**
                     * 判断参数 ExcludeIds 是否已赋值
                     * @return ExcludeIds 是否已赋值
                     * 
                     */
                    bool ExcludeIdsHasBeenSet() const;

                    /**
                     * 获取Selected detection item category.
                     * @return CategoryIds Selected detection item category.
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIds() const;

                    /**
                     * 设置Selected detection item category.
                     * @param _categoryIds Selected detection item category.
                     * 
                     */
                    void SetCategoryIds(const std::vector<uint64_t>& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     * 
                     */
                    bool CategoryIdsHasBeenSet() const;

                private:

                    /**
                     * None
                     */
                    BaselineRule m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Whether to select all based on the filtering criteria
                     */
                    int64_t m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * <li>ItemName - string - Required: No - Item name</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 0: detection item, 1: detection item category.
                     */
                    uint64_t m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * ID of the detection item to be excluded.
                     */
                    std::vector<uint64_t> m_excludeIds;
                    bool m_excludeIdsHasBeenSet;

                    /**
                     * Selected detection item category.
                     */
                    std::vector<uint64_t> m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEREQUEST_H_

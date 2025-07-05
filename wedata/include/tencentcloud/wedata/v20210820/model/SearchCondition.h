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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SearchConditionInstanceNew.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Query Instance Criteria
                */
                class SearchCondition : public AbstractModel
                {
                public:
                    SearchCondition();
                    ~SearchCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query Framework, Required
                     * @return Instance Query Framework, Required
                     * 
                     */
                    SearchConditionInstanceNew GetInstance() const;

                    /**
                     * 设置Query Framework, Required
                     * @param _instance Query Framework, Required
                     * 
                     */
                    void SetInstance(const SearchConditionInstanceNew& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Query Keyword (Task ID exact match, Task Name fuzzy match), Optional
                     * @return Keyword Query Keyword (Task ID exact match, Task Name fuzzy match), Optional
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Query Keyword (Task ID exact match, Task Name fuzzy match), Optional
                     * @param _keyword Query Keyword (Task ID exact match, Task Name fuzzy match), Optional
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Sorting Order (asc, desc)
                     * @return Sort Sorting Order (asc, desc)
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting Order (asc, desc)
                     * @param _sort Sorting Order (asc, desc)
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * @return SortCol Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * @param _sortCol Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                private:

                    /**
                     * Query Framework, Required
                     */
                    SearchConditionInstanceNew m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Query Keyword (Task ID exact match, Task Name fuzzy match), Optional
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Sorting Order (asc, desc)
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITION_H_

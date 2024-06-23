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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESEARCHCONDITION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESEARCHCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceCondition.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance Retrieval Criteria
                */
                class InstanceSearchCondition : public AbstractModel
                {
                public:
                    InstanceSearchCondition();
                    ~InstanceSearchCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Scheduling Cycle Type
                     * @return CycleList Task Scheduling Cycle Type
                     * 
                     */
                    std::vector<std::string> GetCycleList() const;

                    /**
                     * 设置Task Scheduling Cycle Type
                     * @param _cycleList Task Scheduling Cycle Type
                     * 
                     */
                    void SetCycleList(const std::vector<std::string>& _cycleList);

                    /**
                     * 判断参数 CycleList 是否已赋值
                     * @return CycleList 是否已赋值
                     * 
                     */
                    bool CycleListHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return DateFrom Start time
                     * 
                     */
                    std::string GetDateFrom() const;

                    /**
                     * 设置Start time
                     * @param _dateFrom Start time
                     * 
                     */
                    void SetDateFrom(const std::string& _dateFrom);

                    /**
                     * 判断参数 DateFrom 是否已赋值
                     * @return DateFrom 是否已赋值
                     * 
                     */
                    bool DateFromHasBeenSet() const;

                    /**
                     * 获取Expire Time
                     * @return DateTo Expire Time
                     * 
                     */
                    std::string GetDateTo() const;

                    /**
                     * 设置Expire Time
                     * @param _dateTo Expire Time
                     * 
                     */
                    void SetDateTo(const std::string& _dateTo);

                    /**
                     * 判断参数 DateTo 是否已赋值
                     * @return DateTo 是否已赋值
                     * 
                     */
                    bool DateToHasBeenSet() const;

                    /**
                     * 获取Instance Filtering Conditions
                     * @return Instance Instance Filtering Conditions
                     * 
                     */
                    InstanceCondition GetInstance() const;

                    /**
                     * 设置Instance Filtering Conditions
                     * @param _instance Instance Filtering Conditions
                     * 
                     */
                    void SetInstance(const InstanceCondition& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Fuzzy Query Keywords
                     * @return Keyword Fuzzy Query Keywords
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Fuzzy Query Keywords
                     * @param _keyword Fuzzy Query Keywords
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
                     * 获取Sorting Method
                     * @return Sort Sorting Method
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting Method
                     * @param _sort Sorting Method
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
                     * 获取Sort Fields
                     * @return SortCol Sort Fields
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置Sort Fields
                     * @param _sortCol Sort Fields
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                    /**
                     * 获取Instance Status Type
                     * @return StateList Instance Status Type
                     * 
                     */
                    std::vector<std::string> GetStateList() const;

                    /**
                     * 设置Instance Status Type
                     * @param _stateList Instance Status Type
                     * 
                     */
                    void SetStateList(const std::vector<std::string>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                private:

                    /**
                     * Task Scheduling Cycle Type
                     */
                    std::vector<std::string> m_cycleList;
                    bool m_cycleListHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_dateFrom;
                    bool m_dateFromHasBeenSet;

                    /**
                     * Expire Time
                     */
                    std::string m_dateTo;
                    bool m_dateToHasBeenSet;

                    /**
                     * Instance Filtering Conditions
                     */
                    InstanceCondition m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Fuzzy Query Keywords
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Sorting Method
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sort Fields
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                    /**
                     * Instance Status Type
                     */
                    std::vector<std::string> m_stateList;
                    bool m_stateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESEARCHCONDITION_H_

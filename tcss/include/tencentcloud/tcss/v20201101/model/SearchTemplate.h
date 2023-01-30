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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SEARCHTEMPLATE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SEARCHTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Quick search template
                */
                class SearchTemplate : public AbstractModel
                {
                public:
                    SearchTemplate();
                    ~SearchTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Search name
                     * @return Name Search name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search name
                     * @param Name Search name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Search index type
                     * @return LogType Search index type
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Search index type
                     * @param LogType Search index type
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Search statement
                     * @return Condition Search statement
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Search statement
                     * @param Condition Search statement
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Time range
                     * @return TimeRange Time range
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置Time range
                     * @param TimeRange Time range
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取Converted search statement content
                     * @return Query Converted search statement content
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Converted search statement content
                     * @param Query Converted search statement content
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Search method. Valid values: `standard` (search in the search box); `simple` (search by filter).
                     * @return Flag Search method. Valid values: `standard` (search in the search box); `simple` (search by filter).
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置Search method. Valid values: `standard` (search in the search box); `simple` (search by filter).
                     * @param Flag Search method. Valid values: `standard` (search in the search box); `simple` (search by filter).
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Displayed data
                     * @return DisplayData Displayed data
                     */
                    std::string GetDisplayData() const;

                    /**
                     * 设置Displayed data
                     * @param DisplayData Displayed data
                     */
                    void SetDisplayData(const std::string& _displayData);

                    /**
                     * 判断参数 DisplayData 是否已赋值
                     * @return DisplayData 是否已赋值
                     */
                    bool DisplayDataHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param Id Rule ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Search name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Search index type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Search statement
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Time range
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * Converted search statement content
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Search method. Valid values: `standard` (search in the search box); `simple` (search by filter).
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Displayed data
                     */
                    std::string m_displayData;
                    bool m_displayDataHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SEARCHTEMPLATE_H_

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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Log filter criteria
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter items.
                     * @return Type Filter items.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter items.
                     * @param _type Filter items.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter criteria. Support the following conditions: WINC-include (segment dimension), WEXC-exclude (segment dimension), INC-include, EXC-exclude, EQS-equal, NEQ-not equal to, RA-range.
                     * @return Compare Filter criteria. Support the following conditions: WINC-include (segment dimension), WEXC-exclude (segment dimension), INC-include, EXC-exclude, EQS-equal, NEQ-not equal to, RA-range.
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Filter criteria. Support the following conditions: WINC-include (segment dimension), WEXC-exclude (segment dimension), INC-include, EXC-exclude, EQS-equal, NEQ-not equal to, RA-range.
                     * @param _compare Filter criteria. Support the following conditions: WINC-include (segment dimension), WEXC-exclude (segment dimension), INC-include, EXC-exclude, EQS-equal, NEQ-not equal to, RA-range.
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取Filtered value. For reverse query, multiple values have an AND relationship. For forward query, multiple values have an OR relationship.
                     * @return Value Filtered value. For reverse query, multiple values have an AND relationship. For forward query, multiple values have an OR relationship.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Filtered value. For reverse query, multiple values have an AND relationship. For forward query, multiple values have an OR relationship.
                     * @param _value Filtered value. For reverse query, multiple values have an AND relationship. For forward query, multiple values have an OR relationship.
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Filter items.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter criteria. Support the following conditions: WINC-include (segment dimension), WEXC-exclude (segment dimension), INC-include, EXC-exclude, EQS-equal, NEQ-not equal to, RA-range.
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * Filtered value. For reverse query, multiple values have an AND relationship. For forward query, multiple values have an OR relationship.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGFILTER_H_

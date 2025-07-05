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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/LogFilters.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Definition of filter parameters of log query-related API
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field name
                     * @return Key Field name
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Field name
                     * @param _key Field name
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Operator. Values: `eq` (Equal to), `neq` (Not equal to), `like`, `not like`, `lt` (Smaller than), `lte` (Smaller than and equal to), `gt` (Greater than), `gte` (Greater than and equal to), `range` (Within the range) and `norange` (Not in the range).
                     * @return Operator Operator. Values: `eq` (Equal to), `neq` (Not equal to), `like`, `not like`, `lt` (Smaller than), `lte` (Smaller than and equal to), `gt` (Greater than), `gte` (Greater than and equal to), `range` (Within the range) and `norange` (Not in the range).
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Values: `eq` (Equal to), `neq` (Not equal to), `like`, `not like`, `lt` (Smaller than), `lte` (Smaller than and equal to), `gt` (Greater than), `gte` (Greater than and equal to), `range` (Within the range) and `norange` (Not in the range).
                     * @param _operator Operator. Values: `eq` (Equal to), `neq` (Not equal to), `like`, `not like`, `lt` (Smaller than), `lte` (Smaller than and equal to), `gt` (Greater than), `gte` (Greater than and equal to), `range` (Within the range) and `norange` (Not in the range).
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Filter value. Two values should be entered for range operation, separated by a comma (,).

                     * @return Value Filter value. Two values should be entered for range operation, separated by a comma (,).

                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Filter value. Two values should be entered for range operation, separated by a comma (,).

                     * @param _value Filter value. Two values should be entered for range operation, separated by a comma (,).

                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取The logical relationship between conditions. Values: `AND` and `OR`.
                     * @return Type The logical relationship between conditions. Values: `AND` and `OR`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The logical relationship between conditions. Values: `AND` and `OR`.
                     * @param _type The logical relationship between conditions. Values: `AND` and `OR`.
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
                     * 获取LogFilters array
                     * @return Filters LogFilters array
                     * 
                     */
                    std::vector<LogFilters> GetFilters() const;

                    /**
                     * 设置LogFilters array
                     * @param _filters LogFilters array
                     * 
                     */
                    void SetFilters(const std::vector<LogFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Field name
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Operator. Values: `eq` (Equal to), `neq` (Not equal to), `like`, `not like`, `lt` (Smaller than), `lte` (Smaller than and equal to), `gt` (Greater than), `gte` (Greater than and equal to), `range` (Within the range) and `norange` (Not in the range).
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Filter value. Two values should be entered for range operation, separated by a comma (,).

                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * The logical relationship between conditions. Values: `AND` and `OR`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * LogFilters array
                     */
                    std::vector<LogFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LOGFILTER_H_

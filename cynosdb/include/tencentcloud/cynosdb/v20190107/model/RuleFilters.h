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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULEFILTERS_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULEFILTERS_H_

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
                * Rule filter criteria for the audit rule.
                */
                class RuleFilters : public AbstractModel
                {
                public:
                    RuleFilters();
                    ~RuleFilters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name for the audit rule filter criteria. Available values: host – client IP; user – database account; dbName – database name; sqlType – SQL type; sql – SQL statement; affectRows – number of affected rows; sentRows – number of returned rows; checkRows – number of scanned rows; execTime – execution time.
                     * @return Type Parameter name for the audit rule filter criteria. Available values: host – client IP; user – database account; dbName – database name; sqlType – SQL type; sql – SQL statement; affectRows – number of affected rows; sentRows – number of returned rows; checkRows – number of scanned rows; execTime – execution time.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter name for the audit rule filter criteria. Available values: host – client IP; user – database account; dbName – database name; sqlType – SQL type; sql – SQL statement; affectRows – number of affected rows; sentRows – number of returned rows; checkRows – number of scanned rows; execTime – execution time.
                     * @param _type Parameter name for the audit rule filter criteria. Available values: host – client IP; user – database account; dbName – database name; sqlType – SQL type; sql – SQL statement; affectRows – number of affected rows; sentRows – number of returned rows; checkRows – number of scanned rows; execTime – execution time.
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
                     * 获取Match type of the audit rule filter criteria. Available values: INC – include; EXC – exclude; EQS – equal; NEQ – not equal; REG – regular; GT – greater than; LT – less than.
                     * @return Compare Match type of the audit rule filter criteria. Available values: INC – include; EXC – exclude; EQS – equal; NEQ – not equal; REG – regular; GT – greater than; LT – less than.
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Match type of the audit rule filter criteria. Available values: INC – include; EXC – exclude; EQS – equal; NEQ – not equal; REG – regular; GT – greater than; LT – less than.
                     * @param _compare Match type of the audit rule filter criteria. Available values: INC – include; EXC – exclude; EQS – equal; NEQ – not equal; REG – regular; GT – greater than; LT – less than.
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
                     * 获取Matching value of the filter criteria for the audit rule.
                     * @return Value Matching value of the filter criteria for the audit rule.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Matching value of the filter criteria for the audit rule.
                     * @param _value Matching value of the filter criteria for the audit rule.
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
                     * Parameter name for the audit rule filter criteria. Available values: host – client IP; user – database account; dbName – database name; sqlType – SQL type; sql – SQL statement; affectRows – number of affected rows; sentRows – number of returned rows; checkRows – number of scanned rows; execTime – execution time.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Match type of the audit rule filter criteria. Available values: INC – include; EXC – exclude; EQS – equal; NEQ – not equal; REG – regular; GT – greater than; LT – less than.
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * Matching value of the filter criteria for the audit rule.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULEFILTERS_H_

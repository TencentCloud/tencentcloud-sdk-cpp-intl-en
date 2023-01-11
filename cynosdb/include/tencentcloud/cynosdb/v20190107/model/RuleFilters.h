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
                * Filter of the audit rule
                */
                class RuleFilters : public AbstractModel
                {
                public:
                    RuleFilters();
                    ~RuleFilters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter parameter name of the audit rule. Valid values: `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement).
                     * @return Type Filter parameter name of the audit rule. Valid values: `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement).
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter parameter name of the audit rule. Valid values: `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement).
                     * @param Type Filter parameter name of the audit rule. Valid values: `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement).
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter match type of the audit rule. Valid values: `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to).
                     * @return Compare Filter match type of the audit rule. Valid values: `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to).
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Filter match type of the audit rule. Valid values: `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to).
                     * @param Compare Filter match type of the audit rule. Valid values: `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to).
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取Filter match value of the audit rule
                     * @return Value Filter match value of the audit rule
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Filter match value of the audit rule
                     * @param Value Filter match value of the audit rule
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Filter parameter name of the audit rule. Valid values: `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter match type of the audit rule. Valid values: `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to).
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * Filter match value of the audit rule
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULEFILTERS_H_

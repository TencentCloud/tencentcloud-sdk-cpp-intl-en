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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RULEFILTERS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RULEFILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Parameter name of the audit rule filter.  Valid values:  `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement), `affectRows` (affected rows), `sentRows` (returned rows), `checkRows` (scanned rows), `execTime` (execution rows).
                     * @return Type Parameter name of the audit rule filter.  Valid values:  `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement), `affectRows` (affected rows), `sentRows` (returned rows), `checkRows` (scanned rows), `execTime` (execution rows).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter name of the audit rule filter.  Valid values:  `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement), `affectRows` (affected rows), `sentRows` (returned rows), `checkRows` (scanned rows), `execTime` (execution rows).
                     * @param _type Parameter name of the audit rule filter.  Valid values:  `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement), `affectRows` (affected rows), `sentRows` (returned rows), `checkRows` (scanned rows), `execTime` (execution rows).
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
                     * 获取Filter match value of the audit rule Valid values:  `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to), `REG` (regex), `GT` (greater than), `LT` (less than).
                     * @return Compare Filter match value of the audit rule Valid values:  `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to), `REG` (regex), `GT` (greater than), `LT` (less than).
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Filter match value of the audit rule Valid values:  `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to), `REG` (regex), `GT` (greater than), `LT` (less than).
                     * @param _compare Filter match value of the audit rule Valid values:  `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to), `REG` (regex), `GT` (greater than), `LT` (less than).
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
                     * 获取Filter match value of the audit rule Valid values for `sqlType`: `alter`, `changeuser`, `create`, `delete`, `drop`, `execute`, `insert`, `login`, `logout`, `other`, `replace`, `select`, `set, `update`.
                     * @return Value Filter match value of the audit rule Valid values for `sqlType`: `alter`, `changeuser`, `create`, `delete`, `drop`, `execute`, `insert`, `login`, `logout`, `other`, `replace`, `select`, `set, `update`.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Filter match value of the audit rule Valid values for `sqlType`: `alter`, `changeuser`, `create`, `delete`, `drop`, `execute`, `insert`, `login`, `logout`, `other`, `replace`, `select`, `set, `update`.
                     * @param _value Filter match value of the audit rule Valid values for `sqlType`: `alter`, `changeuser`, `create`, `delete`, `drop`, `execute`, `insert`, `login`, `logout`, `other`, `replace`, `select`, `set, `update`.
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
                     * Parameter name of the audit rule filter.  Valid values:  `host` (client IP), `user` (database account), `dbName` (database name), `sqlType` (SQL type), `sql` (SQL statement), `affectRows` (affected rows), `sentRows` (returned rows), `checkRows` (scanned rows), `execTime` (execution rows).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter match value of the audit rule Valid values:  `INC` (including), `EXC` (excluding), `EQS` (equal to), `NEQ` (not equal to), `REG` (regex), `GT` (greater than), `LT` (less than).
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * Filter match value of the audit rule Valid values for `sqlType`: `alter`, `changeuser`, `create`, `delete`, `drop`, `execute`, `insert`, `login`, `logout`, `other`, `replace`, `select`, `set, `update`.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RULEFILTERS_H_

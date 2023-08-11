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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEAUDITLOGFILTERS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEAUDITLOGFILTERS_H_

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
                * Search filter for audit log
                */
                class InstanceAuditLogFilters : public AbstractModel
                {
                public:
                    InstanceAuditLogFilters();
                    ~InstanceAuditLogFilters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter condition, which is not supported for `SQL`. The search conditions are supported as follows:

`Equal to`, `Not equal to`, `Include`, and `Exclude` can be used to search for 
`host` (Client IP),
`user` (Username),
and `DBName` (Database name).

`Equal to` and `Not equal to` can be used to search for 
`sqlType`- SQL u200dtype,
`errCode` - Error code,
`threadId`- Thread ID.

Range search is supported for the fields, such as 
`execTime`- Execution time (μs),
`lockWaitTime`u200d - Lock wait time (μs),
`ioWaitTime` - IO wait time (μs),
`trxLivingTime` - Transaction duration (μs),
`cpuTime` - CPU time (μs),
`checkRows` - Number of scanned rows,
`affectRows` - Number of affected rows,
`sentRows` - Number of returned rows.
                     * @return Type Filter condition, which is not supported for `SQL`. The search conditions are supported as follows:

`Equal to`, `Not equal to`, `Include`, and `Exclude` can be used to search for 
`host` (Client IP),
`user` (Username),
and `DBName` (Database name).

`Equal to` and `Not equal to` can be used to search for 
`sqlType`- SQL u200dtype,
`errCode` - Error code,
`threadId`- Thread ID.

Range search is supported for the fields, such as 
`execTime`- Execution time (μs),
`lockWaitTime`u200d - Lock wait time (μs),
`ioWaitTime` - IO wait time (μs),
`trxLivingTime` - Transaction duration (μs),
`cpuTime` - CPU time (μs),
`checkRows` - Number of scanned rows,
`affectRows` - Number of affected rows,
`sentRows` - Number of returned rows.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter condition, which is not supported for `SQL`. The search conditions are supported as follows:

`Equal to`, `Not equal to`, `Include`, and `Exclude` can be used to search for 
`host` (Client IP),
`user` (Username),
and `DBName` (Database name).

`Equal to` and `Not equal to` can be used to search for 
`sqlType`- SQL u200dtype,
`errCode` - Error code,
`threadId`- Thread ID.

Range search is supported for the fields, such as 
`execTime`- Execution time (μs),
`lockWaitTime`u200d - Lock wait time (μs),
`ioWaitTime` - IO wait time (μs),
`trxLivingTime` - Transaction duration (μs),
`cpuTime` - CPU time (μs),
`checkRows` - Number of scanned rows,
`affectRows` - Number of affected rows,
`sentRows` - Number of returned rows.
                     * @param _type Filter condition, which is not supported for `SQL`. The search conditions are supported as follows:

`Equal to`, `Not equal to`, `Include`, and `Exclude` can be used to search for 
`host` (Client IP),
`user` (Username),
and `DBName` (Database name).

`Equal to` and `Not equal to` can be used to search for 
`sqlType`- SQL u200dtype,
`errCode` - Error code,
`threadId`- Thread ID.

Range search is supported for the fields, such as 
`execTime`- Execution time (μs),
`lockWaitTime`u200d - Lock wait time (μs),
`ioWaitTime` - IO wait time (μs),
`trxLivingTime` - Transaction duration (μs),
`cpuTime` - CPU time (μs),
`checkRows` - Number of scanned rows,
`affectRows` - Number of affected rows,
`sentRows` - Number of returned rows.
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
                     * 获取Filter, including:
`INC` - Include,
`EXC` -Exclude,
`EQS` - Equal to,
`NEQ` - Not equal to.
u200d`RA` - Range
                     * @return Compare Filter, including:
`INC` - Include,
`EXC` -Exclude,
`EQS` - Equal to,
`NEQ` - Not equal to.
u200d`RA` - Range
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Filter, including:
`INC` - Include,
`EXC` -Exclude,
`EQS` - Equal to,
`NEQ` - Not equal to.
u200d`RA` - Range
                     * @param _compare Filter, including:
`INC` - Include,
`EXC` -Exclude,
`EQS` - Equal to,
`NEQ` - Not equal to.
u200d`RA` - Range
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
                     * 获取The filter value
                     * @return Value The filter value
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置The filter value
                     * @param _value The filter value
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
                     * Filter condition, which is not supported for `SQL`. The search conditions are supported as follows:

`Equal to`, `Not equal to`, `Include`, and `Exclude` can be used to search for 
`host` (Client IP),
`user` (Username),
and `DBName` (Database name).

`Equal to` and `Not equal to` can be used to search for 
`sqlType`- SQL u200dtype,
`errCode` - Error code,
`threadId`- Thread ID.

Range search is supported for the fields, such as 
`execTime`- Execution time (μs),
`lockWaitTime`u200d - Lock wait time (μs),
`ioWaitTime` - IO wait time (μs),
`trxLivingTime` - Transaction duration (μs),
`cpuTime` - CPU time (μs),
`checkRows` - Number of scanned rows,
`affectRows` - Number of affected rows,
`sentRows` - Number of returned rows.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter, including:
`INC` - Include,
`EXC` -Exclude,
`EQS` - Equal to,
`NEQ` - Not equal to.
u200d`RA` - Range
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * The filter value
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEAUDITLOGFILTERS_H_

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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Slow log filtering
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter criterion name.

For example: sql - SQL command details

host - client IP
user - database account;
dbName – Database name;
sqlType - SQL type;
Error code

execTime - Execution time
lockWaitTime - Lock waiting time
ioWaitTime - IO wait time
trxLivingTime - Transaction execution time
Cpu time

threadId - Thread ID
trxId - Transaction ID
checkRows - Number of scanned rows
affectRows - Number of rows affected
sentRows - Number of rows returned
                     * @return Type Filter criterion name.

For example: sql - SQL command details

host - client IP
user - database account;
dbName – Database name;
sqlType - SQL type;
Error code

execTime - Execution time
lockWaitTime - Lock waiting time
ioWaitTime - IO wait time
trxLivingTime - Transaction execution time
Cpu time

threadId - Thread ID
trxId - Transaction ID
checkRows - Number of scanned rows
affectRows - Number of rows affected
sentRows - Number of rows returned
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter criterion name.

For example: sql - SQL command details

host - client IP
user - database account;
dbName – Database name;
sqlType - SQL type;
Error code

execTime - Execution time
lockWaitTime - Lock waiting time
ioWaitTime - IO wait time
trxLivingTime - Transaction execution time
Cpu time

threadId - Thread ID
trxId - Transaction ID
checkRows - Number of scanned rows
affectRows - Number of rows affected
sentRows - Number of rows returned
                     * @param _type Filter criterion name.

For example: sql - SQL command details

host - client IP
user - database account;
dbName – Database name;
sqlType - SQL type;
Error code

execTime - Execution time
lockWaitTime - Lock waiting time
ioWaitTime - IO wait time
trxLivingTime - Transaction execution time
Cpu time

threadId - Thread ID
trxId - Transaction ID
checkRows - Number of scanned rows
affectRows - Number of rows affected
sentRows - Number of rows returned
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
                     * 获取Filter condition match type. Supported:
INC – Includes (multiple values are in a || relationship before).
EXC - excluding (multiple values are in an && relationship)
EQS – equal to (multiple values before are in a || relationship).
NEQ – not equal to (multiple values are in && relationship)

RG - Range;
                     * @return Compare Filter condition match type. Supported:
INC – Includes (multiple values are in a || relationship before).
EXC - excluding (multiple values are in an && relationship)
EQS – equal to (multiple values before are in a || relationship).
NEQ – not equal to (multiple values are in && relationship)

RG - Range;
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Filter condition match type. Supported:
INC – Includes (multiple values are in a || relationship before).
EXC - excluding (multiple values are in an && relationship)
EQS – equal to (multiple values before are in a || relationship).
NEQ – not equal to (multiple values are in && relationship)

RG - Range;
                     * @param _compare Filter condition match type. Supported:
INC – Includes (multiple values are in a || relationship before).
EXC - excluding (multiple values are in an && relationship)
EQS – equal to (multiple values before are in a || relationship).
NEQ – not equal to (multiple values are in && relationship)

RG - Range;
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
                     * 获取Filter condition matching value. When Compare=RG, for example ["1-100","200-300"].
                     * @return Value Filter condition matching value. When Compare=RG, for example ["1-100","200-300"].
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Filter condition matching value. When Compare=RG, for example ["1-100","200-300"].
                     * @param _value Filter condition matching value. When Compare=RG, for example ["1-100","200-300"].
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
                     * Filter criterion name.

For example: sql - SQL command details

host - client IP
user - database account;
dbName – Database name;
sqlType - SQL type;
Error code

execTime - Execution time
lockWaitTime - Lock waiting time
ioWaitTime - IO wait time
trxLivingTime - Transaction execution time
Cpu time

threadId - Thread ID
trxId - Transaction ID
checkRows - Number of scanned rows
affectRows - Number of rows affected
sentRows - Number of rows returned
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter condition match type. Supported:
INC – Includes (multiple values are in a || relationship before).
EXC - excluding (multiple values are in an && relationship)
EQS – equal to (multiple values before are in a || relationship).
NEQ – not equal to (multiple values are in && relationship)

RG - Range;
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * Filter condition matching value. When Compare=RG, for example ["1-100","200-300"].
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_LOGFILTER_H_

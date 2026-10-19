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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITLOGFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITLOGFILTER_H_

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
                * Audit log search criteria
                */
                class InstanceAuditLogFilter : public AbstractModel
                {
                public:
                    InstanceAuditLogFilter();
                    ~InstanceAuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter item. Currently supports the following search criteria:

Includes, excludes, includes (segment dimension), excludes (segment dimension): sql - SQL detail; alarmLevel - alarm level; ruleTemplateId - rule template id

Equal to, not equal to, contains, does not contain: host - client IP address; user - userName; dbName - database name;

Equal, not equal to: sqlType - SQL type; errCode - error code; threadId - thread ID.

Range search (time type is unified to µs): execTime - execution time; lockWaitTime - execution time; ioWaitTime - IO wait time; trxLivingTime - transaction duration; cpuTime - CPU time; checkRows - scanned rows; affectRows - number of affected rows; sentRows - rows returned.
                     * @return Type Filter item. Currently supports the following search criteria:

Includes, excludes, includes (segment dimension), excludes (segment dimension): sql - SQL detail; alarmLevel - alarm level; ruleTemplateId - rule template id

Equal to, not equal to, contains, does not contain: host - client IP address; user - userName; dbName - database name;

Equal, not equal to: sqlType - SQL type; errCode - error code; threadId - thread ID.

Range search (time type is unified to µs): execTime - execution time; lockWaitTime - execution time; ioWaitTime - IO wait time; trxLivingTime - transaction duration; cpuTime - CPU time; checkRows - scanned rows; affectRows - number of affected rows; sentRows - rows returned.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter item. Currently supports the following search criteria:

Includes, excludes, includes (segment dimension), excludes (segment dimension): sql - SQL detail; alarmLevel - alarm level; ruleTemplateId - rule template id

Equal to, not equal to, contains, does not contain: host - client IP address; user - userName; dbName - database name;

Equal, not equal to: sqlType - SQL type; errCode - error code; threadId - thread ID.

Range search (time type is unified to µs): execTime - execution time; lockWaitTime - execution time; ioWaitTime - IO wait time; trxLivingTime - transaction duration; cpuTime - CPU time; checkRows - scanned rows; affectRows - number of affected rows; sentRows - rows returned.
                     * @param _type Filter item. Currently supports the following search criteria:

Includes, excludes, includes (segment dimension), excludes (segment dimension): sql - SQL detail; alarmLevel - alarm level; ruleTemplateId - rule template id

Equal to, not equal to, contains, does not contain: host - client IP address; user - userName; dbName - database name;

Equal, not equal to: sqlType - SQL type; errCode - error code; threadId - thread ID.

Range search (time type is unified to µs): execTime - execution time; lockWaitTime - execution time; ioWaitTime - IO wait time; trxLivingTime - transaction duration; cpuTime - CPU time; checkRows - scanned rows; affectRows - number of affected rows; sentRows - rows returned.
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
                     * 获取Filter criteria. The following conditions are supported:
WINC-Contains (segment dimension)
WEXC - Excluding (segment dimension)
INC - included
EXC - Excluding
EQS - equal to
NEQ - not equal to
RA - Range.
                     * @return Compare Filter criteria. The following conditions are supported:
WINC-Contains (segment dimension)
WEXC - Excluding (segment dimension)
INC - included
EXC - Excluding
EQS - equal to
NEQ - not equal to
RA - Range.
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Filter criteria. The following conditions are supported:
WINC-Contains (segment dimension)
WEXC - Excluding (segment dimension)
INC - included
EXC - Excluding
EQS - equal to
NEQ - not equal to
RA - Range.
                     * @param _compare Filter criteria. The following conditions are supported:
WINC-Contains (segment dimension)
WEXC - Excluding (segment dimension)
INC - included
EXC - Excluding
EQS - equal to
NEQ - not equal to
RA - Range.
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
                     * 获取Filtered value. In reverse query, multiple values have an AND relationship. In forward query, multiple values have an OR relationship.
                     * @return Value Filtered value. In reverse query, multiple values have an AND relationship. In forward query, multiple values have an OR relationship.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Filtered value. In reverse query, multiple values have an AND relationship. In forward query, multiple values have an OR relationship.
                     * @param _value Filtered value. In reverse query, multiple values have an AND relationship. In forward query, multiple values have an OR relationship.
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
                     * Filter item. Currently supports the following search criteria:

Includes, excludes, includes (segment dimension), excludes (segment dimension): sql - SQL detail; alarmLevel - alarm level; ruleTemplateId - rule template id

Equal to, not equal to, contains, does not contain: host - client IP address; user - userName; dbName - database name;

Equal, not equal to: sqlType - SQL type; errCode - error code; threadId - thread ID.

Range search (time type is unified to µs): execTime - execution time; lockWaitTime - execution time; ioWaitTime - IO wait time; trxLivingTime - transaction duration; cpuTime - CPU time; checkRows - scanned rows; affectRows - number of affected rows; sentRows - rows returned.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter criteria. The following conditions are supported:
WINC-Contains (segment dimension)
WEXC - Excluding (segment dimension)
INC - included
EXC - Excluding
EQS - equal to
NEQ - not equal to
RA - Range.
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * Filtered value. In reverse query, multiple values have an AND relationship. In forward query, multiple values have an OR relationship.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITLOGFILTER_H_

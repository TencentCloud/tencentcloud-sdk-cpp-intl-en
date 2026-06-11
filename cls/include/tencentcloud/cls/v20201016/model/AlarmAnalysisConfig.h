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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMANALYSISCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMANALYSISCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Alarm configuration for the multidimensional analysis
                */
                class AlarmAnalysisConfig : public AbstractModel
                {
                public:
                    AlarmAnalysisConfig();
                    ~AlarmAnalysisConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Keys. The following keys are supported:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * @return Key Keys. The following keys are supported:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Keys. The following keys are supported:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * @param _key Keys. The following keys are supported:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
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
                     * 获取Value.
Key corresponds to the following values:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * @return Value Value.
Key corresponds to the following values:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value.
Key corresponds to the following values:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * @param _value Value.
Key corresponds to the following values:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Keys. The following keys are supported:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value.
Key corresponds to the following values:
SyntaxRule: Syntax rule, value supports 0: Lucene syntax; 1: CQL syntax.
QueryIndex: Serial number of execution statement. value supports -1: custom; 1: execution statement 1; 2: execution statement 2.
CustomQuery: Query statement. Required and valid when QueryIndex is -1. Example of value: "* | select count(*) as count".
Fields: field. value supports __SOURCE__, __FILENAME__, __HOSTNAME__, __TIMESTAMP__, __INDEX_STATUS__, __PKG_LOGID__, __TOPIC__.
Format: Display Format. value supports 1: one log per line; 2: one field per line for each log entry.
Limit: Maximum number of logs. Example of value: 5.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMANALYSISCONFIG_H_

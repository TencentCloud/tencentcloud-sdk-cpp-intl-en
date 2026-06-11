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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AlarmAnalysisConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Multi-Dimensional analysis dimension
                */
                class AnalysisDimensional : public AbstractModel
                {
                public:
                    AnalysisDimensional();
                    ~AnalysisDimensional() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Analysis Name
                     * @return Name Analysis Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Analysis Name
                     * @param _name Analysis Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Analysis type: query (custom retrieval and analysis), field (TOP5 fields and proportion statistics), original (related raw logs)

                     * @return Type Analysis type: query (custom retrieval and analysis), field (TOP5 fields and proportion statistics), original (related raw logs)

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Analysis type: query (custom retrieval and analysis), field (TOP5 fields and proportion statistics), original (related raw logs)

                     * @param _type Analysis type: query (custom retrieval and analysis), field (TOP5 fields and proportion statistics), original (related raw logs)

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
                     * 获取Analysis content
                     * @return Content Analysis content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Analysis content
                     * @param _content Analysis content
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Multi-dimensional analysis configuration.

When the Type field of Analysis is query (custom), support
{
"Key": "SyntaxRule",  // Syntax rule
"Value": "1"  //0: Lucene syntax, 1: CQL syntax
}

When the Type field of Analysis is field (top5), it supports
 {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", //Query statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (raw log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", // Retrieval statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "Format", //Display format. 1: one log per line, 2: one field per line for each log entry
    "Value": "2"
},
{
"Key": "Limit", //Maximum number of logs
    "Value": "5"
},{
"Key": "SyntaxRule", // If this field is not found, it's also the old syntax
    "Value": "0"//0:Lucene, 1:CQL
}
                     * @return ConfigInfo Multi-dimensional analysis configuration.

When the Type field of Analysis is query (custom), support
{
"Key": "SyntaxRule",  // Syntax rule
"Value": "1"  //0: Lucene syntax, 1: CQL syntax
}

When the Type field of Analysis is field (top5), it supports
 {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", //Query statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (raw log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", // Retrieval statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "Format", //Display format. 1: one log per line, 2: one field per line for each log entry
    "Value": "2"
},
{
"Key": "Limit", //Maximum number of logs
    "Value": "5"
},{
"Key": "SyntaxRule", // If this field is not found, it's also the old syntax
    "Value": "0"//0:Lucene, 1:CQL
}
                     * 
                     */
                    std::vector<AlarmAnalysisConfig> GetConfigInfo() const;

                    /**
                     * 设置Multi-dimensional analysis configuration.

When the Type field of Analysis is query (custom), support
{
"Key": "SyntaxRule",  // Syntax rule
"Value": "1"  //0: Lucene syntax, 1: CQL syntax
}

When the Type field of Analysis is field (top5), it supports
 {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", //Query statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (raw log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", // Retrieval statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "Format", //Display format. 1: one log per line, 2: one field per line for each log entry
    "Value": "2"
},
{
"Key": "Limit", //Maximum number of logs
    "Value": "5"
},{
"Key": "SyntaxRule", // If this field is not found, it's also the old syntax
    "Value": "0"//0:Lucene, 1:CQL
}
                     * @param _configInfo Multi-dimensional analysis configuration.

When the Type field of Analysis is query (custom), support
{
"Key": "SyntaxRule",  // Syntax rule
"Value": "1"  //0: Lucene syntax, 1: CQL syntax
}

When the Type field of Analysis is field (top5), it supports
 {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", //Query statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (raw log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", // Retrieval statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "Format", //Display format. 1: one log per line, 2: one field per line for each log entry
    "Value": "2"
},
{
"Key": "Limit", //Maximum number of logs
    "Value": "5"
},{
"Key": "SyntaxRule", // If this field is not found, it's also the old syntax
    "Value": "0"//0:Lucene, 1:CQL
}
                     * 
                     */
                    void SetConfigInfo(const std::vector<AlarmAnalysisConfig>& _configInfo);

                    /**
                     * 判断参数 ConfigInfo 是否已赋值
                     * @return ConfigInfo 是否已赋值
                     * 
                     */
                    bool ConfigInfoHasBeenSet() const;

                private:

                    /**
                     * Analysis Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Analysis type: query (custom retrieval and analysis), field (TOP5 fields and proportion statistics), original (related raw logs)

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Analysis content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Multi-dimensional analysis configuration.

When the Type field of Analysis is query (custom), support
{
"Key": "SyntaxRule",  // Syntax rule
"Value": "1"  //0: Lucene syntax, 1: CQL syntax
}

When the Type field of Analysis is field (top5), it supports
 {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", //Query statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (raw log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute statement 1, 2: Execute statement 2
},{
"Key": "CustomQuery", // Retrieval statement. Required and valid when QueryIndex is -1.
    "Value": "* | select count(*) as count"
},{
"Key": "Format", //Display format. 1: one log per line, 2: one field per line for each log entry
    "Value": "2"
},
{
"Key": "Limit", //Maximum number of logs
    "Value": "5"
},{
"Key": "SyntaxRule", // If this field is not found, it's also the old syntax
    "Value": "0"//0:Lucene, 1:CQL
}
                     */
                    std::vector<AlarmAnalysisConfig> m_configInfo;
                    bool m_configInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_

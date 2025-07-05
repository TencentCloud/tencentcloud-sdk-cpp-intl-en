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
                     * 获取Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
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

Supported when the type field of Analysis is query (custom){
"Key": "SyntaxRule", // Syntax rules"Value": "1" // 0: Lucene syntax, 1: CQL syntax}

Supported when the Type field of Analysis is field (top5) {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (original log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // //Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "Format", // Display format. 1: One log per line, 2: One field per line for each log    "Value": "2"
},
{
"Key": "Limit", // Maximum number of logs    "Value": "5"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's considered the legacy syntax
    "Value": "0"//0:Lucene, 1:CQL
}
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigInfo Multi-dimensional analysis configuration.

Supported when the type field of Analysis is query (custom){
"Key": "SyntaxRule", // Syntax rules"Value": "1" // 0: Lucene syntax, 1: CQL syntax}

Supported when the Type field of Analysis is field (top5) {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (original log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // //Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "Format", // Display format. 1: One log per line, 2: One field per line for each log    "Value": "2"
},
{
"Key": "Limit", // Maximum number of logs    "Value": "5"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's considered the legacy syntax
    "Value": "0"//0:Lucene, 1:CQL
}
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AlarmAnalysisConfig> GetConfigInfo() const;

                    /**
                     * 设置Multi-dimensional analysis configuration.

Supported when the type field of Analysis is query (custom){
"Key": "SyntaxRule", // Syntax rules"Value": "1" // 0: Lucene syntax, 1: CQL syntax}

Supported when the Type field of Analysis is field (top5) {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (original log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // //Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "Format", // Display format. 1: One log per line, 2: One field per line for each log    "Value": "2"
},
{
"Key": "Limit", // Maximum number of logs    "Value": "5"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's considered the legacy syntax
    "Value": "0"//0:Lucene, 1:CQL
}
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configInfo Multi-dimensional analysis configuration.

Supported when the type field of Analysis is query (custom){
"Key": "SyntaxRule", // Syntax rules"Value": "1" // 0: Lucene syntax, 1: CQL syntax}

Supported when the Type field of Analysis is field (top5) {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (original log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // //Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "Format", // Display format. 1: One log per line, 2: One field per line for each log    "Value": "2"
},
{
"Key": "Limit", // Maximum number of logs    "Value": "5"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's considered the legacy syntax
    "Value": "0"//0:Lucene, 1:CQL
}
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Analysis name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of data being analyzed. Valid values: `query`, `field`, `original`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Analysis content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Multi-dimensional analysis configuration.

Supported when the type field of Analysis is query (custom){
"Key": "SyntaxRule", // Syntax rules"Value": "1" // 0: Lucene syntax, 1: CQL syntax}

Supported when the Type field of Analysis is field (top5) {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's assumed to be the legacy syntax (Lucene)
    "Value": "0"//0:Lucene, 1:CQL
}       

When the Type field of Analysis is original (original log), it supports
{
    "Key": "Fields",
    "Value": "__SOURCE__,__HOSTNAME__,__TIMESTAMP__,__PKG_LOGID__,__TAG__.pod_ip"
}, {
    "Key": "QueryIndex",
"Value": "-1" // -1: Custom, 1: Execute Statement 1, 2: Execute Statement 2},{
"Key": "CustomQuery", // //Search statement. Valid and required when QueryIndex is -1    "Value": "* | select count(*) as count"
},{
"Key": "Format", // Display format. 1: One log per line, 2: One field per line for each log    "Value": "2"
},
{
"Key": "Limit", // Maximum number of logs    "Value": "5"
},{
"Key": "SyntaxRule", // If this field cannot be found, it's considered the legacy syntax
    "Value": "0"//0:Lucene, 1:CQL
}
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmAnalysisConfig> m_configInfo;
                    bool m_configInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ANALYSISDIMENSIONAL_H_

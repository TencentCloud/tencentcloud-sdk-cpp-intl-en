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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYSQLEXPRESSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYSQLEXPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualitySqlExpressionTable.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * sql expression parsing object for data quality custom rules.
                */
                class QualitySqlExpression : public AbstractModel
                {
                public:
                    QualitySqlExpression();
                    ~QualitySqlExpression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sql expression table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableExpressions sql expression table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QualitySqlExpressionTable> GetTableExpressions() const;

                    /**
                     * 设置sql expression table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableExpressions sql expression table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableExpressions(const std::vector<QualitySqlExpressionTable>& _tableExpressions);

                    /**
                     * 判断参数 TableExpressions 是否已赋值
                     * @return TableExpressions 是否已赋值
                     * 
                     */
                    bool TableExpressionsHasBeenSet() const;

                    /**
                     * 获取sql expression field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamExpressions sql expression field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetParamExpressions() const;

                    /**
                     * 设置sql expression field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramExpressions sql expression field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamExpressions(const std::vector<std::string>& _paramExpressions);

                    /**
                     * 判断参数 ParamExpressions 是否已赋值
                     * @return ParamExpressions 是否已赋值
                     * 
                     */
                    bool ParamExpressionsHasBeenSet() const;

                    /**
                     * 获取Add model detection class system template sql placeholder collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SystemTemplateExpressions Add model detection class system template sql placeholder collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSystemTemplateExpressions() const;

                    /**
                     * 设置Add model detection class system template sql placeholder collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _systemTemplateExpressions Add model detection class system template sql placeholder collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemTemplateExpressions(const std::vector<std::string>& _systemTemplateExpressions);

                    /**
                     * 判断参数 SystemTemplateExpressions 是否已赋值
                     * @return SystemTemplateExpressions 是否已赋值
                     * 
                     */
                    bool SystemTemplateExpressionsHasBeenSet() const;

                private:

                    /**
                     * sql expression table name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QualitySqlExpressionTable> m_tableExpressions;
                    bool m_tableExpressionsHasBeenSet;

                    /**
                     * sql expression field name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_paramExpressions;
                    bool m_paramExpressionsHasBeenSet;

                    /**
                     * Add model detection class system template sql placeholder collection.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_systemTemplateExpressions;
                    bool m_systemTemplateExpressionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYSQLEXPRESSION_H_

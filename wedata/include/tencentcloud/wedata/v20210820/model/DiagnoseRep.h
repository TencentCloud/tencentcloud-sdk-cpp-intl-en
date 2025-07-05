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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DIAGNOSEREP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DIAGNOSEREP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Content.h>
#include <tencentcloud/wedata/v20210820/model/Table.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DiagnoseRep
                */
                class DiagnoseRep : public AbstractModel
                {
                public:
                    DiagnoseRep();
                    ~DiagnoseRep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Diagnostic information content
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Content Diagnostic information content
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    Content GetContent() const;

                    /**
                     * 设置Diagnostic information content
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _content Diagnostic information content
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetContent(const Content& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取List of diagnostic result-related information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Table List of diagnostic result-related information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    Table GetTable() const;

                    /**
                     * 设置List of diagnostic result-related information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _table List of diagnostic result-related information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTable(const Table& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * Diagnostic information content
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    Content m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * List of diagnostic result-related information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    Table m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DIAGNOSEREP_H_

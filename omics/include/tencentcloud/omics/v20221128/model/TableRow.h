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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_TABLEROW_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_TABLEROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Table row
                */
                class TableRow : public AbstractModel
                {
                public:
                    TableRow();
                    ~TableRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table row UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableRowUuid Table row UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTableRowUuid() const;

                    /**
                     * 设置Table row UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tableRowUuid Table row UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTableRowUuid(const std::string& _tableRowUuid);

                    /**
                     * 判断参数 TableRowUuid 是否已赋值
                     * @return TableRowUuid 是否已赋值
                     * 
                     */
                    bool TableRowUuidHasBeenSet() const;

                    /**
                     * 获取Table row content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content Table row content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置Table row content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content Table row content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Table row UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tableRowUuid;
                    bool m_tableRowUuidHasBeenSet;

                    /**
                     * Table row content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_TABLEROW_H_

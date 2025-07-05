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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_TABLECOLUMN_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_TABLECOLUMN_H_

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
                * Table column
                */
                class TableColumn : public AbstractModel
                {
                public:
                    TableColumn();
                    ~TableColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Header Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHeader() const;

                    /**
                     * 设置Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _header Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeader(const std::string& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取Column data type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataType Column data type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置Column data type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataType Column data type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * Column name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * Column data type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_TABLECOLUMN_H_

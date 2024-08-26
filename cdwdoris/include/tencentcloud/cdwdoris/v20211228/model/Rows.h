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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ROWS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ROWS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Multiple rows of data
                */
                class Rows : public AbstractModel
                {
                public:
                    Rows();
                    ~Rows() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取A row of data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataRow A row of data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDataRow() const;

                    /**
                     * 设置A row of data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataRow A row of data
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataRow(const std::vector<std::string>& _dataRow);

                    /**
                     * 判断参数 DataRow 是否已赋值
                     * @return DataRow 是否已赋值
                     * 
                     */
                    bool DataRowHasBeenSet() const;

                private:

                    /**
                     * A row of data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dataRow;
                    bool m_dataRowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ROWS_H_

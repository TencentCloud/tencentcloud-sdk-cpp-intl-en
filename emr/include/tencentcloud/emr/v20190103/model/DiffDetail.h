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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DiffDetailItem.h>
#include <tencentcloud/emr/v20190103/model/DiffHeader.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Dynamically generated change details.
                */
                class DiffDetail : public AbstractModel
                {
                public:
                    DiffDetail();
                    ~DiffDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tab page header.
                     * @return Name Tab page header.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tab page header.
                     * @param _name Tab page header.
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
                     * 获取Number of change items.
                     * @return Count Number of change items.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of change items.
                     * @param _count Number of change items.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Detailed data to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rows Detailed data to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiffDetailItem> GetRows() const;

                    /**
                     * 设置Detailed data to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rows Detailed data to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRows(const std::vector<DiffDetailItem>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取Header information to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Header Header information to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DiffHeader> GetHeader() const;

                    /**
                     * 设置Header information to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _header Header information to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHeader(const std::vector<DiffHeader>& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                private:

                    /**
                     * Tab page header.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of change items.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Detailed data to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiffDetailItem> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * Header information to be rendered.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DiffHeader> m_header;
                    bool m_headerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAIL_H_

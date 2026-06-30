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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_ROWVALUES_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_ROWVALUES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Two-dimensional array of SeriesInfo type
                */
                class RowValues : public AbstractModel
                {
                public:
                    RowValues();
                    ~RowValues() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RowValue Data value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetRowValue() const;

                    /**
                     * 设置Data value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rowValue Data value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRowValue(const std::vector<int64_t>& _rowValue);

                    /**
                     * 判断参数 RowValue 是否已赋值
                     * @return RowValue 是否已赋值
                     * 
                     */
                    bool RowValueHasBeenSet() const;

                    /**
                     * 获取Data value.
                     * @return RowValueFloat Data value.
                     * 
                     */
                    std::vector<double> GetRowValueFloat() const;

                    /**
                     * 设置Data value.
                     * @param _rowValueFloat Data value.
                     * 
                     */
                    void SetRowValueFloat(const std::vector<double>& _rowValueFloat);

                    /**
                     * 判断参数 RowValueFloat 是否已赋值
                     * @return RowValueFloat 是否已赋值
                     * 
                     */
                    bool RowValueFloatHasBeenSet() const;

                private:

                    /**
                     * Data value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_rowValue;
                    bool m_rowValueHasBeenSet;

                    /**
                     * Data value.
                     */
                    std::vector<double> m_rowValueFloat;
                    bool m_rowValueFloatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_ROWVALUES_H_

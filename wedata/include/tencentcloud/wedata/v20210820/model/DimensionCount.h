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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONCOUNT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Dimension statistical business view
                */
                class DimensionCount : public AbstractModel
                {
                public:
                    DimensionCount();
                    ~DimensionCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DimType Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @deprecated
                     */
                    uint64_t GetDimType() const;

                    /**
                     * 设置Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dimType Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @deprecated
                     */
                    void SetDimType(const uint64_t& _dimType);

                    /**
                     * 判断参数 DimType 是否已赋值
                     * @return DimType 是否已赋值
                     * @deprecated
                     */
                    bool DimTypeHasBeenSet() const;

                    /**
                     * 获取Statistics value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Count Statistics value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Statistics value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _count Statistics value
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return QualityDim Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _qualityDim Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQualityDim(const uint64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     * 
                     */
                    bool QualityDimHasBeenSet() const;

                private:

                    /**
                     * Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_dimType;
                    bool m_dimTypeHasBeenSet;

                    /**
                     * Statistics value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Dimension types 1: Accuracy, 2: Uniqueness, 3: Completeness, 4: Consistency, 5: Timeliness, 6: Validity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONCOUNT_H_

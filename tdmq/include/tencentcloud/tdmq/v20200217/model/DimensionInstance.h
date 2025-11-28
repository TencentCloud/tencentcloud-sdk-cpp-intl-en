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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DIMENSIONINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DIMENSIONINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/DimensionOpt.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Array of instance dimension combinations
                */
                class DimensionInstance : public AbstractModel
                {
                public:
                    DimensionInstance();
                    ~DimensionInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension Combination of Instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Dimensions Dimension Combination of Instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DimensionOpt> GetDimensions() const;

                    /**
                     * 设置Dimension Combination of Instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dimensions Dimension Combination of Instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDimensions(const std::vector<DimensionOpt>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * Dimension Combination of Instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DimensionOpt> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DIMENSIONINSTANCE_H_

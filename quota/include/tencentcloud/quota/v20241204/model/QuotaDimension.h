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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_QUOTADIMENSION_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_QUOTADIMENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * Quota dimension
                */
                class QuotaDimension : public AbstractModel
                {
                public:
                    QuotaDimension();
                    ~QuotaDimension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DimensionName Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dimensionName Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDimensionName(const std::string& _dimensionName);

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                    /**
                     * 获取Dimension value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrimaryValue Dimension value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrimaryValue() const;

                    /**
                     * 设置Dimension value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _primaryValue Dimension value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrimaryValue(const std::string& _primaryValue);

                    /**
                     * 判断参数 PrimaryValue 是否已赋值
                     * @return PrimaryValue 是否已赋值
                     * 
                     */
                    bool PrimaryValueHasBeenSet() const;

                private:

                    /**
                     * Quota dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * Dimension value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_primaryValue;
                    bool m_primaryValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_QUOTADIMENSION_H_

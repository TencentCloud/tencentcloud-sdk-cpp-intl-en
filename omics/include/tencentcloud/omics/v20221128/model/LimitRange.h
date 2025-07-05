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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_LIMITRANGE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_LIMITRANGE_H_

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
                * Resource limit scope
                */
                class LimitRange : public AbstractModel
                {
                public:
                    LimitRange();
                    ~LimitRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum CPU setting
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxCPU Maximum CPU setting
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMaxCPU() const;

                    /**
                     * 设置Maximum CPU setting
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxCPU Maximum CPU setting
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxCPU(const std::string& _maxCPU);

                    /**
                     * 判断参数 MaxCPU 是否已赋值
                     * @return MaxCPU 是否已赋值
                     * 
                     */
                    bool MaxCPUHasBeenSet() const;

                    /**
                     * 获取Maximum memory setting (unit: Mi, Gi, Ti, M, G, and T)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxMemory Maximum memory setting (unit: Mi, Gi, Ti, M, G, and T)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMaxMemory() const;

                    /**
                     * 设置Maximum memory setting (unit: Mi, Gi, Ti, M, G, and T)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxMemory Maximum memory setting (unit: Mi, Gi, Ti, M, G, and T)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxMemory(const std::string& _maxMemory);

                    /**
                     * 判断参数 MaxMemory 是否已赋值
                     * @return MaxMemory 是否已赋值
                     * 
                     */
                    bool MaxMemoryHasBeenSet() const;

                private:

                    /**
                     * Maximum CPU setting
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_maxCPU;
                    bool m_maxCPUHasBeenSet;

                    /**
                     * Maximum memory setting (unit: Mi, Gi, Ti, M, G, and T)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_maxMemory;
                    bool m_maxMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_LIMITRANGE_H_

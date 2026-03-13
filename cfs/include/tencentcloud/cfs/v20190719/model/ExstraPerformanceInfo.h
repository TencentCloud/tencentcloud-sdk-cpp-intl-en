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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_EXSTRAPERFORMANCEINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_EXSTRAPERFORMANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Value after purchasing additional performance.
                */
                class ExstraPerformanceInfo : public AbstractModel
                {
                public:
                    ExstraPerformanceInfo();
                    ~ExstraPerformanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fixed: final value is fixed.
                     * @return Type Fixed: final value is fixed.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Fixed: final value is fixed.
                     * @param _type Fixed: final value is fixed.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Additional purchase CFS performance value in MB/s.
                     * @return Performance Additional purchase CFS performance value in MB/s.
                     * 
                     */
                    int64_t GetPerformance() const;

                    /**
                     * 设置Additional purchase CFS performance value in MB/s.
                     * @param _performance Additional purchase CFS performance value in MB/s.
                     * 
                     */
                    void SetPerformance(const int64_t& _performance);

                    /**
                     * 判断参数 Performance 是否已赋值
                     * @return Performance 是否已赋值
                     * 
                     */
                    bool PerformanceHasBeenSet() const;

                private:

                    /**
                     * Fixed: final value is fixed.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Additional purchase CFS performance value in MB/s.
                     */
                    int64_t m_performance;
                    bool m_performanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_EXSTRAPERFORMANCEINFO_H_

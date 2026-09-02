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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPFILESIZERANGE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPFILESIZERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * File size limit interval, in bytes; if Min/Max is 0, it means no limit on that side.
                */
                class TrafficSandboxDLPFileSizeRange : public AbstractModel
                {
                public:
                    TrafficSandboxDLPFileSizeRange();
                    ~TrafficSandboxDLPFileSizeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Lower limit in bytes. 0 means no lower limit.
                     * @return Min Lower limit in bytes. 0 means no lower limit.
                     * 
                     */
                    uint64_t GetMin() const;

                    /**
                     * 设置Lower limit in bytes. 0 means no lower limit.
                     * @param _min Lower limit in bytes. 0 means no lower limit.
                     * 
                     */
                    void SetMin(const uint64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Capacity limit in bytes. 0 means unlimited.
                     * @return Max Capacity limit in bytes. 0 means unlimited.
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置Capacity limit in bytes. 0 means unlimited.
                     * @param _max Capacity limit in bytes. 0 means unlimited.
                     * 
                     */
                    void SetMax(const uint64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * Lower limit in bytes. 0 means no lower limit.
                     */
                    uint64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Capacity limit in bytes. 0 means unlimited.
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPFILESIZERANGE_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DETECTTYPECOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DETECTTYPECOUNT_H_

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
                * Number of policies corresponding to the EDR detection method.
                */
                class DetectTypeCount : public AbstractModel
                {
                public:
                    DetectTypeCount();
                    ~DetectTypeCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detection mode. 0: host detection. 1: network detection</p>
                     * @return DetectType <p>Detection mode. 0: host detection. 1: network detection</p>
                     * 
                     */
                    int64_t GetDetectType() const;

                    /**
                     * 设置<p>Detection mode. 0: host detection. 1: network detection</p>
                     * @param _detectType <p>Detection mode. 0: host detection. 1: network detection</p>
                     * 
                     */
                    void SetDetectType(const int64_t& _detectType);

                    /**
                     * 判断参数 DetectType 是否已赋值
                     * @return DetectType 是否已赋值
                     * 
                     */
                    bool DetectTypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy count</p>
                     * @return Count <p>Policy count</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>Policy count</p>
                     * @param _count <p>Policy count</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * <p>Detection mode. 0: host detection. 1: network detection</p>
                     */
                    int64_t m_detectType;
                    bool m_detectTypeHasBeenSet;

                    /**
                     * <p>Policy count</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DETECTTYPECOUNT_H_

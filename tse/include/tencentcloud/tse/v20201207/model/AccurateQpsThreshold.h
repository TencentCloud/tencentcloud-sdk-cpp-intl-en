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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ACCURATEQPSTHRESHOLD_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ACCURATEQPSTHRESHOLD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-native gateway traffic throttling plugin parameter throttling precise Qps threshold
                */
                class AccurateQpsThreshold : public AbstractModel
                {
                public:
                    AccurateQpsThreshold();
                    ~AccurateQpsThreshold() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取qps threshold control dimension, including: second, minute, hour, day, month, year.
                     * @return Unit qps threshold control dimension, including: second, minute, hour, day, month, year.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置qps threshold control dimension, including: second, minute, hour, day, month, year.
                     * @param _unit qps threshold control dimension, including: second, minute, hour, day, month, year.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Global configuration ID
                     * @return GlobalConfigId Global configuration ID
                     * 
                     */
                    std::string GetGlobalConfigId() const;

                    /**
                     * 设置Global configuration ID
                     * @param _globalConfigId Global configuration ID
                     * 
                     */
                    void SetGlobalConfigId(const std::string& _globalConfigId);

                    /**
                     * 判断参数 GlobalConfigId 是否已赋值
                     * @return GlobalConfigId 是否已赋值
                     * 
                     */
                    bool GlobalConfigIdHasBeenSet() const;

                private:

                    /**
                     * qps threshold control dimension, including: second, minute, hour, day, month, year.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Global configuration ID
                     */
                    std::string m_globalConfigId;
                    bool m_globalConfigIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ACCURATEQPSTHRESHOLD_H_

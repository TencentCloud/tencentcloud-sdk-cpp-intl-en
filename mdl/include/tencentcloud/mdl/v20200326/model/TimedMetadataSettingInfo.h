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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATASETTINGINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATASETTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Transparent transmission of ID3 information configuration.
                */
                class TimedMetadataSettingInfo : public AbstractModel
                {
                public:
                    TimedMetadataSettingInfo();
                    ~TimedMetadataSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to transparently transmit ID3 information, optional values: 0:NO_PASSTHROUGH, 1:PASSTHROUGH, default 0.
                     * @return Behavior Whether to transparently transmit ID3 information, optional values: 0:NO_PASSTHROUGH, 1:PASSTHROUGH, default 0.
                     * 
                     */
                    uint64_t GetBehavior() const;

                    /**
                     * 设置Whether to transparently transmit ID3 information, optional values: 0:NO_PASSTHROUGH, 1:PASSTHROUGH, default 0.
                     * @param _behavior Whether to transparently transmit ID3 information, optional values: 0:NO_PASSTHROUGH, 1:PASSTHROUGH, default 0.
                     * 
                     */
                    void SetBehavior(const uint64_t& _behavior);

                    /**
                     * 判断参数 Behavior 是否已赋值
                     * @return Behavior 是否已赋值
                     * 
                     */
                    bool BehaviorHasBeenSet() const;

                private:

                    /**
                     * Whether to transparently transmit ID3 information, optional values: 0:NO_PASSTHROUGH, 1:PASSTHROUGH, default 0.
                     */
                    uint64_t m_behavior;
                    bool m_behaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATASETTINGINFO_H_

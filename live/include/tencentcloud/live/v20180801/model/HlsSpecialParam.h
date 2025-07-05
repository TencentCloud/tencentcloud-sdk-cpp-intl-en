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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_HLSSPECIALPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_HLSSPECIALPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * HLS-specific recording parameter
                */
                class HlsSpecialParam : public AbstractModel
                {
                public:
                    HlsSpecialParam();
                    ~HlsSpecialParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timeout period for restarting an interrupted HLS push.
Value range: [0, 1,800].
                     * @return FlowContinueDuration Timeout period for restarting an interrupted HLS push.
Value range: [0, 1,800].
                     * 
                     */
                    uint64_t GetFlowContinueDuration() const;

                    /**
                     * 设置Timeout period for restarting an interrupted HLS push.
Value range: [0, 1,800].
                     * @param _flowContinueDuration Timeout period for restarting an interrupted HLS push.
Value range: [0, 1,800].
                     * 
                     */
                    void SetFlowContinueDuration(const uint64_t& _flowContinueDuration);

                    /**
                     * 判断参数 FlowContinueDuration 是否已赋值
                     * @return FlowContinueDuration 是否已赋值
                     * 
                     */
                    bool FlowContinueDurationHasBeenSet() const;

                private:

                    /**
                     * Timeout period for restarting an interrupted HLS push.
Value range: [0, 1,800].
                     */
                    uint64_t m_flowContinueDuration;
                    bool m_flowContinueDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_HLSSPECIALPARAM_H_

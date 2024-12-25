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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * HLS configuration parameters
                */
                class HLSConfigureInfo : public AbstractModel
                {
                public:
                    HLSConfigureInfo();
                    ~HLSConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duration of a single TS file in seconds. Value range: 5-30 seconds.

If this parameter is left empty, 30 seconds will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ItemDuration Duration of a single TS file in seconds. Value range: 5-30 seconds.

If this parameter is left empty, 30 seconds will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetItemDuration() const;

                    /**
                     * 设置Duration of a single TS file in seconds. Value range: 5-30 seconds.

If this parameter is left empty, 30 seconds will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _itemDuration Duration of a single TS file in seconds. Value range: 5-30 seconds.

If this parameter is left empty, 30 seconds will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetItemDuration(const int64_t& _itemDuration);

                    /**
                     * 判断参数 ItemDuration 是否已赋值
                     * @return ItemDuration 是否已赋值
                     * 
                     */
                    bool ItemDurationHasBeenSet() const;

                    /**
                     * 获取Recording cycle in seconds. Value range: 10 minutes to 12 hours.

If this parameter is left empty, 10 minutes (3600 seconds) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Interval Recording cycle in seconds. Value range: 10 minutes to 12 hours.

If this parameter is left empty, 10 minutes (3600 seconds) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Recording cycle in seconds. Value range: 10 minutes to 12 hours.

If this parameter is left empty, 10 minutes (3600 seconds) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _interval Recording cycle in seconds. Value range: 10 minutes to 12 hours.

If this parameter is left empty, 10 minutes (3600 seconds) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Resume recording waiting time, unit: seconds. Value range: 60-1800 seconds.
If this parameter is left empty, 0 (resume recording not enabled) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ContinueTimeout Resume recording waiting time, unit: seconds. Value range: 60-1800 seconds.
If this parameter is left empty, 0 (resume recording not enabled) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetContinueTimeout() const;

                    /**
                     * 设置Resume recording waiting time, unit: seconds. Value range: 60-1800 seconds.
If this parameter is left empty, 0 (resume recording not enabled) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _continueTimeout Resume recording waiting time, unit: seconds. Value range: 60-1800 seconds.
If this parameter is left empty, 0 (resume recording not enabled) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetContinueTimeout(const int64_t& _continueTimeout);

                    /**
                     * 判断参数 ContinueTimeout 是否已赋值
                     * @return ContinueTimeout 是否已赋值
                     * 
                     */
                    bool ContinueTimeoutHasBeenSet() const;

                private:

                    /**
                     * Duration of a single TS file in seconds. Value range: 5-30 seconds.

If this parameter is left empty, 30 seconds will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_itemDuration;
                    bool m_itemDurationHasBeenSet;

                    /**
                     * Recording cycle in seconds. Value range: 10 minutes to 12 hours.

If this parameter is left empty, 10 minutes (3600 seconds) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Resume recording waiting time, unit: seconds. Value range: 60-1800 seconds.
If this parameter is left empty, 0 (resume recording not enabled) will be used by default.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_continueTimeout;
                    bool m_continueTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_

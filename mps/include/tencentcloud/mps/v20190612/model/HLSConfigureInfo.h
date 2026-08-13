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
                     * 获取Duration of TS file, unit: second, value ranges from 5 to 30 seconds.

Leave it blank and it defaults to 30 seconds.
                     * @return ItemDuration Duration of TS file, unit: second, value ranges from 5 to 30 seconds.

Leave it blank and it defaults to 30 seconds.
                     * 
                     */
                    int64_t GetItemDuration() const;

                    /**
                     * 设置Duration of TS file, unit: second, value ranges from 5 to 30 seconds.

Leave it blank and it defaults to 30 seconds.
                     * @param _itemDuration Duration of TS file, unit: second, value ranges from 5 to 30 seconds.

Leave it blank and it defaults to 30 seconds.
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
                     * 获取Recording period, unit: second, value ranges from 10 minutes to 12 hr.

Leave it blank defaults to 10 minutes (3600 seconds).
                     * @return Interval Recording period, unit: second, value ranges from 10 minutes to 12 hr.

Leave it blank defaults to 10 minutes (3600 seconds).
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Recording period, unit: second, value ranges from 10 minutes to 12 hr.

Leave it blank defaults to 10 minutes (3600 seconds).
                     * @param _interval Recording period, unit: second, value ranges from 10 minutes to 12 hr.

Leave it blank defaults to 10 minutes (3600 seconds).
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
                     * 获取Continuation waiting time, unit: second. Value range: 60 seconds to 1800 seconds.
Leave blank defaults to 0 (recording continuation disabled).
                     * @return ContinueTimeout Continuation waiting time, unit: second. Value range: 60 seconds to 1800 seconds.
Leave blank defaults to 0 (recording continuation disabled).
                     * 
                     */
                    int64_t GetContinueTimeout() const;

                    /**
                     * 设置Continuation waiting time, unit: second. Value range: 60 seconds to 1800 seconds.
Leave blank defaults to 0 (recording continuation disabled).
                     * @param _continueTimeout Continuation waiting time, unit: second. Value range: 60 seconds to 1800 seconds.
Leave blank defaults to 0 (recording continuation disabled).
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
                     * Duration of TS file, unit: second, value ranges from 5 to 30 seconds.

Leave it blank and it defaults to 30 seconds.
                     */
                    int64_t m_itemDuration;
                    bool m_itemDurationHasBeenSet;

                    /**
                     * Recording period, unit: second, value ranges from 10 minutes to 12 hr.

Leave it blank defaults to 10 minutes (3600 seconds).
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Continuation waiting time, unit: second. Value range: 60 seconds to 1800 seconds.
Leave blank defaults to 0 (recording continuation disabled).
                     */
                    int64_t m_continueTimeout;
                    bool m_continueTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HLSCONFIGUREINFO_H_

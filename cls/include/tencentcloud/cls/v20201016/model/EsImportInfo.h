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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESIMPORTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESIMPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Import Es information
                */
                class EsImportInfo : public AbstractModel
                {
                public:
                    EsImportInfo();
                    ~EsImportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Import mode.
1. Import history data
2. Import real-time data
                     * @return Type Import mode.
1. Import history data
2. Import real-time data
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Import mode.
1. Import history data
2. Import real-time data
                     * @param _type Import mode.
1. Import history data
2. Import real-time data
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Start time. Unit: unix second-level timestamp.

                     * @return StartTime Start time. Unit: unix second-level timestamp.

                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time. Unit: unix second-level timestamp.

                     * @param _startTime Start time. Unit: unix second-level timestamp.

                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time. Unit: unix second-level timestamp.
                     * @return EndTime End time. Unit: unix second-level timestamp.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time. Unit: unix second-level timestamp.
                     * @param _endTime End time. Unit: unix second-level timestamp.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Maximum delay time. Unit: s

Import mode is 2. Required for importing real-time data.
                     * @return MaxDelay Maximum delay time. Unit: s

Import mode is 2. Required for importing real-time data.
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置Maximum delay time. Unit: s

Import mode is 2. Required for importing real-time data.
                     * @param _maxDelay Maximum delay time. Unit: s

Import mode is 2. Required for importing real-time data.
                     * 
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取Check interval. Unit: s

Import mode is 2. Required for importing real-time data.
                     * @return CheckInterval Check interval. Unit: s

Import mode is 2. Required for importing real-time data.
                     * 
                     */
                    uint64_t GetCheckInterval() const;

                    /**
                     * 设置Check interval. Unit: s

Import mode is 2. Required for importing real-time data.
                     * @param _checkInterval Check interval. Unit: s

Import mode is 2. Required for importing real-time data.
                     * 
                     */
                    void SetCheckInterval(const uint64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                private:

                    /**
                     * Import mode.
1. Import history data
2. Import real-time data
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Start time. Unit: unix second-level timestamp.

                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. Unit: unix second-level timestamp.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Maximum delay time. Unit: s

Import mode is 2. Required for importing real-time data.
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Check interval. Unit: s

Import mode is 2. Required for importing real-time data.
                     */
                    uint64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESIMPORTINFO_H_

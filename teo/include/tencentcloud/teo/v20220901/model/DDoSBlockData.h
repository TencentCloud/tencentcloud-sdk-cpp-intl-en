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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSBLOCKDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSBLOCKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS blocking details
                */
                class DDoSBlockData : public AbstractModel
                {
                public:
                    DDoSBlockData();
                    ~DDoSBlockData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start time recorded in UNIX timestamp.
                     * @return StartTime The start time recorded in UNIX timestamp.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The start time recorded in UNIX timestamp.
                     * @param _startTime The start time recorded in UNIX timestamp.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time recorded in UNIX timestamp. `0` indicates the blocking is ongoing.
                     * @return EndTime The end time recorded in UNIX timestamp. `0` indicates the blocking is ongoing.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The end time recorded in UNIX timestamp. `0` indicates the blocking is ongoing.
                     * @param _endTime The end time recorded in UNIX timestamp. `0` indicates the blocking is ongoing.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The regions blocked.
                     * @return BlockArea The regions blocked.
                     * 
                     */
                    std::string GetBlockArea() const;

                    /**
                     * 设置The regions blocked.
                     * @param _blockArea The regions blocked.
                     * 
                     */
                    void SetBlockArea(const std::string& _blockArea);

                    /**
                     * 判断参数 BlockArea 是否已赋值
                     * @return BlockArea 是否已赋值
                     * 
                     */
                    bool BlockAreaHasBeenSet() const;

                private:

                    /**
                     * The start time recorded in UNIX timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time recorded in UNIX timestamp. `0` indicates the blocking is ongoing.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The regions blocked.
                     */
                    std::string m_blockArea;
                    bool m_blockAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSBLOCKDATA_H_

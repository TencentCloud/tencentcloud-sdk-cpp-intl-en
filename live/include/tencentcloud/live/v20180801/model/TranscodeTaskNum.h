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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODETASKNUM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODETASKNUM_H_

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
                * The number of tasks.
                */
                class TranscodeTaskNum : public AbstractModel
                {
                public:
                    TranscodeTaskNum();
                    ~TranscodeTaskNum() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time of query.
                     * @return Time The time of query.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The time of query.
                     * @param _time The time of query.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The bitrate.
                     * @return CodeRate The bitrate.
                     * 
                     */
                    uint64_t GetCodeRate() const;

                    /**
                     * 设置The bitrate.
                     * @param _codeRate The bitrate.
                     * 
                     */
                    void SetCodeRate(const uint64_t& _codeRate);

                    /**
                     * 判断参数 CodeRate 是否已赋值
                     * @return CodeRate 是否已赋值
                     * 
                     */
                    bool CodeRateHasBeenSet() const;

                    /**
                     * 获取The number of tasks.
                     * @return Num The number of tasks.
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置The number of tasks.
                     * @param _num The number of tasks.
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * The time of query.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The bitrate.
                     */
                    uint64_t m_codeRate;
                    bool m_codeRateHasBeenSet;

                    /**
                     * The number of tasks.
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODETASKNUM_H_

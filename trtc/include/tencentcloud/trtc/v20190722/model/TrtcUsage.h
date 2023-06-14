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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The TRTC audio/video duration generated in a certain time period.
                */
                class TrtcUsage : public AbstractModel
                {
                public:
                    TrtcUsage();
                    ~TrtcUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time point in the format of `YYYY-MM-DD HH:mm:ss`. If more than one day is queried, `HH:mm:ss` is `00:00:00`.
                     * @return TimeKey The time point in the format of `YYYY-MM-DD HH:mm:ss`. If more than one day is queried, `HH:mm:ss` is `00:00:00`.
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置The time point in the format of `YYYY-MM-DD HH:mm:ss`. If more than one day is queried, `HH:mm:ss` is `00:00:00`.
                     * @param _timeKey The time point in the format of `YYYY-MM-DD HH:mm:ss`. If more than one day is queried, `HH:mm:ss` is `00:00:00`.
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取The usage (minutes). Each element of this parameter corresponds to an element of `UsageKey` in the order they are listed.
                     * @return UsageValue The usage (minutes). Each element of this parameter corresponds to an element of `UsageKey` in the order they are listed.
                     * 
                     */
                    std::vector<double> GetUsageValue() const;

                    /**
                     * 设置The usage (minutes). Each element of this parameter corresponds to an element of `UsageKey` in the order they are listed.
                     * @param _usageValue The usage (minutes). Each element of this parameter corresponds to an element of `UsageKey` in the order they are listed.
                     * 
                     */
                    void SetUsageValue(const std::vector<double>& _usageValue);

                    /**
                     * 判断参数 UsageValue 是否已赋值
                     * @return UsageValue 是否已赋值
                     * 
                     */
                    bool UsageValueHasBeenSet() const;

                private:

                    /**
                     * The time point in the format of `YYYY-MM-DD HH:mm:ss`. If more than one day is queried, `HH:mm:ss` is `00:00:00`.
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * The usage (minutes). Each element of this parameter corresponds to an element of `UsageKey` in the order they are listed.
                     */
                    std::vector<double> m_usageValue;
                    bool m_usageValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCUSAGE_H_

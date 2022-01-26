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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDUSAGE_H_

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
                * Recording duration statistics
                */
                class RecordUsage : public AbstractModel
                {
                public:
                    RecordUsage();
                    ~RecordUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point for the statistics, e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     * @return TimeKey Time point for the statistics, e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Time point for the statistics, e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     * @param TimeKey Time point for the statistics, e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取SD video duration (s)
                     * @return Class1VideoTime SD video duration (s)
                     */
                    uint64_t GetClass1VideoTime() const;

                    /**
                     * 设置SD video duration (s)
                     * @param Class1VideoTime SD video duration (s)
                     */
                    void SetClass1VideoTime(const uint64_t& _class1VideoTime);

                    /**
                     * 判断参数 Class1VideoTime 是否已赋值
                     * @return Class1VideoTime 是否已赋值
                     */
                    bool Class1VideoTimeHasBeenSet() const;

                    /**
                     * 获取HD video duration (s)
                     * @return Class2VideoTime HD video duration (s)
                     */
                    uint64_t GetClass2VideoTime() const;

                    /**
                     * 设置HD video duration (s)
                     * @param Class2VideoTime HD video duration (s)
                     */
                    void SetClass2VideoTime(const uint64_t& _class2VideoTime);

                    /**
                     * 判断参数 Class2VideoTime 是否已赋值
                     * @return Class2VideoTime 是否已赋值
                     */
                    bool Class2VideoTimeHasBeenSet() const;

                    /**
                     * 获取FHD video duration (s)
                     * @return Class3VideoTime FHD video duration (s)
                     */
                    uint64_t GetClass3VideoTime() const;

                    /**
                     * 设置FHD video duration (s)
                     * @param Class3VideoTime FHD video duration (s)
                     */
                    void SetClass3VideoTime(const uint64_t& _class3VideoTime);

                    /**
                     * 判断参数 Class3VideoTime 是否已赋值
                     * @return Class3VideoTime 是否已赋值
                     */
                    bool Class3VideoTimeHasBeenSet() const;

                    /**
                     * 获取Audio duration (s)
                     * @return AudioTime Audio duration (s)
                     */
                    uint64_t GetAudioTime() const;

                    /**
                     * 设置Audio duration (s)
                     * @param AudioTime Audio duration (s)
                     */
                    void SetAudioTime(const uint64_t& _audioTime);

                    /**
                     * 判断参数 AudioTime 是否已赋值
                     * @return AudioTime 是否已赋值
                     */
                    bool AudioTimeHasBeenSet() const;

                private:

                    /**
                     * Time point for the statistics, e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * SD video duration (s)
                     */
                    uint64_t m_class1VideoTime;
                    bool m_class1VideoTimeHasBeenSet;

                    /**
                     * HD video duration (s)
                     */
                    uint64_t m_class2VideoTime;
                    bool m_class2VideoTimeHasBeenSet;

                    /**
                     * FHD video duration (s)
                     */
                    uint64_t m_class3VideoTime;
                    bool m_class3VideoTimeHasBeenSet;

                    /**
                     * Audio duration (s)
                     */
                    uint64_t m_audioTime;
                    bool m_audioTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_RECORDUSAGE_H_

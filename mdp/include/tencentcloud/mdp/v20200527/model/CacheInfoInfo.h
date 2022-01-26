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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CACHEINFOINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CACHEINFOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * Timeout information for cache configuration
                */
                class CacheInfoInfo : public AbstractModel
                {
                public:
                    CacheInfoInfo();
                    ~CacheInfoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timeout period (ms), which must be an integer multiple of 1000
.m3u8/.mpd: [1000, 60000]
.ts/.m4s/.mp4: [10000, 1800000]
                     * @return Timeout Timeout period (ms), which must be an integer multiple of 1000
.m3u8/.mpd: [1000, 60000]
.ts/.m4s/.mp4: [10000, 1800000]
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout period (ms), which must be an integer multiple of 1000
.m3u8/.mpd: [1000, 60000]
.ts/.m4s/.mp4: [10000, 1800000]
                     * @param Timeout Timeout period (ms), which must be an integer multiple of 1000
.m3u8/.mpd: [1000, 60000]
.ts/.m4s/.mp4: [10000, 1800000]
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取File extension. Valid values: .m3u8, .ts, .mpd, .m4s, .mp4
Note: this field may return `null`, indicating that no valid value was found.
                     * @return Ext File extension. Valid values: .m3u8, .ts, .mpd, .m4s, .mp4
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetExt() const;

                    /**
                     * 设置File extension. Valid values: .m3u8, .ts, .mpd, .m4s, .mp4
Note: this field may return `null`, indicating that no valid value was found.
                     * @param Ext File extension. Valid values: .m3u8, .ts, .mpd, .m4s, .mp4
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     */
                    bool ExtHasBeenSet() const;

                private:

                    /**
                     * Timeout period (ms), which must be an integer multiple of 1000
.m3u8/.mpd: [1000, 60000]
.ts/.m4s/.mp4: [10000, 1800000]
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * File extension. Valid values: .m3u8, .ts, .mpd, .m4s, .mp4
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CACHEINFOINFO_H_

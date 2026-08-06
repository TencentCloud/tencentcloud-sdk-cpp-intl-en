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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_PIDSELECTOR_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_PIDSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * 
                */
                class PidSelector : public AbstractModel
                {
                public:
                    PidSelector();
                    ~PidSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return AudioPID 
                     * 
                     */
                    std::vector<int64_t> GetAudioPID() const;

                    /**
                     * 设置
                     * @param _audioPID 
                     * 
                     */
                    void SetAudioPID(const std::vector<int64_t>& _audioPID);

                    /**
                     * 判断参数 AudioPID 是否已赋值
                     * @return AudioPID 是否已赋值
                     * 
                     */
                    bool AudioPIDHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoPID 
                     * 
                     */
                    std::vector<int64_t> GetVideoPID() const;

                    /**
                     * 设置
                     * @param _videoPID 
                     * 
                     */
                    void SetVideoPID(const std::vector<int64_t>& _videoPID);

                    /**
                     * 判断参数 VideoPID 是否已赋值
                     * @return VideoPID 是否已赋值
                     * 
                     */
                    bool VideoPIDHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<int64_t> m_audioPID;
                    bool m_audioPIDHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<int64_t> m_videoPID;
                    bool m_videoPIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_PIDSELECTOR_H_

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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINT_H_

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
                * Voiceprint configuration parameters.
                */
                class VoicePrint : public AbstractModel
                {
                public:
                    VoicePrint();
                    ~VoicePrint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The default is 0, which means voiceprint is not enabled. 1 means voiceprint is enabled, at which point you need to fill in the voiceprint id.
                     * @return Mode The default is 0, which means voiceprint is not enabled. 1 means voiceprint is enabled, at which point you need to fill in the voiceprint id.
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置The default is 0, which means voiceprint is not enabled. 1 means voiceprint is enabled, at which point you need to fill in the voiceprint id.
                     * @param _mode The default is 0, which means voiceprint is not enabled. 1 means voiceprint is enabled, at which point you need to fill in the voiceprint id.
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取VoicePrint Mode requires filling in when set to 1. currently only support a VoicePrint id.
                     * @return IdList VoicePrint Mode requires filling in when set to 1. currently only support a VoicePrint id.
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置VoicePrint Mode requires filling in when set to 1. currently only support a VoicePrint id.
                     * @param _idList VoicePrint Mode requires filling in when set to 1. currently only support a VoicePrint id.
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * The default is 0, which means voiceprint is not enabled. 1 means voiceprint is enabled, at which point you need to fill in the voiceprint id.
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * VoicePrint Mode requires filling in when set to 1. currently only support a VoicePrint id.
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICEPRINT_H_

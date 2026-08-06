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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTRISTSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTRISTSETTINGS_H_

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
                class CreateOutputRistSettings : public AbstractModel
                {
                public:
                    CreateOutputRistSettings();
                    ~CreateOutputRistSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Mode 
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置
                     * @param _mode 
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Profile 
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置
                     * @param _profile 
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取
                     * @return Buffer 
                     * 
                     */
                    int64_t GetBuffer() const;

                    /**
                     * 设置
                     * @param _buffer 
                     * 
                     */
                    void SetBuffer(const int64_t& _buffer);

                    /**
                     * 判断参数 Buffer 是否已赋值
                     * @return Buffer 是否已赋值
                     * 
                     */
                    bool BufferHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_buffer;
                    bool m_bufferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTRISTSETTINGS_H_

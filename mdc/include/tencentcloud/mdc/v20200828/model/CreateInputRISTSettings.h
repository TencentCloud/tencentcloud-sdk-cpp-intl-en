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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTRISTSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTRISTSETTINGS_H_

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
                * Input RIST configuration message created.
                */
                class CreateInputRISTSettings : public AbstractModel
                {
                public:
                    CreateInputRISTSettings();
                    ~CreateInputRISTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RIST mode. Valid value: `LISTENER`. Default value: `LISTENER`.
                     * @return Mode RIST mode. Valid value: `LISTENER`. Default value: `LISTENER`.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置RIST mode. Valid value: `LISTENER`. Default value: `LISTENER`.
                     * @param _mode RIST mode. Valid value: `LISTENER`. Default value: `LISTENER`.
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
                     * 获取RIST configuration solution. Options: [MAIN|SIMPLE]. Default: MAIN.
                     * @return Profile RIST configuration solution. Options: [MAIN|SIMPLE]. Default: MAIN.
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置RIST configuration solution. Options: [MAIN|SIMPLE]. Default: MAIN.
                     * @param _profile RIST configuration solution. Options: [MAIN|SIMPLE]. Default: MAIN.
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
                     * 获取RIST buffer size in milliseconds. Minimum value: 50 ms. Maximum value: 5000 ms. Default value: 120.
                     * @return Buffer RIST buffer size in milliseconds. Minimum value: 50 ms. Maximum value: 5000 ms. Default value: 120.
                     * 
                     */
                    int64_t GetBuffer() const;

                    /**
                     * 设置RIST buffer size in milliseconds. Minimum value: 50 ms. Maximum value: 5000 ms. Default value: 120.
                     * @param _buffer RIST buffer size in milliseconds. Minimum value: 50 ms. Maximum value: 5000 ms. Default value: 120.
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
                     * RIST mode. Valid value: `LISTENER`. Default value: `LISTENER`.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * RIST configuration solution. Options: [MAIN|SIMPLE]. Default: MAIN.
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * RIST buffer size in milliseconds. Minimum value: 50 ms. Maximum value: 5000 ms. Default value: 120.
                     */
                    int64_t m_buffer;
                    bool m_bufferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTRISTSETTINGS_H_

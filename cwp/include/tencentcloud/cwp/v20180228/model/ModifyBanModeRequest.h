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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANMODEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBanMode request structure.
                */
                class ModifyBanModeRequest : public AbstractModel
                {
                public:
                    ModifyBanModeRequest();
                    ~ModifyBanModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.</p>
                     * @return Mode <p>Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.</p>
                     * @param _mode <p>Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.</p>
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
                     * 获取<p>Blocking duration, used in standard blocking mode</p>
                     * @return Ttl <p>Blocking duration, used in standard blocking mode</p>
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置<p>Blocking duration, used in standard blocking mode</p>
                     * @param _ttl <p>Blocking duration, used in standard blocking mode</p>
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                private:

                    /**
                     * <p>Blocking mode. STANDARD_MODE: standard mode; DEEP_MODE: deep mode.</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Blocking duration, used in standard blocking mode</p>
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANMODEREQUEST_H_

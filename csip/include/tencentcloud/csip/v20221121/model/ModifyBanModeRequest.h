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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBANMODEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBANMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>Blocking mode. STANDARD_MODE: standard blocking; DEEP_MODE: deep blocking.</p>
                     * @return Mode <p>Blocking mode. STANDARD_MODE: standard blocking; DEEP_MODE: deep blocking.</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Blocking mode. STANDARD_MODE: standard blocking; DEEP_MODE: deep blocking.</p>
                     * @param _mode <p>Blocking mode. STANDARD_MODE: standard blocking; DEEP_MODE: deep blocking.</p>
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
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Blocking time for standard blocking mode</p>
                     * @return Ttl <p>Blocking time for standard blocking mode</p>
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置<p>Blocking time for standard blocking mode</p>
                     * @param _ttl <p>Blocking time for standard blocking mode</p>
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
                     * <p>Blocking mode. STANDARD_MODE: standard blocking; DEEP_MODE: deep blocking.</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Blocking time for standard blocking mode</p>
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBANMODEREQUEST_H_

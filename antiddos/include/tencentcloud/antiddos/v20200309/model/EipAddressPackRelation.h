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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSPACKRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSPACKRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Details of the Anycast package
                */
                class EipAddressPackRelation : public AbstractModel
                {
                public:
                    EipAddressPackRelation();
                    ~EipAddressPackRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of package IPs
                     * @return IpCount Number of package IPs
                     * 
                     */
                    uint64_t GetIpCount() const;

                    /**
                     * 设置Number of package IPs
                     * @param _ipCount Number of package IPs
                     * 
                     */
                    void SetIpCount(const uint64_t& _ipCount);

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag
                     * @return AutoRenewFlag Auto-renewal flag
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag
                     * @param _autoRenewFlag Auto-renewal flag
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Current expiration time
                     * @return CurDeadline Current expiration time
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置Current expiration time
                     * @param _curDeadline Current expiration time
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                private:

                    /**
                     * Number of package IPs
                     */
                    uint64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * Auto-renewal flag
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Current expiration time
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSPACKRELATION_H_

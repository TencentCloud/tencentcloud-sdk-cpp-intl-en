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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHAUTHKEYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHAUTHKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Push authentication key information.
                */
                class PushAuthKeyInfo : public AbstractModel
                {
                public:
                    PushAuthKeyInfo();
                    ~PushAuthKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return DomainName Domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Domain name.
                     * @param _domainName Domain name.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable. 0: disabled; 1: enabled.
                     * @return Enable Whether to enable. 0: disabled; 1: enabled.
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Whether to enable. 0: disabled; 1: enabled.
                     * @param _enable Whether to enable. 0: disabled; 1: enabled.
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Master authentication key.
                     * @return MasterAuthKey Master authentication key.
                     * 
                     */
                    std::string GetMasterAuthKey() const;

                    /**
                     * 设置Master authentication key.
                     * @param _masterAuthKey Master authentication key.
                     * 
                     */
                    void SetMasterAuthKey(const std::string& _masterAuthKey);

                    /**
                     * 判断参数 MasterAuthKey 是否已赋值
                     * @return MasterAuthKey 是否已赋值
                     * 
                     */
                    bool MasterAuthKeyHasBeenSet() const;

                    /**
                     * 获取Standby authentication key.
                     * @return BackupAuthKey Standby authentication key.
                     * 
                     */
                    std::string GetBackupAuthKey() const;

                    /**
                     * 设置Standby authentication key.
                     * @param _backupAuthKey Standby authentication key.
                     * 
                     */
                    void SetBackupAuthKey(const std::string& _backupAuthKey);

                    /**
                     * 判断参数 BackupAuthKey 是否已赋值
                     * @return BackupAuthKey 是否已赋值
                     * 
                     */
                    bool BackupAuthKeyHasBeenSet() const;

                    /**
                     * 获取Validity period in seconds.
                     * @return AuthDelta Validity period in seconds.
                     * 
                     */
                    uint64_t GetAuthDelta() const;

                    /**
                     * 设置Validity period in seconds.
                     * @param _authDelta Validity period in seconds.
                     * 
                     */
                    void SetAuthDelta(const uint64_t& _authDelta);

                    /**
                     * 判断参数 AuthDelta 是否已赋值
                     * @return AuthDelta 是否已赋值
                     * 
                     */
                    bool AuthDeltaHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Whether to enable. 0: disabled; 1: enabled.
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Master authentication key.
                     */
                    std::string m_masterAuthKey;
                    bool m_masterAuthKeyHasBeenSet;

                    /**
                     * Standby authentication key.
                     */
                    std::string m_backupAuthKey;
                    bool m_backupAuthKeyHasBeenSet;

                    /**
                     * Validity period in seconds.
                     */
                    uint64_t m_authDelta;
                    bool m_authDeltaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHAUTHKEYINFO_H_

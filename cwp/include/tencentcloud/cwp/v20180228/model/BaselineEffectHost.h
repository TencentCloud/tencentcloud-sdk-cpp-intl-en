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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information on the host affected by baseline
                */
                class BaselineEffectHost : public AbstractModel
                {
                public:
                    BaselineEffectHost();
                    ~BaselineEffectHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Passed item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PassCount Passed item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPassCount() const;

                    /**
                     * 设置Passed item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _passCount Passed item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPassCount(const uint64_t& _passCount);

                    /**
                     * 判断参数 PassCount 是否已赋值
                     * @return PassCount 是否已赋值
                     * 
                     */
                    bool PassCountHasBeenSet() const;

                    /**
                     * 获取Risky item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailCount Risky item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 设置Risky item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failCount Risky item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailCount(const uint64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取First check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstScanTime First check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置First check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstScanTime First check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstScanTime(const std::string& _firstScanTime);

                    /**
                     * 判断参数 FirstScanTime 是否已赋值
                     * @return FirstScanTime 是否已赋值
                     * 
                     */
                    bool FirstScanTimeHasBeenSet() const;

                    /**
                     * 获取Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastScanTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastScanTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Risky item processing status. 0: failed; 1: passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Risky item processing status. 0: failed; 1: passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Risky item processing status. 0: failed; 1: passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Risky item processing status. 0: failed; 1: passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuid Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AliasName Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aliasName Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Check status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxStatus Check status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxStatus() const;

                    /**
                     * 设置Check status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxStatus Check status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxStatus(const uint64_t& _maxStatus);

                    /**
                     * 判断参数 MaxStatus 是否已赋值
                     * @return MaxStatus 是否已赋值
                     * 
                     */
                    bool MaxStatusHasBeenSet() const;

                private:

                    /**
                     * Passed item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_passCount;
                    bool m_passCountHasBeenSet;

                    /**
                     * Risky item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * First check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Risky item processing status. 0: failed; 1: passed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host alias
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Check status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxStatus;
                    bool m_maxStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_

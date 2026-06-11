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
                     * 获取Passed items
                     * @return PassCount Passed items
                     * 
                     */
                    uint64_t GetPassCount() const;

                    /**
                     * 设置Passed items
                     * @param _passCount Passed items
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
                     * @return FailCount Risky item
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 设置Risky item
                     * @param _failCount Risky item
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
                     * 获取First detection event
                     * @return FirstScanTime First detection event
                     * 
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置First detection event
                     * @param _firstScanTime First detection event
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
                     * 获取Last detection time
                     * @return LastScanTime Last detection time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last detection time
                     * @param _lastScanTime Last detection time
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
                     * @return Status Risky item processing status. 0: failed; 1: passed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Risky item processing status. 0: failed; 1: passed.
                     * @param _status Risky item processing status. 0: failed; 1: passed.
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
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
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
                     * @return HostIp Host IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
                     * @param _hostIp Host IP address
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
                     * @return AliasName Host alias
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Host alias
                     * @param _aliasName Host alias
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
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
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
                     * 获取detecting state
                     * @return MaxStatus detecting state
                     * 
                     */
                    uint64_t GetMaxStatus() const;

                    /**
                     * 设置detecting state
                     * @param _maxStatus detecting state
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
                     * Passed items
                     */
                    uint64_t m_passCount;
                    bool m_passCountHasBeenSet;

                    /**
                     * Risky item
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * First detection event
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Risky item processing status. 0: failed; 1: passed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host alias
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * detecting state
                     */
                    uint64_t m_maxStatus;
                    bool m_maxStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEFFECTHOST_H_

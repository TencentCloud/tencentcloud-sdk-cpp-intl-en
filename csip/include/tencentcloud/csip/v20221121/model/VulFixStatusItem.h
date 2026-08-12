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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSTATUSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Vulnerability/KB patch dimensional remediation status
                */
                class VulFixStatusItem : public AbstractModel
                {
                public:
                    VulFixStatusItem();
                    ~VulFixStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID (empty for KB patch fix tasks)
                     * @return VulId Vulnerability ID (empty for KB patch fix tasks)
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID (empty for KB patch fix tasks)
                     * @param _vulId Vulnerability ID (empty for KB patch fix tasks)
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Patch ID (empty for vulnerability repair tasks)
                     * @return KBId Patch ID (empty for vulnerability repair tasks)
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置Patch ID (empty for vulnerability repair tasks)
                     * @param _kBId Patch ID (empty for vulnerability repair tasks)
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取Vulnerability name or KB patch name
                     * @return VulName Vulnerability name or KB patch name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name or KB patch name
                     * @param _vulName Vulnerability name or KB patch name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Remediation status of the vulnerability
Enumeration value:
0: In remediation
1: All successful
2: partially failed
3: All failed
                     * @return FixStatus Remediation status of the vulnerability
Enumeration value:
0: In remediation
1: All successful
2: partially failed
3: All failed
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置Remediation status of the vulnerability
Enumeration value:
0: In remediation
1: All successful
2: partially failed
3: All failed
                     * @param _fixStatus Remediation status of the vulnerability
Enumeration value:
0: In remediation
1: All successful
2: partially failed
3: All failed
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取Total hosts associated with the vulnerability/KB patch
                     * @return HostCount Total hosts associated with the vulnerability/KB patch
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Total hosts associated with the vulnerability/KB patch
                     * @param _hostCount Total hosts associated with the vulnerability/KB patch
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts successfully fixed by the vulnerability/KB patch
                     * @return SuccessHostCount Number of hosts successfully fixed by the vulnerability/KB patch
                     * 
                     */
                    int64_t GetSuccessHostCount() const;

                    /**
                     * 设置Number of hosts successfully fixed by the vulnerability/KB patch
                     * @param _successHostCount Number of hosts successfully fixed by the vulnerability/KB patch
                     * 
                     */
                    void SetSuccessHostCount(const int64_t& _successHostCount);

                    /**
                     * 判断参数 SuccessHostCount 是否已赋值
                     * @return SuccessHostCount 是否已赋值
                     * 
                     */
                    bool SuccessHostCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts failed to be fixed for the vulnerability/KB patch
                     * @return FailHostCount Number of hosts failed to be fixed for the vulnerability/KB patch
                     * 
                     */
                    int64_t GetFailHostCount() const;

                    /**
                     * 设置Number of hosts failed to be fixed for the vulnerability/KB patch
                     * @param _failHostCount Number of hosts failed to be fixed for the vulnerability/KB patch
                     * 
                     */
                    void SetFailHostCount(const int64_t& _failHostCount);

                    /**
                     * 判断参数 FailHostCount 是否已赋值
                     * @return FailHostCount 是否已赋值
                     * 
                     */
                    bool FailHostCountHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID (empty for KB patch fix tasks)
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Patch ID (empty for vulnerability repair tasks)
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * Vulnerability name or KB patch name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Remediation status of the vulnerability
Enumeration value:
0: In remediation
1: All successful
2: partially failed
3: All failed
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * Total hosts associated with the vulnerability/KB patch
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Number of hosts successfully fixed by the vulnerability/KB patch
                     */
                    int64_t m_successHostCount;
                    bool m_successHostCountHasBeenSet;

                    /**
                     * Number of hosts failed to be fixed for the vulnerability/KB patch
                     */
                    int64_t m_failHostCount;
                    bool m_failHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSTATUSITEM_H_

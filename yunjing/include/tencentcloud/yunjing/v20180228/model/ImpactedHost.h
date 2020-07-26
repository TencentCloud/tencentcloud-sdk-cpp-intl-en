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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_IMPACTEDHOST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_IMPACTEDHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Affected server information
                */
                class ImpactedHost : public AbstractModel
                {
                public:
                    ImpactedHost();
                    ~ImpactedHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability ID.
                     * @return Id Vulnerability ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Vulnerability ID.
                     * @param Id Vulnerability ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Server IP.
                     * @return MachineIp Server IP.
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Server IP.
                     * @param MachineIp Server IP.
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param MachineName Server name.
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Last detection time.
                     * @return LastScanTime Last detection time.
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last detection time.
                     * @param LastScanTime Last detection time.
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability status.
<li>UN_OPERATED: to be processed</li>
<li>SCANING: scanning</li>
<li>FIXED: fixed</li>
                     * @return VulStatus Vulnerability status.
<li>UN_OPERATED: to be processed</li>
<li>SCANING: scanning</li>
<li>FIXED: fixed</li>
                     */
                    std::string GetVulStatus() const;

                    /**
                     * 设置Vulnerability status.
<li>UN_OPERATED: to be processed</li>
<li>SCANING: scanning</li>
<li>FIXED: fixed</li>
                     * @param VulStatus Vulnerability status.
<li>UN_OPERATED: to be processed</li>
<li>SCANING: scanning</li>
<li>FIXED: fixed</li>
                     */
                    void SetVulStatus(const std::string& _vulStatus);

                    /**
                     * 判断参数 VulStatus 是否已赋值
                     * @return VulStatus 是否已赋值
                     */
                    bool VulStatusHasBeenSet() const;

                    /**
                     * 获取CWP agent `UUID`.
                     * @return Uuid CWP agent `UUID`.
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `UUID`.
                     * @param Uuid CWP agent `UUID`.
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Vulnerability description.
                     * @return Description Vulnerability description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vulnerability description.
                     * @param Description Vulnerability description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Vulnerability category ID.
                     * @return VulId Vulnerability category ID.
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability category ID.
                     * @param VulId Vulnerability category ID.
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Whether it is the CWP Pro.
                     * @return IsProVersion Whether it is the CWP Pro.
                     */
                    bool GetIsProVersion() const;

                    /**
                     * 设置Whether it is the CWP Pro.
                     * @param IsProVersion Whether it is the CWP Pro.
                     */
                    void SetIsProVersion(const bool& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     */
                    bool IsProVersionHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Server IP.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Last detection time.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * Vulnerability status.
<li>UN_OPERATED: to be processed</li>
<li>SCANING: scanning</li>
<li>FIXED: fixed</li>
                     */
                    std::string m_vulStatus;
                    bool m_vulStatusHasBeenSet;

                    /**
                     * CWP agent `UUID`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Vulnerability description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Vulnerability category ID.
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Whether it is the CWP Pro.
                     */
                    bool m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_IMPACTEDHOST_H_

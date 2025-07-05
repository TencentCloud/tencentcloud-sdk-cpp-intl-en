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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOHOSTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOHOSTINFO_H_

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
                * Fix vulnerability second popup in batch
                */
                class VulInfoHostInfo : public AbstractModel
                {
                public:
                    VulInfoHostInfo();
                    ~VulInfoHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIp Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIp Host IP
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
                     * 获取Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

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
                     * 获取0 - the vulnerability cannot be fixed automatically; 1 - the vulnerability can be fixed automatically; 2 - the client has been offline; 3 - the host is not the ultimate edition and can only be fixed manually; 4 - the model does not allow automatic fix; 5 - fixing; 6 - fixed; 7 - under detection; 9 - fix failed; 10 - ignored; 11 - the vulnerability is supported only on Linux, not on Windows; 12 - the vulnerability is supported only on Windows, not on Linux.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSupportAutoFix 0 - the vulnerability cannot be fixed automatically; 1 - the vulnerability can be fixed automatically; 2 - the client has been offline; 3 - the host is not the ultimate edition and can only be fixed manually; 4 - the model does not allow automatic fix; 5 - fixing; 6 - fixed; 7 - under detection; 9 - fix failed; 10 - ignored; 11 - the vulnerability is supported only on Linux, not on Windows; 12 - the vulnerability is supported only on Windows, not on Linux.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsSupportAutoFix() const;

                    /**
                     * 设置0 - the vulnerability cannot be fixed automatically; 1 - the vulnerability can be fixed automatically; 2 - the client has been offline; 3 - the host is not the ultimate edition and can only be fixed manually; 4 - the model does not allow automatic fix; 5 - fixing; 6 - fixed; 7 - under detection; 9 - fix failed; 10 - ignored; 11 - the vulnerability is supported only on Linux, not on Windows; 12 - the vulnerability is supported only on Windows, not on Linux.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSupportAutoFix 0 - the vulnerability cannot be fixed automatically; 1 - the vulnerability can be fixed automatically; 2 - the client has been offline; 3 - the host is not the ultimate edition and can only be fixed manually; 4 - the model does not allow automatic fix; 5 - fixing; 6 - fixed; 7 - under detection; 9 - fix failed; 10 - ignored; 11 - the vulnerability is supported only on Linux, not on Windows; 12 - the vulnerability is supported only on Windows, not on Linux.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsSupportAutoFix(const uint64_t& _isSupportAutoFix);

                    /**
                     * 判断参数 IsSupportAutoFix 是否已赋值
                     * @return IsSupportAutoFix 是否已赋值
                     * 
                     */
                    bool IsSupportAutoFixHasBeenSet() const;

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
                     * 获取Host InstanceId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Host InstanceId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Host InstanceId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Host InstanceId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Host QUUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 0 - the vulnerability cannot be fixed automatically; 1 - the vulnerability can be fixed automatically; 2 - the client has been offline; 3 - the host is not the ultimate edition and can only be fixed manually; 4 - the model does not allow automatic fix; 5 - fixing; 6 - fixed; 7 - under detection; 9 - fix failed; 10 - ignored; 11 - the vulnerability is supported only on Linux, not on Windows; 12 - the vulnerability is supported only on Windows, not on Linux.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isSupportAutoFix;
                    bool m_isSupportAutoFixHasBeenSet;

                    /**
                     * Host UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host InstanceId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOHOSTINFO_H_

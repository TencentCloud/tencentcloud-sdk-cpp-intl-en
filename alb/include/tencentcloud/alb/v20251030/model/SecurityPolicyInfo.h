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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Security policy information.
                */
                class SecurityPolicyInfo : public AbstractModel
                {
                public:
                    SecurityPolicyInfo();
                    ~SecurityPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of supported cipher suites.
Supported encryption suite, which depends on the TLSVersions value.
Cipher only needs to be supported by any passed-in TLSVersions.

Description: If TLSv1.3 is selected, the Cipher list must contain ciphers supported by TLSv1.3.

Call the DescribeSecurityPolicyCapabilities API to get the supported encryption suite list.
                     * @return Ciphers List of supported cipher suites.
Supported encryption suite, which depends on the TLSVersions value.
Cipher only needs to be supported by any passed-in TLSVersions.

Description: If TLSv1.3 is selected, the Cipher list must contain ciphers supported by TLSv1.3.

Call the DescribeSecurityPolicyCapabilities API to get the supported encryption suite list.
                     * 
                     */
                    std::vector<std::string> GetCiphers() const;

                    /**
                     * 设置List of supported cipher suites.
Supported encryption suite, which depends on the TLSVersions value.
Cipher only needs to be supported by any passed-in TLSVersions.

Description: If TLSv1.3 is selected, the Cipher list must contain ciphers supported by TLSv1.3.

Call the DescribeSecurityPolicyCapabilities API to get the supported encryption suite list.
                     * @param _ciphers List of supported cipher suites.
Supported encryption suite, which depends on the TLSVersions value.
Cipher only needs to be supported by any passed-in TLSVersions.

Description: If TLSv1.3 is selected, the Cipher list must contain ciphers supported by TLSv1.3.

Call the DescribeSecurityPolicyCapabilities API to get the supported encryption suite list.
                     * 
                     */
                    void SetCiphers(const std::vector<std::string>& _ciphers);

                    /**
                     * 判断参数 Ciphers 是否已赋值
                     * @return Ciphers 是否已赋值
                     * 
                     */
                    bool CiphersHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * @return SecurityPolicyId Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetSecurityPolicyId() const;

                    /**
                     * 设置Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * @param _securityPolicyId Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetSecurityPolicyId(const std::string& _securityPolicyId);

                    /**
                     * 判断参数 SecurityPolicyId 是否已赋值
                     * @return SecurityPolicyId 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdHasBeenSet() const;

                    /**
                     * 获取Security policy name. It must be 2-128 English or Chinese characters, starting with letters or Chinese characters. It can consist of digits, half-width periods (.), underscores (_), and dashes (-).
                     * @return SecurityPolicyName Security policy name. It must be 2-128 English or Chinese characters, starting with letters or Chinese characters. It can consist of digits, half-width periods (.), underscores (_), and dashes (-).
                     * 
                     */
                    std::string GetSecurityPolicyName() const;

                    /**
                     * 设置Security policy name. It must be 2-128 English or Chinese characters, starting with letters or Chinese characters. It can consist of digits, half-width periods (.), underscores (_), and dashes (-).
                     * @param _securityPolicyName Security policy name. It must be 2-128 English or Chinese characters, starting with letters or Chinese characters. It can consist of digits, half-width periods (.), underscores (_), and dashes (-).
                     * 
                     */
                    void SetSecurityPolicyName(const std::string& _securityPolicyName);

                    /**
                     * 判断参数 SecurityPolicyName 是否已赋值
                     * @return SecurityPolicyName 是否已赋值
                     * 
                     */
                    bool SecurityPolicyNameHasBeenSet() const;

                    /**
                     * 获取Security policy status. The current API most often returns Active, which means the security policy is in available status.
                     * @return Status Security policy status. The current API most often returns Active, which means the security policy is in available status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Security policy status. The current API most often returns Active, which means the security policy is in available status.
                     * @param _status Security policy status. The current API most often returns Active, which means the security policy is in available status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取List of supported TLS protocol versions. Optional values include: TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3.
                     * @return TLSVersions List of supported TLS protocol versions. Optional values include: TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3.
                     * 
                     */
                    std::vector<std::string> GetTLSVersions() const;

                    /**
                     * 设置List of supported TLS protocol versions. Optional values include: TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3.
                     * @param _tLSVersions List of supported TLS protocol versions. Optional values include: TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3.
                     * 
                     */
                    void SetTLSVersions(const std::vector<std::string>& _tLSVersions);

                    /**
                     * 判断参数 TLSVersions 是否已赋值
                     * @return TLSVersions 是否已赋值
                     * 
                     */
                    bool TLSVersionsHasBeenSet() const;

                    /**
                     * 获取Tag information.
                     * @return Tags Tag information.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag information.
                     * @param _tags Tag information.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * List of supported cipher suites.
Supported encryption suite, which depends on the TLSVersions value.
Cipher only needs to be supported by any passed-in TLSVersions.

Description: If TLSv1.3 is selected, the Cipher list must contain ciphers supported by TLSv1.3.

Call the DescribeSecurityPolicyCapabilities API to get the supported encryption suite list.
                     */
                    std::vector<std::string> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Security policy ID, format: tls- followed by 8 alphanumeric characters.
                     */
                    std::string m_securityPolicyId;
                    bool m_securityPolicyIdHasBeenSet;

                    /**
                     * Security policy name. It must be 2-128 English or Chinese characters, starting with letters or Chinese characters. It can consist of digits, half-width periods (.), underscores (_), and dashes (-).
                     */
                    std::string m_securityPolicyName;
                    bool m_securityPolicyNameHasBeenSet;

                    /**
                     * Security policy status. The current API most often returns Active, which means the security policy is in available status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of supported TLS protocol versions. Optional values include: TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3.
                     */
                    std::vector<std::string> m_tLSVersions;
                    bool m_tLSVersionsHasBeenSet;

                    /**
                     * Tag information.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_SECURITYPOLICYINFO_H_

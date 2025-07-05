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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEIDENTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEIDENTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeIdentification response structure.
                */
                class DescribeIdentificationResponse : public AbstractModel
                {
                public:
                    DescribeIdentificationResponse();
                    ~DescribeIdentificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Site name
                     * @return Name Site name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Verification status. Valid values:
- `pending`: Verifying
- `finished`: The site is verified.
                     * @return Status Verification status. Valid values:
- `pending`: Verifying
- `finished`: The site is verified.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return Subdomain 
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取Record type
                     * @return RecordType Record type
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取Record value
                     * @return RecordValue Record value
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                    /**
                     * 获取NS records of the domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return OriginalNameServers NS records of the domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                private:

                    /**
                     * Site name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Verification status. Valid values:
- `pending`: Verifying
- `finished`: The site is verified.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * Record type
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * Record value
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                    /**
                     * NS records of the domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEIDENTIFICATIONRESPONSE_H_

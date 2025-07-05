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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_IMPORTIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_IMPORTIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/IpAccessControlParam.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ImportIpAccessControl request structure.
                */
                class ImportIpAccessControlRequest : public AbstractModel
                {
                public:
                    ImportIpAccessControlRequest();
                    ~ImportIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of imported IP allowlists/blocklists.
                     * @return Data List of imported IP allowlists/blocklists.
                     * 
                     */
                    std::vector<IpAccessControlParam> GetData() const;

                    /**
                     * 设置List of imported IP allowlists/blocklists.
                     * @param _data List of imported IP allowlists/blocklists.
                     * 
                     */
                    void SetData(const std::vector<IpAccessControlParam>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * @return Domain Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * @param _domain Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * @return SourceType Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * @param _sourceType Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * List of imported IP allowlists/blocklists.
                     */
                    std::vector<IpAccessControlParam> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Specific domain name, for example, test.qcloudwaf.com.
Global domain name, that is, global.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Batch protection IP blocklists/allowlists or not. If yes, the value is batch; otherwise, it is empty.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_IMPORTIPACCESSCONTROLREQUEST_H_

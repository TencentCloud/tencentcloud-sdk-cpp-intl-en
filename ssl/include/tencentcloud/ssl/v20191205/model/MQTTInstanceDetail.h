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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MQTTINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MQTTINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * MQTT instance details
                */
                class MQTTInstanceDetail : public AbstractModel
                {
                public:
                    MQTTInstanceDetail();
                    ~MQTTInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param _instanceStatus Instance status
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Mismatched domain name list
                     * @return NoMatchDomains Mismatched domain name list
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置Mismatched domain name list
                     * @param _noMatchDomains Mismatched domain name list
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                    /**
                     * 获取Server certificate list
                     * @return ServerCertIdList Server certificate list
                     * 
                     */
                    std::vector<std::string> GetServerCertIdList() const;

                    /**
                     * 设置Server certificate list
                     * @param _serverCertIdList Server certificate list
                     * 
                     */
                    void SetServerCertIdList(const std::vector<std::string>& _serverCertIdList);

                    /**
                     * 判断参数 ServerCertIdList 是否已赋值
                     * @return ServerCertIdList 是否已赋值
                     * 
                     */
                    bool ServerCertIdListHasBeenSet() const;

                    /**
                     * 获取Certificate list
                     * @return CaCertIdList Certificate list
                     * 
                     */
                    std::vector<std::string> GetCaCertIdList() const;

                    /**
                     * 设置Certificate list
                     * @param _caCertIdList Certificate list
                     * 
                     */
                    void SetCaCertIdList(const std::vector<std::string>& _caCertIdList);

                    /**
                     * 判断参数 CaCertIdList 是否已赋值
                     * @return CaCertIdList 是否已赋值
                     * 
                     */
                    bool CaCertIdListHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Mismatched domain name list
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                    /**
                     * Server certificate list
                     */
                    std::vector<std::string> m_serverCertIdList;
                    bool m_serverCertIdListHasBeenSet;

                    /**
                     * Certificate list
                     */
                    std::vector<std::string> m_caCertIdList;
                    bool m_caCertIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MQTTINSTANCEDETAIL_H_

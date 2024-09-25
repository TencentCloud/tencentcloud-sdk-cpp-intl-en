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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyObject request structure.
                */
                class ModifyObjectRequest : public AbstractModel
                {
                public:
                    ModifyObjectRequest();
                    ~ModifyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Modifies the object identifier
                     * @return ObjectId Modifies the object identifier
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置Modifies the object identifier
                     * @param _objectId Modifies the object identifier
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取Action type. Status: change enabling status; InstanceId: bind to an instance; Proxy: set the proxy status.
                     * @return OpType Action type. Status: change enabling status; InstanceId: bind to an instance; Proxy: set the proxy status.
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置Action type. Status: change enabling status; InstanceId: bind to an instance; Proxy: set the proxy status.
                     * @param _opType Action type. Status: change enabling status; InstanceId: bind to an instance; Proxy: set the proxy status.
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取New WAF switch status, considered successful if identical to existing status
                     * @return Status New WAF switch status, considered successful if identical to existing status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置New WAF switch status, considered successful if identical to existing status
                     * @param _status New WAF switch status, considered successful if identical to existing status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取New instance ID: considered a successful modification if identical to an already bound instance
                     * @return InstanceId New instance ID: considered a successful modification if identical to an already bound instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置New instance ID: considered a successful modification if identical to an already bound instance
                     * @param _instanceId New instance ID: considered a successful modification if identical to an already bound instance
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
                     * 获取Whether to enable proxy. 0: do not enable; 1: use the first IP address in XFF as the client IP address; 2: use remote_addr as the client IP address; 3: obtain the client IP address from the specified header field that is given in IpHeaders. (This value is effective when OpType is set to Status or Proxy.)
                     * @return Proxy Whether to enable proxy. 0: do not enable; 1: use the first IP address in XFF as the client IP address; 2: use remote_addr as the client IP address; 3: obtain the client IP address from the specified header field that is given in IpHeaders. (This value is effective when OpType is set to Status or Proxy.)
                     * 
                     */
                    uint64_t GetProxy() const;

                    /**
                     * 设置Whether to enable proxy. 0: do not enable; 1: use the first IP address in XFF as the client IP address; 2: use remote_addr as the client IP address; 3: obtain the client IP address from the specified header field that is given in IpHeaders. (This value is effective when OpType is set to Status or Proxy.)
                     * @param _proxy Whether to enable proxy. 0: do not enable; 1: use the first IP address in XFF as the client IP address; 2: use remote_addr as the client IP address; 3: obtain the client IP address from the specified header field that is given in IpHeaders. (This value is effective when OpType is set to Status or Proxy.)
                     * 
                     */
                    void SetProxy(const uint64_t& _proxy);

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取This parameter indicates a custom header and is required when IsCdn is set to 3. (The value is effective when OpType is set to Status or Proxy.)
                     * @return IpHeaders This parameter indicates a custom header and is required when IsCdn is set to 3. (The value is effective when OpType is set to Status or Proxy.)
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置This parameter indicates a custom header and is required when IsCdn is set to 3. (The value is effective when OpType is set to Status or Proxy.)
                     * @param _ipHeaders This parameter indicates a custom header and is required when IsCdn is set to 3. (The value is effective when OpType is set to Status or Proxy.)
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                private:

                    /**
                     * Modifies the object identifier
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * Action type. Status: change enabling status; InstanceId: bind to an instance; Proxy: set the proxy status.
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * New WAF switch status, considered successful if identical to existing status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * New instance ID: considered a successful modification if identical to an already bound instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to enable proxy. 0: do not enable; 1: use the first IP address in XFF as the client IP address; 2: use remote_addr as the client IP address; 3: obtain the client IP address from the specified header field that is given in IpHeaders. (This value is effective when OpType is set to Status or Proxy.)
                     */
                    uint64_t m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * This parameter indicates a custom header and is required when IsCdn is set to 3. (The value is effective when OpType is set to Status or Proxy.)
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_

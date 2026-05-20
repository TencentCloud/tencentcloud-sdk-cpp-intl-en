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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_GAAPLISTENERDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_GAAPLISTENERDETAIL_H_

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
                * GAAP listener details
                */
                class GAAPListenerDetail : public AbstractModel
                {
                public:
                    GAAPListenerDetail();
                    ~GAAPListenerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener status
                     * @return ListenerStatus Listener status
                     * 
                     */
                    std::string GetListenerStatus() const;

                    /**
                     * 设置Listener status
                     * @param _listenerStatus Listener status
                     * 
                     */
                    void SetListenerStatus(const std::string& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取listener ID
                     * @return ListenerId listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置listener ID
                     * @param _listenerId listener ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取listener name
                     * @return ListenerName listener name
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置listener name
                     * @param _listenerName listener name
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

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
                     * 获取Certificate list associated with CVM instances	
                     * @return CertIdList Certificate list associated with CVM instances	
                     * 
                     */
                    std::vector<std::string> GetCertIdList() const;

                    /**
                     * 设置Certificate list associated with CVM instances	
                     * @param _certIdList Certificate list associated with CVM instances	
                     * 
                     */
                    void SetCertIdList(const std::vector<std::string>& _certIdList);

                    /**
                     * 判断参数 CertIdList 是否已赋值
                     * @return CertIdList 是否已赋值
                     * 
                     */
                    bool CertIdListHasBeenSet() const;

                    /**
                     * 获取Listener protocol
                     * @return Protocol Listener protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol
                     * @param _protocol Listener protocol
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Listener status
                     */
                    std::string m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Mismatched domain name list
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                    /**
                     * Certificate list associated with CVM instances	
                     */
                    std::vector<std::string> m_certIdList;
                    bool m_certIdListHasBeenSet;

                    /**
                     * Listener protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_GAAPLISTENERDETAIL_H_

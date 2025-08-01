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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINERRORPAGEINFOREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINERRORPAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/HttpHeaderParam.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateDomainErrorPageInfo request structure.
                */
                class CreateDomainErrorPageInfoRequest : public AbstractModel
                {
                public:
                    CreateDomainErrorPageInfoRequest();
                    ~CreateDomainErrorPageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param _listenerId Listener ID
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
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
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
                     * 获取Original error code
                     * @return ErrorNos Original error code
                     * 
                     */
                    std::vector<int64_t> GetErrorNos() const;

                    /**
                     * 设置Original error code
                     * @param _errorNos Original error code
                     * 
                     */
                    void SetErrorNos(const std::vector<int64_t>& _errorNos);

                    /**
                     * 判断参数 ErrorNos 是否已赋值
                     * @return ErrorNos 是否已赋值
                     * 
                     */
                    bool ErrorNosHasBeenSet() const;

                    /**
                     * 获取New response packet
                     * @return Body New response packet
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置New response packet
                     * @param _body New response packet
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取New error code
                     * @return NewErrorNo New error code
                     * 
                     */
                    int64_t GetNewErrorNo() const;

                    /**
                     * 设置New error code
                     * @param _newErrorNo New error code
                     * 
                     */
                    void SetNewErrorNo(const int64_t& _newErrorNo);

                    /**
                     * 判断参数 NewErrorNo 是否已赋值
                     * @return NewErrorNo 是否已赋值
                     * 
                     */
                    bool NewErrorNoHasBeenSet() const;

                    /**
                     * 获取Response header to be deleted
                     * @return ClearHeaders Response header to be deleted
                     * 
                     */
                    std::vector<std::string> GetClearHeaders() const;

                    /**
                     * 设置Response header to be deleted
                     * @param _clearHeaders Response header to be deleted
                     * 
                     */
                    void SetClearHeaders(const std::vector<std::string>& _clearHeaders);

                    /**
                     * 判断参数 ClearHeaders 是否已赋值
                     * @return ClearHeaders 是否已赋值
                     * 
                     */
                    bool ClearHeadersHasBeenSet() const;

                    /**
                     * 获取Response header to be set
                     * @return SetHeaders Response header to be set
                     * 
                     */
                    std::vector<HttpHeaderParam> GetSetHeaders() const;

                    /**
                     * 设置Response header to be set
                     * @param _setHeaders Response header to be set
                     * 
                     */
                    void SetSetHeaders(const std::vector<HttpHeaderParam>& _setHeaders);

                    /**
                     * 判断参数 SetHeaders 是否已赋值
                     * @return SetHeaders 是否已赋值
                     * 
                     */
                    bool SetHeadersHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Original error code
                     */
                    std::vector<int64_t> m_errorNos;
                    bool m_errorNosHasBeenSet;

                    /**
                     * New response packet
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * New error code
                     */
                    int64_t m_newErrorNo;
                    bool m_newErrorNoHasBeenSet;

                    /**
                     * Response header to be deleted
                     */
                    std::vector<std::string> m_clearHeaders;
                    bool m_clearHeadersHasBeenSet;

                    /**
                     * Response header to be set
                     */
                    std::vector<HttpHeaderParam> m_setHeaders;
                    bool m_setHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEDOMAINERRORPAGEINFOREQUEST_H_

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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DELETELISTENERADDITIONALCERTREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DELETELISTENERADDITIONALCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DeleteListenerAdditionalCert request structure.
                */
                class DeleteListenerAdditionalCertRequest : public AbstractModel
                {
                public:
                    DeleteListenerAdditionalCertRequest();
                    ~DeleteListenerAdditionalCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Global acceleration instance ID.
                     * @return GlobalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置Global acceleration instance ID.
                     * @param _globalAcceleratorId Global acceleration instance ID.
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取Listener ID.
                     * @return ListenerId Listener ID.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID.
                     * @param _listenerId Listener ID.
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
                     * 获取Certificate ID.
                     * @return AdditionalCertificates Certificate ID.
                     * 
                     */
                    std::vector<std::string> GetAdditionalCertificates() const;

                    /**
                     * 设置Certificate ID.
                     * @param _additionalCertificates Certificate ID.
                     * 
                     */
                    void SetAdditionalCertificates(const std::vector<std::string>& _additionalCertificates);

                    /**
                     * 判断参数 AdditionalCertificates 是否已赋值
                     * @return AdditionalCertificates 是否已赋值
                     * 
                     */
                    bool AdditionalCertificatesHasBeenSet() const;

                private:

                    /**
                     * Global acceleration instance ID.
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * Listener ID.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Certificate ID.
                     */
                    std::vector<std::string> m_additionalCertificates;
                    bool m_additionalCertificatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DELETELISTENERADDITIONALCERTREQUEST_H_

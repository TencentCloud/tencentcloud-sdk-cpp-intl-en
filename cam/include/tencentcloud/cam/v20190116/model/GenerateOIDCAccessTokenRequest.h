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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GENERATEOIDCACCESSTOKENREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GENERATEOIDCACCESSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GenerateOIDCAccessToken request structure.
                */
                class GenerateOIDCAccessTokenRequest : public AbstractModel
                {
                public:
                    GenerateOIDCAccessTokenRequest();
                    ~GenerateOIDCAccessTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Client ID</p>
                     * @return ClientId <p>Client ID</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>Client ID</p>
                     * @param _clientId <p>Client ID</p>
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取<p>Resource ID</p>
                     * @return ResourceId <p>Resource ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID</p>
                     * @param _resourceId <p>Resource ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Client ID</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>Resource ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GENERATEOIDCACCESSTOKENREQUEST_H_

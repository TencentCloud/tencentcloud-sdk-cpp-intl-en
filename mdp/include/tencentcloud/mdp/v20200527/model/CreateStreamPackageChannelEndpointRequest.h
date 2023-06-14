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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELENDPOINTREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageChannelEndpoint request structure.
                */
                class CreateStreamPackageChannelEndpointRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageChannelEndpointRequest();
                    ~CreateStreamPackageChannelEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return Id Channel ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID
                     * @param _id Channel ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * @return Name Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * @param _name Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Authentication information
                     * @return AuthInfo Authentication information
                     * 
                     */
                    EndpointAuthInfo GetAuthInfo() const;

                    /**
                     * 设置Authentication information
                     * @param _authInfo Authentication information
                     * 
                     */
                    void SetAuthInfo(const EndpointAuthInfo& _authInfo);

                    /**
                     * 判断参数 AuthInfo 是否已赋值
                     * @return AuthInfo 是否已赋值
                     * 
                     */
                    bool AuthInfoHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Endpoint name, which must contain 1 to 32 characters and supports digits, letters, and underscores
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Authentication information
                     */
                    EndpointAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELENDPOINTREQUEST_H_

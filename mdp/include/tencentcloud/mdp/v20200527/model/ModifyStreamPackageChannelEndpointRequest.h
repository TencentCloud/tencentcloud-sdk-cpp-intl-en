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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELENDPOINTREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELENDPOINTREQUEST_H_

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
                * ModifyStreamPackageChannelEndpoint request structure.
                */
                class ModifyStreamPackageChannelEndpointRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageChannelEndpointRequest();
                    ~ModifyStreamPackageChannelEndpointRequest() = default;
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
                     * 获取Channel endpoint URL
                     * @return Url Channel endpoint URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Channel endpoint URL
                     * @param _url Channel endpoint URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取New endpoint name
                     * @return Name New endpoint name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置New endpoint name
                     * @param _name New endpoint name
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
                     * 获取New channel authentication information
                     * @return AuthInfo New channel authentication information
                     * 
                     */
                    EndpointAuthInfo GetAuthInfo() const;

                    /**
                     * 设置New channel authentication information
                     * @param _authInfo New channel authentication information
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
                     * Channel endpoint URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * New endpoint name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * New channel authentication information
                     */
                    EndpointAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELENDPOINTREQUEST_H_

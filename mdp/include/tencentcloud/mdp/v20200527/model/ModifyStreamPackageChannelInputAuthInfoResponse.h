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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELINPUTAUTHINFORESPONSE_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELINPUTAUTHINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/InputAuthInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageChannelInputAuthInfo response structure.
                */
                class ModifyStreamPackageChannelInputAuthInfoResponse : public AbstractModel
                {
                public:
                    ModifyStreamPackageChannelInputAuthInfoResponse();
                    ~ModifyStreamPackageChannelInputAuthInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel input authentication information
                     * @return AuthInfo Channel input authentication information
                     * 
                     */
                    InputAuthInfo GetAuthInfo() const;

                    /**
                     * 判断参数 AuthInfo 是否已赋值
                     * @return AuthInfo 是否已赋值
                     * 
                     */
                    bool AuthInfoHasBeenSet() const;

                private:

                    /**
                     * Channel input authentication information
                     */
                    InputAuthInfo m_authInfo;
                    bool m_authInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELINPUTAUTHINFORESPONSE_H_

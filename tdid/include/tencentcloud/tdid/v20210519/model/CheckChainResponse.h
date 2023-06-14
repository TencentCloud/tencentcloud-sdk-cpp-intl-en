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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CHECKCHAINRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CHECKCHAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CheckChain response structure.
                */
                class CheckChainResponse : public AbstractModel
                {
                public:
                    CheckChainResponse();
                    ~CheckChainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     * @return RoleType Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     * 
                     */
                    int64_t GetRoleType() const;

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取The chain ID.
                     * @return ChainId The chain ID.
                     * 
                     */
                    std::string GetChainId() const;

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取The application name.
                     * @return AppName The application name.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * Whether you are the owner of the consortium. `1`: Yes; `0`: No.
                     */
                    int64_t m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * The chain ID.
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * The application name.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CHECKCHAINRESPONSE_H_

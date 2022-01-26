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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELINPUTAUTHINFOREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELINPUTAUTHINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageChannelInputAuthInfo request structure.
                */
                class ModifyStreamPackageChannelInputAuthInfoRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageChannelInputAuthInfoRequest();
                    ~ModifyStreamPackageChannelInputAuthInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return Id Channel ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID
                     * @param Id Channel ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Channel input URL
                     * @return Url Channel input URL
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Channel input URL
                     * @param Url Channel input URL
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Authentication configuration. Valid values: `CLOSE`, `UPDATE`
`CLOSE`: disable authentication
`UPDATE`: update authentication information
                     * @return ActionType Authentication configuration. Valid values: `CLOSE`, `UPDATE`
`CLOSE`: disable authentication
`UPDATE`: update authentication information
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Authentication configuration. Valid values: `CLOSE`, `UPDATE`
`CLOSE`: disable authentication
`UPDATE`: update authentication information
                     * @param ActionType Authentication configuration. Valid values: `CLOSE`, `UPDATE`
`CLOSE`: disable authentication
`UPDATE`: update authentication information
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Channel input URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Authentication configuration. Valid values: `CLOSE`, `UPDATE`
`CLOSE`: disable authentication
`UPDATE`: update authentication information
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELINPUTAUTHINFOREQUEST_H_

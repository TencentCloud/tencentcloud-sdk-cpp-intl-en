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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_FORCEQNREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_FORCEQNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * ForceQN request structure.
                */
                class ForceQNRequest : public AbstractModel
                {
                public:
                    ForceQNRequest();
                    ~ForceQNRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-account UIN
                     * @return ClientUin Sub-account UIN
                     * 
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置Sub-account UIN
                     * @param _clientUin Sub-account UIN
                     * 
                     */
                    void SetClientUin(const uint64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取0: Normal  2: Forced service suspension
                     * @return Type 0: Normal  2: Forced service suspension
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: Normal  2: Forced service suspension
                     * @param _type 0: Normal  2: Forced service suspension
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Sub-account UIN
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 0: Normal  2: Forced service suspension
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_FORCEQNREQUEST_H_

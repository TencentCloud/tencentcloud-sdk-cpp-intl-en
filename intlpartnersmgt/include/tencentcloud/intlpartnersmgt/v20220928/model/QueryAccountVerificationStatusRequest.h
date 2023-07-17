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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYACCOUNTVERIFICATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYACCOUNTVERIFICATIONSTATUSREQUEST_H_

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
                * QueryAccountVerificationStatus request structure.
                */
                class QueryAccountVerificationStatusRequest : public AbstractModel
                {
                public:
                    QueryAccountVerificationStatusRequest();
                    ~QueryAccountVerificationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Customer UIN
                     * @return ClientUin Customer UIN
                     * 
                     */
                    int64_t GetClientUin() const;

                    /**
                     * 设置Customer UIN
                     * @param _clientUin Customer UIN
                     * 
                     */
                    void SetClientUin(const int64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                private:

                    /**
                     * Customer UIN
                     */
                    int64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYACCOUNTVERIFICATIONSTATUSREQUEST_H_

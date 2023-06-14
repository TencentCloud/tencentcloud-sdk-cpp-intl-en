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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CANCELAUTHORITYISSUERREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CANCELAUTHORITYISSUERREQUEST_H_

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
                * CancelAuthorityIssuer request structure.
                */
                class CancelAuthorityIssuerRequest : public AbstractModel
                {
                public:
                    CancelAuthorityIssuerRequest();
                    ~CancelAuthorityIssuerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The details of the DID.
                     * @return Did The details of the DID.
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置The details of the DID.
                     * @param _did The details of the DID.
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                private:

                    /**
                     * The details of the DID.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CANCELAUTHORITYISSUERREQUEST_H_

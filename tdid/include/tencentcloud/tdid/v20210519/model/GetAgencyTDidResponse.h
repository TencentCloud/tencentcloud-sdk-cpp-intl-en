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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAGENCYTDIDRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAGENCYTDIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Identity.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAgencyTDid response structure.
                */
                class GetAgencyTDidResponse : public AbstractModel
                {
                public:
                    GetAgencyTDidResponse();
                    ~GetAgencyTDidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The prefix (fixed).
                     * @return Prefix The prefix (fixed).
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取The details of the DID.
                     * @return Identity The details of the DID.
                     * 
                     */
                    std::vector<Identity> GetIdentity() const;

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                private:

                    /**
                     * The prefix (fixed).
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * The details of the DID.
                     */
                    std::vector<Identity> m_identity;
                    bool m_identityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAGENCYTDIDRESPONSE_H_

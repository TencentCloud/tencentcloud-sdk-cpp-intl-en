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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_GETSERVICESTATUSRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_GETSERVICESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * GetServiceStatus response structure.
                */
                class GetServiceStatusResponse : public AbstractModel
                {
                public:
                    GetServiceStatusResponse();
                    ~GetServiceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取`true`: The service is activated; `false`: The service is not activated.
                     * @return ServiceEnabled `true`: The service is activated; `false`: The service is not activated.
                     * 
                     */
                    bool GetServiceEnabled() const;

                    /**
                     * 判断参数 ServiceEnabled 是否已赋值
                     * @return ServiceEnabled 是否已赋值
                     * 
                     */
                    bool ServiceEnabledHasBeenSet() const;

                    /**
                     * 获取Invalid service type. `0`: not purchased; `1`: normal; `2`: suspended due to arrears; `3`: resource released
                     * @return InvalidType Invalid service type. `0`: not purchased; `1`: normal; `2`: suspended due to arrears; `3`: resource released
                     * 
                     */
                    int64_t GetInvalidType() const;

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     * 
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取`true`: Allow SSM to manage Tencent Cloud API key secrets.
`false`: Forbid SSM to manage Tencent Cloud API key secrets.
                     * @return AccessKeyEscrowEnabled `true`: Allow SSM to manage Tencent Cloud API key secrets.
`false`: Forbid SSM to manage Tencent Cloud API key secrets.
                     * 
                     */
                    bool GetAccessKeyEscrowEnabled() const;

                    /**
                     * 判断参数 AccessKeyEscrowEnabled 是否已赋值
                     * @return AccessKeyEscrowEnabled 是否已赋值
                     * 
                     */
                    bool AccessKeyEscrowEnabledHasBeenSet() const;

                private:

                    /**
                     * `true`: The service is activated; `false`: The service is not activated.
                     */
                    bool m_serviceEnabled;
                    bool m_serviceEnabledHasBeenSet;

                    /**
                     * Invalid service type. `0`: not purchased; `1`: normal; `2`: suspended due to arrears; `3`: resource released
                     */
                    int64_t m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * `true`: Allow SSM to manage Tencent Cloud API key secrets.
`false`: Forbid SSM to manage Tencent Cloud API key secrets.
                     */
                    bool m_accessKeyEscrowEnabled;
                    bool m_accessKeyEscrowEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_GETSERVICESTATUSRESPONSE_H_

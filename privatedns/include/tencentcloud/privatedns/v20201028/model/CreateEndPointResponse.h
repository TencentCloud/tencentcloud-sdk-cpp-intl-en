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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateEndPoint response structure.
                */
                class CreateEndPointResponse : public AbstractModel
                {
                public:
                    CreateEndPointResponse();
                    ~CreateEndPointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Endpoint ID.
                     * @return EndPointId Endpoint ID.
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取Endpoint name.
                     * @return EndPointName Endpoint name.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID.
                     * @return EndPointServiceId Endpoint service ID.
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取IP address list of the endpoint.
                     * @return EndPointVipSet IP address list of the endpoint.
                     * 
                     */
                    std::vector<std::string> GetEndPointVipSet() const;

                    /**
                     * 判断参数 EndPointVipSet 是否已赋值
                     * @return EndPointVipSet 是否已赋值
                     * 
                     */
                    bool EndPointVipSetHasBeenSet() const;

                private:

                    /**
                     * Endpoint ID.
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * Endpoint name.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint service ID.
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * IP address list of the endpoint.
                     */
                    std::vector<std::string> m_endPointVipSet;
                    bool m_endPointVipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTRESPONSE_H_

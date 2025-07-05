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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTREQUEST_H_

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
                * CreateEndPoint request structure.
                */
                class CreateEndPointRequest : public AbstractModel
                {
                public:
                    CreateEndPointRequest();
                    ~CreateEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Endpoint name.
                     * @return EndPointName Endpoint name.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name.
                     * @param _endPointName Endpoint name.
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取Endpoint service ID (namely, VPC endpoint service ID).
                     * @return EndPointServiceId Endpoint service ID (namely, VPC endpoint service ID).
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID (namely, VPC endpoint service ID).
                     * @param _endPointServiceId Endpoint service ID (namely, VPC endpoint service ID).
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取Endpoint region, which should be consistent with the region of the endpoint service.
                     * @return EndPointRegion Endpoint region, which should be consistent with the region of the endpoint service.
                     * 
                     */
                    std::string GetEndPointRegion() const;

                    /**
                     * 设置Endpoint region, which should be consistent with the region of the endpoint service.
                     * @param _endPointRegion Endpoint region, which should be consistent with the region of the endpoint service.
                     * 
                     */
                    void SetEndPointRegion(const std::string& _endPointRegion);

                    /**
                     * 判断参数 EndPointRegion 是否已赋值
                     * @return EndPointRegion 是否已赋值
                     * 
                     */
                    bool EndPointRegionHasBeenSet() const;

                    /**
                     * 获取Number of endpoint IP addresses.
                     * @return IpNum Number of endpoint IP addresses.
                     * 
                     */
                    int64_t GetIpNum() const;

                    /**
                     * 设置Number of endpoint IP addresses.
                     * @param _ipNum Number of endpoint IP addresses.
                     * 
                     */
                    void SetIpNum(const int64_t& _ipNum);

                    /**
                     * 判断参数 IpNum 是否已赋值
                     * @return IpNum 是否已赋值
                     * 
                     */
                    bool IpNumHasBeenSet() const;

                private:

                    /**
                     * Endpoint name.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint service ID (namely, VPC endpoint service ID).
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * Endpoint region, which should be consistent with the region of the endpoint service.
                     */
                    std::string m_endPointRegion;
                    bool m_endPointRegionHasBeenSet;

                    /**
                     * Number of endpoint IP addresses.
                     */
                    int64_t m_ipNum;
                    bool m_ipNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTREQUEST_H_

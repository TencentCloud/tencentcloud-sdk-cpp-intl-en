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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteVpcEndPoint request structure.
                */
                class DeleteVpcEndPointRequest : public AbstractModel
                {
                public:
                    DeleteVpcEndPointRequest();
                    ~DeleteVpcEndPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Endpoint ID
                     * @return EndPointId Endpoint ID
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置Endpoint ID
                     * @param _endPointId Endpoint ID
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                private:

                    /**
                     * Endpoint ID
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTREQUEST_H_

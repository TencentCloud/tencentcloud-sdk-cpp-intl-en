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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteCloudNativeAPIGateway request structure.
                */
                class DeleteCloudNativeAPIGatewayRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayRequest();
                    ~DeleteCloudNativeAPIGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud native API gateway instance ID.
                     * @return GatewayId Cloud native API gateway instance ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud native API gateway instance ID.
                     * @param _gatewayId Cloud native API gateway instance ID.
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Whether to delete the CLS log topic associated with the instance.
                     * @return DeleteClsTopic Whether to delete the CLS log topic associated with the instance.
                     * 
                     */
                    bool GetDeleteClsTopic() const;

                    /**
                     * 设置Whether to delete the CLS log topic associated with the instance.
                     * @param _deleteClsTopic Whether to delete the CLS log topic associated with the instance.
                     * 
                     */
                    void SetDeleteClsTopic(const bool& _deleteClsTopic);

                    /**
                     * 判断参数 DeleteClsTopic 是否已赋值
                     * @return DeleteClsTopic 是否已赋值
                     * 
                     */
                    bool DeleteClsTopicHasBeenSet() const;

                private:

                    /**
                     * Cloud native API gateway instance ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Whether to delete the CLS log topic associated with the instance.
                     */
                    bool m_deleteClsTopic;
                    bool m_deleteClsTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYREQUEST_H_

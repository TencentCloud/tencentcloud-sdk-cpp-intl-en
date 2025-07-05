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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DeleteService request structure.
                */
                class DeleteServiceRequest : public AbstractModel
                {
                public:
                    DeleteServiceRequest();
                    ~DeleteServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the service to be deleted.
                     * @return ServiceId Unique ID of the service to be deleted.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be deleted.
                     * @param _serviceId Unique ID of the service to be deleted.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取A parameter used to set to skip the deletion precondition verification (only supported for services on dedicated instances).
                     * @return SkipVerification A parameter used to set to skip the deletion precondition verification (only supported for services on dedicated instances).
                     * 
                     */
                    int64_t GetSkipVerification() const;

                    /**
                     * 设置A parameter used to set to skip the deletion precondition verification (only supported for services on dedicated instances).
                     * @param _skipVerification A parameter used to set to skip the deletion precondition verification (only supported for services on dedicated instances).
                     * 
                     */
                    void SetSkipVerification(const int64_t& _skipVerification);

                    /**
                     * 判断参数 SkipVerification 是否已赋值
                     * @return SkipVerification 是否已赋值
                     * 
                     */
                    bool SkipVerificationHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be deleted.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * A parameter used to set to skip the deletion precondition verification (only supported for services on dedicated instances).
                     */
                    int64_t m_skipVerification;
                    bool m_skipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETESERVICEREQUEST_H_

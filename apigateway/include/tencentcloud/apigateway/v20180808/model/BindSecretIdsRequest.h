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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDSECRETIDSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDSECRETIDSREQUEST_H_

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
                * BindSecretIds request structure.
                */
                class BindSecretIdsRequest : public AbstractModel
                {
                public:
                    BindSecretIdsRequest();
                    ~BindSecretIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the usage plan to be bound.
                     * @return UsagePlanId Unique ID of the usage plan to be bound.
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置Unique ID of the usage plan to be bound.
                     * @param _usagePlanId Unique ID of the usage plan to be bound.
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取Array of IDs of the keys to be bound.
                     * @return AccessKeyIds Array of IDs of the keys to be bound.
                     * 
                     */
                    std::vector<std::string> GetAccessKeyIds() const;

                    /**
                     * 设置Array of IDs of the keys to be bound.
                     * @param _accessKeyIds Array of IDs of the keys to be bound.
                     * 
                     */
                    void SetAccessKeyIds(const std::vector<std::string>& _accessKeyIds);

                    /**
                     * 判断参数 AccessKeyIds 是否已赋值
                     * @return AccessKeyIds 是否已赋值
                     * 
                     */
                    bool AccessKeyIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the usage plan to be bound.
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * Array of IDs of the keys to be bound.
                     */
                    std::vector<std::string> m_accessKeyIds;
                    bool m_accessKeyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDSECRETIDSREQUEST_H_

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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIAPPREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIAPPREQUEST_H_

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
                * CreateApiApp request structure.
                */
                class CreateApiAppRequest : public AbstractModel
                {
                public:
                    CreateApiAppRequest();
                    ~CreateApiAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom application name.
                     * @return ApiAppName Custom application name.
                     * 
                     */
                    std::string GetApiAppName() const;

                    /**
                     * 设置Custom application name.
                     * @param _apiAppName Custom application name.
                     * 
                     */
                    void SetApiAppName(const std::string& _apiAppName);

                    /**
                     * 判断参数 ApiAppName 是否已赋值
                     * @return ApiAppName 是否已赋值
                     * 
                     */
                    bool ApiAppNameHasBeenSet() const;

                    /**
                     * 获取Application description
                     * @return ApiAppDesc Application description
                     * 
                     */
                    std::string GetApiAppDesc() const;

                    /**
                     * 设置Application description
                     * @param _apiAppDesc Application description
                     * 
                     */
                    void SetApiAppDesc(const std::string& _apiAppDesc);

                    /**
                     * 判断参数 ApiAppDesc 是否已赋值
                     * @return ApiAppDesc 是否已赋值
                     * 
                     */
                    bool ApiAppDescHasBeenSet() const;

                private:

                    /**
                     * Custom application name.
                     */
                    std::string m_apiAppName;
                    bool m_apiAppNameHasBeenSet;

                    /**
                     * Application description
                     */
                    std::string m_apiAppDesc;
                    bool m_apiAppDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEAPIAPPREQUEST_H_

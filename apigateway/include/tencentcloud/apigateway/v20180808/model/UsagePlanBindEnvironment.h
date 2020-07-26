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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDENVIRONMENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of environment bound to usage plan
                */
                class UsagePlanBindEnvironment : public AbstractModel
                {
                public:
                    UsagePlanBindEnvironment();
                    ~UsagePlanBindEnvironment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentName Environment name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EnvironmentName Environment name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceId Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * Environment name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Unique service ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDENVIRONMENT_H_

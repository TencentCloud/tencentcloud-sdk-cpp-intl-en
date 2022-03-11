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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SERVICETEMPLATESPECIFICATION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SERVICETEMPLATESPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Protocol port template
                */
                class ServiceTemplateSpecification : public AbstractModel
                {
                public:
                    ServiceTemplateSpecification();
                    ~ServiceTemplateSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol port ID, such as `eppm-f5n1f8da`.
                     * @return ServiceId Protocol port ID, such as `eppm-f5n1f8da`.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Protocol port ID, such as `eppm-f5n1f8da`.
                     * @param ServiceId Protocol port ID, such as `eppm-f5n1f8da`.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Protocol port group ID, such as `eppmg-f5n1f8da`.
                     * @return ServiceGroupId Protocol port group ID, such as `eppmg-f5n1f8da`.
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置Protocol port group ID, such as `eppmg-f5n1f8da`.
                     * @param ServiceGroupId Protocol port group ID, such as `eppmg-f5n1f8da`.
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                private:

                    /**
                     * Protocol port ID, such as `eppm-f5n1f8da`.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Protocol port group ID, such as `eppmg-f5n1f8da`.
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SERVICETEMPLATESPECIFICATION_H_

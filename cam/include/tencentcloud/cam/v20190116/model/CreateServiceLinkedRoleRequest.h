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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateServiceLinkedRole request structure.
                */
                class CreateServiceLinkedRoleRequest : public AbstractModel
                {
                public:
                    CreateServiceLinkedRoleRequest();
                    ~CreateServiceLinkedRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Authorized service, i.e., Tencent Cloud service entity with this role attached.
                     * @return QCSServiceName Authorized service, i.e., Tencent Cloud service entity with this role attached.
                     */
                    std::vector<std::string> GetQCSServiceName() const;

                    /**
                     * 设置Authorized service, i.e., Tencent Cloud service entity with this role attached.
                     * @param QCSServiceName Authorized service, i.e., Tencent Cloud service entity with this role attached.
                     */
                    void SetQCSServiceName(const std::vector<std::string>& _qCSServiceName);

                    /**
                     * 判断参数 QCSServiceName 是否已赋值
                     * @return QCSServiceName 是否已赋值
                     */
                    bool QCSServiceNameHasBeenSet() const;

                    /**
                     * 获取Custom suffix. A string you provide, which is combined with the service-provided prefix to form the complete role name.
                     * @return CustomSuffix Custom suffix. A string you provide, which is combined with the service-provided prefix to form the complete role name.
                     */
                    std::string GetCustomSuffix() const;

                    /**
                     * 设置Custom suffix. A string you provide, which is combined with the service-provided prefix to form the complete role name.
                     * @param CustomSuffix Custom suffix. A string you provide, which is combined with the service-provided prefix to form the complete role name.
                     */
                    void SetCustomSuffix(const std::string& _customSuffix);

                    /**
                     * 判断参数 CustomSuffix 是否已赋值
                     * @return CustomSuffix 是否已赋值
                     */
                    bool CustomSuffixHasBeenSet() const;

                    /**
                     * 获取Role description.
                     * @return Description Role description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Role description.
                     * @param Description Role description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Authorized service, i.e., Tencent Cloud service entity with this role attached.
                     */
                    std::vector<std::string> m_qCSServiceName;
                    bool m_qCSServiceNameHasBeenSet;

                    /**
                     * Custom suffix. A string you provide, which is combined with the service-provided prefix to form the complete role name.
                     */
                    std::string m_customSuffix;
                    bool m_customSuffixHasBeenSet;

                    /**
                     * Role description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLEREQUEST_H_

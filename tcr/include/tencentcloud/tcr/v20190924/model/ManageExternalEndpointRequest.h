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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEEXTERNALENDPOINTREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEEXTERNALENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ManageExternalEndpoint request structure.
                */
                class ManageExternalEndpointRequest : public AbstractModel
                {
                public:
                    ManageExternalEndpointRequest();
                    ~ManageExternalEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Operation. Valid values: Create, Delete.
                     * @return Operation Operation. Valid values: Create, Delete.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation. Valid values: Create, Delete.
                     * @param _operation Operation. Valid values: Create, Delete.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Operation. Valid values: Create, Delete.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MANAGEEXTERNALENDPOINTREQUEST_H_

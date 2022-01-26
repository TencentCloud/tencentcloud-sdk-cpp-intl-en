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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyInstancesAttribute request structure.
                */
                class ModifyInstancesAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesAttributeRequest();
                    ~ModifyInstancesAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list. Each request can contain up to 100 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * @return InstanceIds Instance ID list. Each request can contain up to 100 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. Each request can contain up to 100 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * @param InstanceIds Instance ID list. Each request can contain up to 100 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Instance name, which is customizable and can contain up to 60 characters.
                     * @return InstanceName Instance name, which is customizable and can contain up to 60 characters.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name, which is customizable and can contain up to 60 characters.
                     * @param InstanceName Instance name, which is customizable and can contain up to 60 characters.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID list. Each request can contain up to 100 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Instance name, which is customizable and can contain up to 60 characters.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESATTRIBUTEREQUEST_H_

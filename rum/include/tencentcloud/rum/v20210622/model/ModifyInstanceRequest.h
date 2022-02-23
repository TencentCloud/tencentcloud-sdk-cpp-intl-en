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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyInstance request structure.
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance to be modified
                     * @return InstanceId ID of the instance to be modified
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance to be modified
                     * @param InstanceId ID of the instance to be modified
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取New instance name (up to 255 characters)
                     * @return InstanceName New instance name (up to 255 characters)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置New instance name (up to 255 characters)
                     * @param InstanceName New instance name (up to 255 characters)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取New instance description (up to 1,024 characters)
                     * @return InstanceDesc New instance description (up to 1,024 characters)
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置New instance description (up to 1,024 characters)
                     * @param InstanceDesc New instance description (up to 1,024 characters)
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     */
                    bool InstanceDescHasBeenSet() const;

                private:

                    /**
                     * ID of the instance to be modified
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * New instance name (up to 255 characters)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * New instance description (up to 1,024 characters)
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYINSTANCEREQUEST_H_

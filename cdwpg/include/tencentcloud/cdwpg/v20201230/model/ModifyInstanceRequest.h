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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
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
                     * 获取InstanceId.
                     * @return InstanceId InstanceId.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId.
                     * @param _instanceId InstanceId.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Name of the newly modified instance.
                     * @return InstanceName Name of the newly modified instance.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Name of the newly modified instance.
                     * @param _instanceName Name of the newly modified instance.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * InstanceId.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the newly modified instance.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_MODIFYINSTANCEREQUEST_H_

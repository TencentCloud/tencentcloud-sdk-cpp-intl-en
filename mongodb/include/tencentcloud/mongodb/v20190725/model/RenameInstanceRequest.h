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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RENAMEINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RENAMEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * RenameInstance request structure.
                */
                class RenameInstanceRequest : public AbstractModel
                {
                public:
                    RenameInstanceRequest();
                    ~RenameInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Format: cmgo-p8vnipr5. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB#/) and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. Format: cmgo-p8vnipr5. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB#/) and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Format: cmgo-p8vnipr5. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB#/) and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. Format: cmgo-p8vnipr5. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB#/) and copy the instance ID from the instance list.
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
                     * 获取Custom instance name. It can contain any character, with a length from 1 to 128 characters.
                     * @return NewName Custom instance name. It can contain any character, with a length from 1 to 128 characters.
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置Custom instance name. It can contain any character, with a length from 1 to 128 characters.
                     * @param _newName Custom instance name. It can contain any character, with a length from 1 to 128 characters.
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Format: cmgo-p8vnipr5. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/MongoDB#/) and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Custom instance name. It can contain any character, with a length from 1 to 128 characters.
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RENAMEINSTANCEREQUEST_H_

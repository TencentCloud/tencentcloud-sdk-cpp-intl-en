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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONFIGFROMMACHINEGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONFIGFROMMACHINEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteConfigFromMachineGroup request structure.
                */
                class DeleteConfigFromMachineGroupRequest : public AbstractModel
                {
                public:
                    DeleteConfigFromMachineGroupRequest();
                    ~DeleteConfigFromMachineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Machine group ID
                     * @return GroupId Machine group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Machine group ID
                     * @param _groupId Machine group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Collection configuration ID
                     * @return ConfigId Collection configuration ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Collection configuration ID
                     * @param _configId Collection configuration ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * Machine group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Collection configuration ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETECONFIGFROMMACHINEGROUPREQUEST_H_

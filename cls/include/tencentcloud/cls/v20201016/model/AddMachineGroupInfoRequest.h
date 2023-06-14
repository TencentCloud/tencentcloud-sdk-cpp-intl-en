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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ADDMACHINEGROUPINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ADDMACHINEGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupTypeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * AddMachineGroupInfo request structure.
                */
                class AddMachineGroupInfoRequest : public AbstractModel
                {
                public:
                    AddMachineGroupInfoRequest();
                    ~AddMachineGroupInfoRequest() = default;
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
                     * 获取Machine group type
Supported types: `ip` and `label`
                     * @return MachineGroupType Machine group type
Supported types: `ip` and `label`
                     * 
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置Machine group type
Supported types: `ip` and `label`
                     * @param _machineGroupType Machine group type
Supported types: `ip` and `label`
                     * 
                     */
                    void SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType);

                    /**
                     * 判断参数 MachineGroupType 是否已赋值
                     * @return MachineGroupType 是否已赋值
                     * 
                     */
                    bool MachineGroupTypeHasBeenSet() const;

                private:

                    /**
                     * Machine group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Machine group type
Supported types: `ip` and `label`
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ADDMACHINEGROUPINFOREQUEST_H_

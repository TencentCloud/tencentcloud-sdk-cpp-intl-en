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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYWORKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ModifyWorkGroup request structure.
                */
                class ModifyWorkGroupRequest : public AbstractModel
                {
                public:
                    ModifyWorkGroupRequest();
                    ~ModifyWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Working group IDs
                     * @return WorkGroupId Working group IDs
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置Working group IDs
                     * @param _workGroupId Working group IDs
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取Working group description, and the upper limit of the number of its characters is 50.
                     * @return WorkGroupDescription Working group description, and the upper limit of the number of its characters is 50.
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置Working group description, and the upper limit of the number of its characters is 50.
                     * @param _workGroupDescription Working group description, and the upper limit of the number of its characters is 50.
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                private:

                    /**
                     * Working group IDs
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * Working group description, and the upper limit of the number of its characters is 50.
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYWORKGROUPREQUEST_H_

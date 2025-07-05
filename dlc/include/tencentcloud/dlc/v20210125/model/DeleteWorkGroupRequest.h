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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETEWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETEWORKGROUPREQUEST_H_

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
                * DeleteWorkGroup request structure.
                */
                class DeleteWorkGroupRequest : public AbstractModel
                {
                public:
                    DeleteWorkGroupRequest();
                    ~DeleteWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of IDs of working groups to be deleted
                     * @return WorkGroupIds Collection of IDs of working groups to be deleted
                     * 
                     */
                    std::vector<int64_t> GetWorkGroupIds() const;

                    /**
                     * 设置Collection of IDs of working groups to be deleted
                     * @param _workGroupIds Collection of IDs of working groups to be deleted
                     * 
                     */
                    void SetWorkGroupIds(const std::vector<int64_t>& _workGroupIds);

                    /**
                     * 判断参数 WorkGroupIds 是否已赋值
                     * @return WorkGroupIds 是否已赋值
                     * 
                     */
                    bool WorkGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Collection of IDs of working groups to be deleted
                     */
                    std::vector<int64_t> m_workGroupIds;
                    bool m_workGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETEWORKGROUPREQUEST_H_

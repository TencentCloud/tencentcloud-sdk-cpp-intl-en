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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEPROJECTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceProject request structure.
                */
                class ModifyDBInstanceProjectRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceProjectRequest();
                    ~ModifyDBInstanceProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter.
Description: Multiple instance IDs can be entered for modification. The json format is as follows.
[
    "cdb-30z11v8s",
    "cdb-93h11efg"
  ]
                     * @return InstanceIds Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter.
Description: Multiple instance IDs can be entered for modification. The json format is as follows.
[
    "cdb-30z11v8s",
    "cdb-93h11efg"
  ]
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter.
Description: Multiple instance IDs can be entered for modification. The json format is as follows.
[
    "cdb-30z11v8s",
    "cdb-93h11efg"
  ]
                     * @param _instanceIds Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter.
Description: Multiple instance IDs can be entered for modification. The json format is as follows.
[
    "cdb-30z11v8s",
    "cdb-93h11efg"
  ]
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取ID of the project to which instance belongs can be queried on the Projects page in the account center.
Description: This item is required.
                     * @return NewProjectId ID of the project to which instance belongs can be queried on the Projects page in the account center.
Description: This item is required.
                     * 
                     */
                    int64_t GetNewProjectId() const;

                    /**
                     * 设置ID of the project to which instance belongs can be queried on the Projects page in the account center.
Description: This item is required.
                     * @param _newProjectId ID of the project to which instance belongs can be queried on the Projects page in the account center.
Description: This item is required.
                     * 
                     */
                    void SetNewProjectId(const int64_t& _newProjectId);

                    /**
                     * 判断参数 NewProjectId 是否已赋值
                     * @return NewProjectId 是否已赋值
                     * 
                     */
                    bool NewProjectIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter.
Description: Multiple instance IDs can be entered for modification. The json format is as follows.
[
    "cdb-30z11v8s",
    "cdb-93h11efg"
  ]
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * ID of the project to which instance belongs can be queried on the Projects page in the account center.
Description: This item is required.
                     */
                    int64_t m_newProjectId;
                    bool m_newProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEPROJECTREQUEST_H_

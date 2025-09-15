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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGMODIFYINFOV2_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGMODIFYINFOV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ItemSeq.h>
#include <tencentcloud/emr/v20190103/model/ConfigSetInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource scheduling - Queue modification information
                */
                class ConfigModifyInfoV2 : public AbstractModel
                {
                public:
                    ConfigModifyInfoV2();
                    ~ConfigModifyInfoV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type. Valid values:

- 0: create a queue.
- 1: edit - full overwrite.
- 2: create a sub-queue.
- 3: delete.
- 4: clone. It is the same as sub-queue creation. Especially, for `fair`, a sub-queue can be copied to a new queue.
- 6: edit - incremental update.
                     * @return OpType Operation type. Valid values:

- 0: create a queue.
- 1: edit - full overwrite.
- 2: create a sub-queue.
- 3: delete.
- 4: clone. It is the same as sub-queue creation. Especially, for `fair`, a sub-queue can be copied to a new queue.
- 6: edit - incremental update.
                     * 
                     */
                    uint64_t GetOpType() const;

                    /**
                     * 设置Operation type. Valid values:

- 0: create a queue.
- 1: edit - full overwrite.
- 2: create a sub-queue.
- 3: delete.
- 4: clone. It is the same as sub-queue creation. Especially, for `fair`, a sub-queue can be copied to a new queue.
- 6: edit - incremental update.
                     * @param _opType Operation type. Valid values:

- 0: create a queue.
- 1: edit - full overwrite.
- 2: create a sub-queue.
- 3: delete.
- 4: clone. It is the same as sub-queue creation. Especially, for `fair`, a sub-queue can be copied to a new queue.
- 6: edit - incremental update.
                     * 
                     */
                    void SetOpType(const uint64_t& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取Queue name. It cannot be modified.
                     * @return Name Queue name. It cannot be modified.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Queue name. It cannot be modified.
                     * @param _name Queue name. It cannot be modified.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Create root queue: Pass "myId of root"; Create sub-queue: Pass "myId of the selected queue"; Clone queue: Pass "parentId of the selected queue".
                     * @return ParentId Create root queue: Pass "myId of root"; Create sub-queue: Pass "myId of the selected queue"; Clone queue: Pass "parentId of the selected queue".
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Create root queue: Pass "myId of root"; Create sub-queue: Pass "myId of the selected queue"; Clone queue: Pass "parentId of the selected queue".
                     * @param _parentId Create root queue: Pass "myId of root"; Create sub-queue: Pass "myId of the selected queue"; Clone queue: Pass "parentId of the selected queue".
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Edit or delete operations: Require passing "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a sub-queue to a new queue.
                     * @return MyId Edit or delete operations: Require passing "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a sub-queue to a new queue.
                     * 
                     */
                    std::string GetMyId() const;

                    /**
                     * 设置Edit or delete operations: Require passing "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a sub-queue to a new queue.
                     * @param _myId Edit or delete operations: Require passing "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a sub-queue to a new queue.
                     * 
                     */
                    void SetMyId(const std::string& _myId);

                    /**
                     * 判断参数 MyId 是否已赋值
                     * @return MyId 是否已赋值
                     * 
                     */
                    bool MyIdHasBeenSet() const;

                    /**
                     * 获取Basic configuration. The value of key is consistent with the field returned by **DescribeYarnQueue**.###### Fair scheduler
Values of key are as follows:

- type: parent queue. Value: **parent** or **null**.
- aclSubmitApps: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: timeout of minimum share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionTimeout: timeout of fair share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. Value: **numeric string** or **null**. Numeric string range: (0,1].
- allowPreemptionFrom: preemption mode. Value: **Boolean string** or **null**.
- schedulingPolicy: scheduling policy. Value: **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler
Values of key are as follows:

- state: queue status. Value: **STOPPED** or **RUNNING**.
- default-node-label-expression: default tag expression. Value: **tag** or **null**.
- acl_submit_applications: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to each container. Value: **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of virtual cores allocated to each container. Value: **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BasicParams Basic configuration. The value of key is consistent with the field returned by **DescribeYarnQueue**.###### Fair scheduler
Values of key are as follows:

- type: parent queue. Value: **parent** or **null**.
- aclSubmitApps: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: timeout of minimum share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionTimeout: timeout of fair share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. Value: **numeric string** or **null**. Numeric string range: (0,1].
- allowPreemptionFrom: preemption mode. Value: **Boolean string** or **null**.
- schedulingPolicy: scheduling policy. Value: **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler
Values of key are as follows:

- state: queue status. Value: **STOPPED** or **RUNNING**.
- default-node-label-expression: default tag expression. Value: **tag** or **null**.
- acl_submit_applications: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to each container. Value: **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of virtual cores allocated to each container. Value: **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ItemSeq GetBasicParams() const;

                    /**
                     * 设置Basic configuration. The value of key is consistent with the field returned by **DescribeYarnQueue**.###### Fair scheduler
Values of key are as follows:

- type: parent queue. Value: **parent** or **null**.
- aclSubmitApps: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: timeout of minimum share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionTimeout: timeout of fair share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. Value: **numeric string** or **null**. Numeric string range: (0,1].
- allowPreemptionFrom: preemption mode. Value: **Boolean string** or **null**.
- schedulingPolicy: scheduling policy. Value: **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler
Values of key are as follows:

- state: queue status. Value: **STOPPED** or **RUNNING**.
- default-node-label-expression: default tag expression. Value: **tag** or **null**.
- acl_submit_applications: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to each container. Value: **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of virtual cores allocated to each container. Value: **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _basicParams Basic configuration. The value of key is consistent with the field returned by **DescribeYarnQueue**.###### Fair scheduler
Values of key are as follows:

- type: parent queue. Value: **parent** or **null**.
- aclSubmitApps: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: timeout of minimum share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionTimeout: timeout of fair share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. Value: **numeric string** or **null**. Numeric string range: (0,1].
- allowPreemptionFrom: preemption mode. Value: **Boolean string** or **null**.
- schedulingPolicy: scheduling policy. Value: **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler
Values of key are as follows:

- state: queue status. Value: **STOPPED** or **RUNNING**.
- default-node-label-expression: default tag expression. Value: **tag** or **null**.
- acl_submit_applications: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to each container. Value: **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of virtual cores allocated to each container. Value: **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBasicParams(const ItemSeq& _basicParams);

                    /**
                     * 判断参数 BasicParams 是否已赋值
                     * @return BasicParams 是否已赋值
                     * 
                     */
                    bool BasicParamsHasBeenSet() const;

                    /**
                     * 获取Configuration set information. For the values, see the parameter description of ConfigSetInfo. Configuration set is the representation of the plan mode in the queue, containing different configuration item values for different time periods. The configuration set names of all queues are the same. For a single queue, the tags and parameters in each configuration set are the same, but the parameter values are different.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigSetParams Configuration set information. For the values, see the parameter description of ConfigSetInfo. Configuration set is the representation of the plan mode in the queue, containing different configuration item values for different time periods. The configuration set names of all queues are the same. For a single queue, the tags and parameters in each configuration set are the same, but the parameter values are different.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ConfigSetInfo> GetConfigSetParams() const;

                    /**
                     * 设置Configuration set information. For the values, see the parameter description of ConfigSetInfo. Configuration set is the representation of the plan mode in the queue, containing different configuration item values for different time periods. The configuration set names of all queues are the same. For a single queue, the tags and parameters in each configuration set are the same, but the parameter values are different.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configSetParams Configuration set information. For the values, see the parameter description of ConfigSetInfo. Configuration set is the representation of the plan mode in the queue, containing different configuration item values for different time periods. The configuration set names of all queues are the same. For a single queue, the tags and parameters in each configuration set are the same, but the parameter values are different.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfigSetParams(const std::vector<ConfigSetInfo>& _configSetParams);

                    /**
                     * 判断参数 ConfigSetParams 是否已赋值
                     * @return ConfigSetParams 是否已赋值
                     * 
                     */
                    bool ConfigSetParamsHasBeenSet() const;

                    /**
                     * 获取This parameter is specific for capacity scheduling and is valid only when `OpType` is set to `6`. It indicates tags to be deleted from the queue. This parameter has a higher priority than LabelParams in ConfigSetParams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeleteLables This parameter is specific for capacity scheduling and is valid only when `OpType` is set to `6`. It indicates tags to be deleted from the queue. This parameter has a higher priority than LabelParams in ConfigSetParams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDeleteLables() const;

                    /**
                     * 设置This parameter is specific for capacity scheduling and is valid only when `OpType` is set to `6`. It indicates tags to be deleted from the queue. This parameter has a higher priority than LabelParams in ConfigSetParams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deleteLables This parameter is specific for capacity scheduling and is valid only when `OpType` is set to `6`. It indicates tags to be deleted from the queue. This parameter has a higher priority than LabelParams in ConfigSetParams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeleteLables(const std::vector<std::string>& _deleteLables);

                    /**
                     * 判断参数 DeleteLables 是否已赋值
                     * @return DeleteLables 是否已赋值
                     * 
                     */
                    bool DeleteLablesHasBeenSet() const;

                private:

                    /**
                     * Operation type. Valid values:

- 0: create a queue.
- 1: edit - full overwrite.
- 2: create a sub-queue.
- 3: delete.
- 4: clone. It is the same as sub-queue creation. Especially, for `fair`, a sub-queue can be copied to a new queue.
- 6: edit - incremental update.
                     */
                    uint64_t m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * Queue name. It cannot be modified.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Create root queue: Pass "myId of root"; Create sub-queue: Pass "myId of the selected queue"; Clone queue: Pass "parentId of the selected queue".
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Edit or delete operations: Require passing "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a sub-queue to a new queue.
                     */
                    std::string m_myId;
                    bool m_myIdHasBeenSet;

                    /**
                     * Basic configuration. The value of key is consistent with the field returned by **DescribeYarnQueue**.###### Fair scheduler
Values of key are as follows:

- type: parent queue. Value: **parent** or **null**.
- aclSubmitApps: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: timeout of minimum share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionTimeout: timeout of fair share before preemption. Value: **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. Value: **numeric string** or **null**. Numeric string range: (0,1].
- allowPreemptionFrom: preemption mode. Value: **Boolean string** or **null**.
- schedulingPolicy: scheduling policy. Value: **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler
Values of key are as follows:

- state: queue status. Value: **STOPPED** or **RUNNING**.
- default-node-label-expression: default tag expression. Value: **tag** or **null**.
- acl_submit_applications: submission ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administration ACL. Value: **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to each container. Value: **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of virtual cores allocated to each container. Value: **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ItemSeq m_basicParams;
                    bool m_basicParamsHasBeenSet;

                    /**
                     * Configuration set information. For the values, see the parameter description of ConfigSetInfo. Configuration set is the representation of the plan mode in the queue, containing different configuration item values for different time periods. The configuration set names of all queues are the same. For a single queue, the tags and parameters in each configuration set are the same, but the parameter values are different.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConfigSetInfo> m_configSetParams;
                    bool m_configSetParamsHasBeenSet;

                    /**
                     * This parameter is specific for capacity scheduling and is valid only when `OpType` is set to `6`. It indicates tags to be deleted from the queue. This parameter has a higher priority than LabelParams in ConfigSetParams.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_deleteLables;
                    bool m_deleteLablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGMODIFYINFOV2_H_

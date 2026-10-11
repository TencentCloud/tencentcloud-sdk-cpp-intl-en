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
                * Queue modification information in resource scheduling.
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

0: Create a queue.
1: Edit - fully overwrite a queue.
2: Create a subqueue.
3: Delete a queue.
4: Clone a queue. This is the same as creating a subqueue. Specifically, for `fair`, a subqueue can be copied to a new queue.
6: Edit - incrementally update a queue.
                     * @return OpType Operation type. Valid values:

0: Create a queue.
1: Edit - fully overwrite a queue.
2: Create a subqueue.
3: Delete a queue.
4: Clone a queue. This is the same as creating a subqueue. Specifically, for `fair`, a subqueue can be copied to a new queue.
6: Edit - incrementally update a queue.
                     * 
                     */
                    uint64_t GetOpType() const;

                    /**
                     * 设置Operation type. Valid values:

0: Create a queue.
1: Edit - fully overwrite a queue.
2: Create a subqueue.
3: Delete a queue.
4: Clone a queue. This is the same as creating a subqueue. Specifically, for `fair`, a subqueue can be copied to a new queue.
6: Edit - incrementally update a queue.
                     * @param _opType Operation type. Valid values:

0: Create a queue.
1: Edit - fully overwrite a queue.
2: Create a subqueue.
3: Delete a queue.
4: Clone a queue. This is the same as creating a subqueue. Specifically, for `fair`, a subqueue can be copied to a new queue.
6: Edit - incrementally update a queue.
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
                     * 获取Create the root queue: pass "myId of root". Create a subqueue: pass "myId of the selected queue". Clone a queue: pass "parentId of the selected queue".
                     * @return ParentId Create the root queue: pass "myId of root". Create a subqueue: pass "myId of the selected queue". Clone a queue: pass "parentId of the selected queue".
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Create the root queue: pass "myId of root". Create a subqueue: pass "myId of the selected queue". Clone a queue: pass "parentId of the selected queue".
                     * @param _parentId Create the root queue: pass "myId of root". Create a subqueue: pass "myId of the selected queue". Clone a queue: pass "parentId of the selected queue".
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
                     * 获取Edit or delete operations: pass "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a subqueue to a new queue.
                     * @return MyId Edit or delete operations: pass "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a subqueue to a new queue.
                     * 
                     */
                    std::string GetMyId() const;

                    /**
                     * 设置Edit or delete operations: pass "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a subqueue to a new queue.
                     * @param _myId Edit or delete operations: pass "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a subqueue to a new queue.
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
                     * 获取Basic configuration information. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:

- type: parent queue. The value is **parent** or **null**.
- aclSubmitApps: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: minimum share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionTimeout: fair share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. The value is a **numeric string** or **null**, where the numeric range is (0, 1].
- allowPreemptionFrom: preemption mode. The value is a **boolean string** or **null**.
- schedulingPolicy: scheduling policy. The value is **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler.
The key value information is as follows:

- state: queue status. The value is **STOPPED** or **RUNNING**.
- default-node-label-expression: default label expression. The value is a **label** or **null**.
- acl_submit_applications: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to a container. The value is a **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of vCores allocated to a container. The value is a **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
                     * @return BasicParams Basic configuration information. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:

- type: parent queue. The value is **parent** or **null**.
- aclSubmitApps: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: minimum share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionTimeout: fair share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. The value is a **numeric string** or **null**, where the numeric range is (0, 1].
- allowPreemptionFrom: preemption mode. The value is a **boolean string** or **null**.
- schedulingPolicy: scheduling policy. The value is **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler.
The key value information is as follows:

- state: queue status. The value is **STOPPED** or **RUNNING**.
- default-node-label-expression: default label expression. The value is a **label** or **null**.
- acl_submit_applications: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to a container. The value is a **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of vCores allocated to a container. The value is a **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
                     * 
                     */
                    ItemSeq GetBasicParams() const;

                    /**
                     * 设置Basic configuration information. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:

- type: parent queue. The value is **parent** or **null**.
- aclSubmitApps: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: minimum share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionTimeout: fair share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. The value is a **numeric string** or **null**, where the numeric range is (0, 1].
- allowPreemptionFrom: preemption mode. The value is a **boolean string** or **null**.
- schedulingPolicy: scheduling policy. The value is **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler.
The key value information is as follows:

- state: queue status. The value is **STOPPED** or **RUNNING**.
- default-node-label-expression: default label expression. The value is a **label** or **null**.
- acl_submit_applications: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to a container. The value is a **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of vCores allocated to a container. The value is a **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
                     * @param _basicParams Basic configuration information. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:

- type: parent queue. The value is **parent** or **null**.
- aclSubmitApps: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: minimum share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionTimeout: fair share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. The value is a **numeric string** or **null**, where the numeric range is (0, 1].
- allowPreemptionFrom: preemption mode. The value is a **boolean string** or **null**.
- schedulingPolicy: scheduling policy. The value is **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler.
The key value information is as follows:

- state: queue status. The value is **STOPPED** or **RUNNING**.
- default-node-label-expression: default label expression. The value is a **label** or **null**.
- acl_submit_applications: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to a container. The value is a **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of vCores allocated to a container. The value is a **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
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
                     * 获取Configuration set information. For the value, see the parameter description of this complex type. A configuration set is the representation of the plan mode in a queue, indicating different configuration values in different time periods. All queues have the same configuration set name. For a single queue, the labels and parameters in each configuration set are the same, but the parameter values differ.
                     * @return ConfigSetParams Configuration set information. For the value, see the parameter description of this complex type. A configuration set is the representation of the plan mode in a queue, indicating different configuration values in different time periods. All queues have the same configuration set name. For a single queue, the labels and parameters in each configuration set are the same, but the parameter values differ.
                     * 
                     */
                    std::vector<ConfigSetInfo> GetConfigSetParams() const;

                    /**
                     * 设置Configuration set information. For the value, see the parameter description of this complex type. A configuration set is the representation of the plan mode in a queue, indicating different configuration values in different time periods. All queues have the same configuration set name. For a single queue, the labels and parameters in each configuration set are the same, but the parameter values differ.
                     * @param _configSetParams Configuration set information. For the value, see the parameter description of this complex type. A configuration set is the representation of the plan mode in a queue, indicating different configuration values in different time periods. All queues have the same configuration set name. For a single queue, the labels and parameters in each configuration set are the same, but the parameter values differ.
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
                     * 获取Specific to the capacity scheduler. It takes effect only when `OpType` is `6` and indicates which labels in this queue are to be deleted. Its priority is higher than that of LabelParams in ConfigSetParams.
                     * @return DeleteLables Specific to the capacity scheduler. It takes effect only when `OpType` is `6` and indicates which labels in this queue are to be deleted. Its priority is higher than that of LabelParams in ConfigSetParams.
                     * 
                     */
                    std::vector<std::string> GetDeleteLables() const;

                    /**
                     * 设置Specific to the capacity scheduler. It takes effect only when `OpType` is `6` and indicates which labels in this queue are to be deleted. Its priority is higher than that of LabelParams in ConfigSetParams.
                     * @param _deleteLables Specific to the capacity scheduler. It takes effect only when `OpType` is `6` and indicates which labels in this queue are to be deleted. Its priority is higher than that of LabelParams in ConfigSetParams.
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

0: Create a queue.
1: Edit - fully overwrite a queue.
2: Create a subqueue.
3: Delete a queue.
4: Clone a queue. This is the same as creating a subqueue. Specifically, for `fair`, a subqueue can be copied to a new queue.
6: Edit - incrementally update a queue.
                     */
                    uint64_t m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * Queue name. It cannot be modified.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Create the root queue: pass "myId of root". Create a subqueue: pass "myId of the selected queue". Clone a queue: pass "parentId of the selected queue".
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Edit or delete operations: pass "myId of the selected queue". Passing is required for cloning only when the scheduler is `fair` in order to copy a subqueue to a new queue.
                     */
                    std::string m_myId;
                    bool m_myIdHasBeenSet;

                    /**
                     * Basic configuration information. The value of key is consistent with the field returned by **DescribeYarnQueue**.
###### Fair scheduler.
The key value information is as follows:

- type: parent queue. The value is **parent** or **null**.
- aclSubmitApps: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- aclAdministerApps: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- minSharePreemptionTimeout: minimum share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionTimeout: fair share preemption timeout. The value is a **numeric string** or **null**.
- fairSharePreemptionThreshold: fair share preemption threshold. The value is a **numeric string** or **null**, where the numeric range is (0, 1].
- allowPreemptionFrom: preemption mode. The value is a **boolean string** or **null**.
- schedulingPolicy: scheduling policy. The value is **drf**, **fair**, **fifo**, or **null**.

```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
###### Capacity scheduler.
The key value information is as follows:

- state: queue status. The value is **STOPPED** or **RUNNING**.
- default-node-label-expression: default label expression. The value is a **label** or **null**.
- acl_submit_applications: submit access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- acl_administer_queue: administer access control. The value is a **JSON string of the AclForYarnQueue type** or **null**.
- maximum-allocation-mb: maximum memory allocated to a container. The value is a **numeric string** or **null**.
- maximum-allocation-vcores: maximum number of vCores allocated to a container. The value is a **numeric string** or **null**.
```
type AclForYarnQueue struct {
	User  *string `json:"user"` // Username
	Group *string `json:"group"`// Group name
}
```
                     */
                    ItemSeq m_basicParams;
                    bool m_basicParamsHasBeenSet;

                    /**
                     * Configuration set information. For the value, see the parameter description of this complex type. A configuration set is the representation of the plan mode in a queue, indicating different configuration values in different time periods. All queues have the same configuration set name. For a single queue, the labels and parameters in each configuration set are the same, but the parameter values differ.
                     */
                    std::vector<ConfigSetInfo> m_configSetParams;
                    bool m_configSetParamsHasBeenSet;

                    /**
                     * Specific to the capacity scheduler. It takes effect only when `OpType` is `6` and indicates which labels in this queue are to be deleted. Its priority is higher than that of LabelParams in ConfigSetParams.
                     */
                    std::vector<std::string> m_deleteLables;
                    bool m_deleteLablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONFIGMODIFYINFOV2_H_

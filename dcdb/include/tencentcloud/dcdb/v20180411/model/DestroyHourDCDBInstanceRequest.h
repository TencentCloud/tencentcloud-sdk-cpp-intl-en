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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESTROYHOURDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESTROYHOURDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DestroyHourDCDBInstance request structure.
                */
                class DestroyHourDCDBInstanceRequest : public AbstractModel
                {
                public:
                    DestroyHourDCDBInstanceRequest();
                    ~DestroyHourDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of tdsqlshard-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of tdsqlshard-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of tdsqlshard-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of tdsqlshard-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of tdsqlshard-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESTROYHOURDCDBINSTANCEREQUEST_H_

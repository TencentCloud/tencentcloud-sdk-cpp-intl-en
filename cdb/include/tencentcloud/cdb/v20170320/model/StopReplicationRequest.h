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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_STOPREPLICATIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_STOPREPLICATIONREQUEST_H_

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
                * StopReplication request structure.
                */
                class StopReplicationRequest : public AbstractModel
                {
                public:
                    StopReplicationRequest();
                    ~StopReplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Read-Only instance ID.
                     * @return InstanceId Read-Only instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Read-Only instance ID.
                     * @param _instanceId Read-Only instance ID.
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
                     * Read-Only instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_STOPREPLICATIONREQUEST_H_

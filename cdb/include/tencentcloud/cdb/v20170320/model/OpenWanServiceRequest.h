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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENWANSERVICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENWANSERVICEREQUEST_H_

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
                * OpenWanService request structure.
                */
                class OpenWanServiceRequest : public AbstractModel
                {
                public:
                    OpenWanServiceRequest();
                    ~OpenWanServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter. The read-only group ID can be passed in.
                     * @return InstanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter. The read-only group ID can be passed in.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter. The read-only group ID can be passed in.
                     * @param _instanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter. The read-only group ID can be passed in.
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
                     * 获取When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * @return OpResourceId When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * 
                     */
                    std::string GetOpResourceId() const;

                    /**
                     * 设置When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * @param _opResourceId When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * 
                     */
                    void SetOpResourceId(const std::string& _opResourceId);

                    /**
                     * 判断参数 OpResourceId 是否已赋值
                     * @return OpResourceId 是否已赋值
                     * 
                     */
                    bool OpResourceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the query instance list API (https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1). The value is the InstanceId field in the output parameter. The read-only group ID can be passed in.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     */
                    std::string m_opResourceId;
                    bool m_opResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENWANSERVICEREQUEST_H_

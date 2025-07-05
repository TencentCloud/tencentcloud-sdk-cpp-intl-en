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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_ISOLATEHOURDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_ISOLATEHOURDCDBINSTANCEREQUEST_H_

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
                * IsolateHourDCDBInstance request structure.
                */
                class IsolateHourDCDBInstanceRequest : public AbstractModel
                {
                public:
                    IsolateHourDCDBInstanceRequest();
                    ~IsolateHourDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of the instances to be upgraded  in the format of  `dcdbt-ow728lmc`, which can be obtained through the `DescribeDCDBInstances` API.
                     * @return InstanceIds ID list of the instances to be upgraded  in the format of  `dcdbt-ow728lmc`, which can be obtained through the `DescribeDCDBInstances` API.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID list of the instances to be upgraded  in the format of  `dcdbt-ow728lmc`, which can be obtained through the `DescribeDCDBInstances` API.
                     * @param _instanceIds ID list of the instances to be upgraded  in the format of  `dcdbt-ow728lmc`, which can be obtained through the `DescribeDCDBInstances` API.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * ID list of the instances to be upgraded  in the format of  `dcdbt-ow728lmc`, which can be obtained through the `DescribeDCDBInstances` API.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_ISOLATEHOURDCDBINSTANCEREQUEST_H_

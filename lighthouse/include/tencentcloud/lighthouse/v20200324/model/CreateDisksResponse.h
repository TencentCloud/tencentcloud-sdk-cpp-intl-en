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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateDisks response structure.
                */
                class CreateDisksResponse : public AbstractModel
                {
                public:
                    CreateDisksResponse();
                    ~CreateDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs created by using this API. The returning of IDs does not mean that the instances are created successfully.

You can call `DescribeDisks` API, and find the disk ID in the `DiskSet` returned to check its status. If the status changes from `PENDING` to `UNATTACHED` or `ATTACHED`, the instance is created successfully.
                     * @return DiskIdSet List of IDs created by using this API. The returning of IDs does not mean that the instances are created successfully.

You can call `DescribeDisks` API, and find the disk ID in the `DiskSet` returned to check its status. If the status changes from `PENDING` to `UNATTACHED` or `ATTACHED`, the instance is created successfully.
                     * 
                     */
                    std::vector<std::string> GetDiskIdSet() const;

                    /**
                     * 判断参数 DiskIdSet 是否已赋值
                     * @return DiskIdSet 是否已赋值
                     * 
                     */
                    bool DiskIdSetHasBeenSet() const;

                private:

                    /**
                     * List of IDs created by using this API. The returning of IDs does not mean that the instances are created successfully.

You can call `DescribeDisks` API, and find the disk ID in the `DiskSet` returned to check its status. If the status changes from `PENDING` to `UNATTACHED` or `ATTACHED`, the instance is created successfully.
                     */
                    std::vector<std::string> m_diskIdSet;
                    bool m_diskIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKSRESPONSE_H_

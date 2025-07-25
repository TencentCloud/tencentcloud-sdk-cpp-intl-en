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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_STARTBATCHROLLBACKREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_STARTBATCHROLLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackInstancesInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * StartBatchRollback request structure.
                */
                class StartBatchRollbackRequest : public AbstractModel
                {
                public:
                    StartBatchRollbackRequest();
                    ~StartBatchRollbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of the instance for rollback
                     * @return Instances Details of the instance for rollback
                     * 
                     */
                    std::vector<RollbackInstancesInfo> GetInstances() const;

                    /**
                     * 设置Details of the instance for rollback
                     * @param _instances Details of the instance for rollback
                     * 
                     */
                    void SetInstances(const std::vector<RollbackInstancesInfo>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * Details of the instance for rollback
                     */
                    std::vector<RollbackInstancesInfo> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_STARTBATCHROLLBACKREQUEST_H_

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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ISOLATEDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ISOLATEDBINSTANCERESPONSE_H_

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
                * IsolateDBInstance response structure.
                */
                class IsolateDBInstanceResponse : public AbstractModel
                {
                public:
                    IsolateDBInstanceResponse();
                    ~IsolateDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Request ID of the async task. Use this ID to query the outcome of the async task. (This returned field is currently abandoned. The quarantined state of instances can be queried through the API to query instances.)
                     * @return AsyncRequestId Request ID of the async task. Use this ID to query the outcome of the async task. (This returned field is currently abandoned. The quarantined state of instances can be queried through the API to query instances.)
                     * @deprecated
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * @deprecated
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * Request ID of the async task. Use this ID to query the outcome of the async task. (This returned field is currently abandoned. The quarantined state of instances can be queried through the API to query instances.)
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ISOLATEDBINSTANCERESPONSE_H_

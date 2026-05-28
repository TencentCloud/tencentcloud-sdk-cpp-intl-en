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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESTARTDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESTARTDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * RestartDBInstances request structure.
                */
                class RestartDBInstancesRequest : public AbstractModel
                {
                public:
                    RestartDBInstancesRequest();
                    ~RestartDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Array of instance IDs that must be restarted</p>
                     * @return InstanceIds <p>Array of instance IDs that must be restarted</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>Array of instance IDs that must be restarted</p>
                     * @param _instanceIds <p>Array of instance IDs that must be restarted</p>
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
                     * 获取<p>Restart time. Leave it blank to restart now.</p>
                     * @return RestartTime <p>Restart time. Leave it blank to restart now.</p>
                     * 
                     */
                    std::string GetRestartTime() const;

                    /**
                     * 设置<p>Restart time. Leave it blank to restart now.</p>
                     * @param _restartTime <p>Restart time. Leave it blank to restart now.</p>
                     * 
                     */
                    void SetRestartTime(const std::string& _restartTime);

                    /**
                     * 判断参数 RestartTime 是否已赋值
                     * @return RestartTime 是否已赋值
                     * 
                     */
                    bool RestartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Array of instance IDs that must be restarted</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Restart time. Leave it blank to restart now.</p>
                     */
                    std::string m_restartTime;
                    bool m_restartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_RESTARTDBINSTANCESREQUEST_H_

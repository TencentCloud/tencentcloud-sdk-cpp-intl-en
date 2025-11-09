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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETECLSDELIVERYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETECLSDELIVERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DeleteCLSDelivery request structure.
                */
                class DeleteCLSDeliveryRequest : public AbstractModel
                {
                public:
                    DeleteCLSDeliveryRequest();
                    ~DeleteCLSDeliveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Log topic ID.
                     * @return CLSTopicIds Log topic ID.
                     * 
                     */
                    std::vector<std::string> GetCLSTopicIds() const;

                    /**
                     * 设置Log topic ID.
                     * @param _cLSTopicIds Log topic ID.
                     * 
                     */
                    void SetCLSTopicIds(const std::vector<std::string>& _cLSTopicIds);

                    /**
                     * 判断参数 CLSTopicIds 是否已赋值
                     * @return CLSTopicIds 是否已赋值
                     * 
                     */
                    bool CLSTopicIdsHasBeenSet() const;

                    /**
                     * 获取Log type.
                     * @return LogType Log type.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type.
                     * @param _logType Log type.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Whether the maintenance time is in operation.
                     * @return IsInMaintainPeriod Whether the maintenance time is in operation.
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置Whether the maintenance time is in operation.
                     * @param _isInMaintainPeriod Whether the maintenance time is in operation.
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log topic ID.
                     */
                    std::vector<std::string> m_cLSTopicIds;
                    bool m_cLSTopicIdsHasBeenSet;

                    /**
                     * Log type.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Whether the maintenance time is in operation.
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETECLSDELIVERYREQUEST_H_

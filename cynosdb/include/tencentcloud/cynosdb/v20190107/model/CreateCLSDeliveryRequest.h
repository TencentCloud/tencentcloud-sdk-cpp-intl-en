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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLSDELIVERYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLSDELIVERYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CLSInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateCLSDelivery request structure.
                */
                class CreateCLSDeliveryRequest : public AbstractModel
                {
                public:
                    CreateCLSDeliveryRequest();
                    ~CreateCLSDeliveryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Intance ID.
                     * @return InstanceId Intance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Intance ID.
                     * @param _instanceId Intance ID.
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
                     * 获取Log shipping configuration.
                     * @return CLSInfoList Log shipping configuration.
                     * 
                     */
                    std::vector<CLSInfo> GetCLSInfoList() const;

                    /**
                     * 设置Log shipping configuration.
                     * @param _cLSInfoList Log shipping configuration.
                     * 
                     */
                    void SetCLSInfoList(const std::vector<CLSInfo>& _cLSInfoList);

                    /**
                     * 判断参数 CLSInfoList 是否已赋值
                     * @return CLSInfoList 是否已赋值
                     * 
                     */
                    bool CLSInfoListHasBeenSet() const;

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
                     * Intance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log shipping configuration.
                     */
                    std::vector<CLSInfo> m_cLSInfoList;
                    bool m_cLSInfoListHasBeenSet;

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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLSDELIVERYREQUEST_H_

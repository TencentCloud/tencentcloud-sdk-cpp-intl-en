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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DBBACKUPTIMECONFIG_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DBBACKUPTIMECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TencentDB instance backup time configuration information
                */
                class DBBackupTimeConfig : public AbstractModel
                {
                public:
                    DBBackupTimeConfig();
                    ~DBBackupTimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time of daily backup window in the format of `mm:ss`, such as 22:00
                     * @return StartBackupTime Start time of daily backup window in the format of `mm:ss`, such as 22:00
                     */
                    std::string GetStartBackupTime() const;

                    /**
                     * 设置Start time of daily backup window in the format of `mm:ss`, such as 22:00
                     * @param StartBackupTime Start time of daily backup window in the format of `mm:ss`, such as 22:00
                     */
                    void SetStartBackupTime(const std::string& _startBackupTime);

                    /**
                     * 判断参数 StartBackupTime 是否已赋值
                     * @return StartBackupTime 是否已赋值
                     */
                    bool StartBackupTimeHasBeenSet() const;

                    /**
                     * 获取End time of daily backup window in the format of `mm:ss`, such as 23:00
                     * @return EndBackupTime End time of daily backup window in the format of `mm:ss`, such as 23:00
                     */
                    std::string GetEndBackupTime() const;

                    /**
                     * 设置End time of daily backup window in the format of `mm:ss`, such as 23:00
                     * @param EndBackupTime End time of daily backup window in the format of `mm:ss`, such as 23:00
                     */
                    void SetEndBackupTime(const std::string& _endBackupTime);

                    /**
                     * 判断参数 EndBackupTime 是否已赋值
                     * @return EndBackupTime 是否已赋值
                     */
                    bool EndBackupTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time of daily backup window in the format of `mm:ss`, such as 22:00
                     */
                    std::string m_startBackupTime;
                    bool m_startBackupTimeHasBeenSet;

                    /**
                     * End time of daily backup window in the format of `mm:ss`, such as 23:00
                     */
                    std::string m_endBackupTime;
                    bool m_endBackupTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DBBACKUPTIMECONFIG_H_

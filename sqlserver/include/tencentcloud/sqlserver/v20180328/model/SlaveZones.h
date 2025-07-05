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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLAVEZONES_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLAVEZONES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Replica AZ information
                */
                class SlaveZones : public AbstractModel
                {
                public:
                    SlaveZones();
                    ~SlaveZones() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Replica AZ region code
                     * @return SlaveZone Replica AZ region code
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置Replica AZ region code
                     * @param _slaveZone Replica AZ region code
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取Replica AZ
                     * @return SlaveZoneName Replica AZ
                     * 
                     */
                    std::string GetSlaveZoneName() const;

                    /**
                     * 设置Replica AZ
                     * @param _slaveZoneName Replica AZ
                     * 
                     */
                    void SetSlaveZoneName(const std::string& _slaveZoneName);

                    /**
                     * 判断参数 SlaveZoneName 是否已赋值
                     * @return SlaveZoneName 是否已赋值
                     * 
                     */
                    bool SlaveZoneNameHasBeenSet() const;

                private:

                    /**
                     * Replica AZ region code
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * Replica AZ
                     */
                    std::string m_slaveZoneName;
                    bool m_slaveZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLAVEZONES_H_

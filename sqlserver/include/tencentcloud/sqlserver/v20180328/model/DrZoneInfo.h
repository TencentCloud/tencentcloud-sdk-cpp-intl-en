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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRZONEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRZONEINFO_H_

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
                * AZ information on the secondary node.
                */
                class DrZoneInfo : public AbstractModel
                {
                public:
                    DrZoneInfo();
                    ~DrZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID of the secondary node.
                     * @return DrInstanceId Resource ID of the secondary node.
                     * 
                     */
                    std::string GetDrInstanceId() const;

                    /**
                     * 设置Resource ID of the secondary node.
                     * @param _drInstanceId Resource ID of the secondary node.
                     * 
                     */
                    void SetDrInstanceId(const std::string& _drInstanceId);

                    /**
                     * 判断参数 DrInstanceId 是否已赋值
                     * @return DrInstanceId 是否已赋值
                     * 
                     */
                    bool DrInstanceIdHasBeenSet() const;

                    /**
                     * 获取AZ of the secondary node.
                     * @return Zone AZ of the secondary node.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ of the secondary node.
                     * @param _zone AZ of the secondary node.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Resource ID of the secondary node.
                     */
                    std::string m_drInstanceId;
                    bool m_drInstanceIdHasBeenSet;

                    /**
                     * AZ of the secondary node.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DRZONEINFO_H_

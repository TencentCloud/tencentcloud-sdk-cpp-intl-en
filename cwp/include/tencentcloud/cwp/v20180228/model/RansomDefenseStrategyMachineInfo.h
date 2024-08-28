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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Anti-Ransomware Machine Hard Disk Configuration
                */
                class RansomDefenseStrategyMachineInfo : public AbstractModel
                {
                public:
                    RansomDefenseStrategyMachineInfo();
                    ~RansomDefenseStrategyMachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Specified Hard Disk List. When it is empty, it means all hard disks: disk_id1|disk_name1;disk_id2|disk_name2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskInfo Specified Hard Disk List. When it is empty, it means all hard disks: disk_id1|disk_name1;disk_id2|disk_name2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskInfo() const;

                    /**
                     * 设置Specified Hard Disk List. When it is empty, it means all hard disks: disk_id1|disk_name1;disk_id2|disk_name2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskInfo Specified Hard Disk List. When it is empty, it means all hard disks: disk_id1|disk_name1;disk_id2|disk_name2.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskInfo(const std::string& _diskInfo);

                    /**
                     * 判断参数 DiskInfo 是否已赋值
                     * @return DiskInfo 是否已赋值
                     * 
                     */
                    bool DiskInfoHasBeenSet() const;

                private:

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Specified Hard Disk List. When it is empty, it means all hard disks: disk_id1|disk_name1;disk_id2|disk_name2.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskInfo;
                    bool m_diskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGYMACHINEINFO_H_

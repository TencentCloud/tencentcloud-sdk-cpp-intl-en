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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DISKTYPECONFIGITEM_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DISKTYPECONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Disk sale type
                */
                class DiskTypeConfigItem : public AbstractModel
                {
                public:
                    DiskTypeConfigItem();
                    ~DiskTypeConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of instance corresponding to the disk. Only support single node (cloud disk) and cloud disk edition.
                     * @return DeviceType Type of instance corresponding to the disk. Only support single node (cloud disk) and cloud disk edition.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Type of instance corresponding to the disk. Only support single node (cloud disk) and cloud disk edition.
                     * @param _deviceType Type of instance corresponding to the disk. Only support single node (cloud disk) and cloud disk edition.
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取List of disk types to choose.
                     * @return DiskType List of disk types to choose.
                     * 
                     */
                    std::vector<std::string> GetDiskType() const;

                    /**
                     * 设置List of disk types to choose.
                     * @param _diskType List of disk types to choose.
                     * 
                     */
                    void SetDiskType(const std::vector<std::string>& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                private:

                    /**
                     * Type of instance corresponding to the disk. Only support single node (cloud disk) and cloud disk edition.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * List of disk types to choose.
                     */
                    std::vector<std::string> m_diskType;
                    bool m_diskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DISKTYPECONFIGITEM_H_

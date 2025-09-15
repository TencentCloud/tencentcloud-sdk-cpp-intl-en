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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECDISK_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECDISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Node disk type.
                */
                class NodeSpecDisk : public AbstractModel
                {
                public:
                    NodeSpecDisk();
                    ~NodeSpecDisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quantity.
                     * @return Count Quantity.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Quantity.
                     * @param _count Quantity.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Name.
                     * @return Name Name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.
                     * @param _name Name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Disk type.
                     * @return DiskType Disk type.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type.
                     * @param _diskType Disk type.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Specified disk size.
                     * @return DefaultDiskSize Specified disk size.
                     * 
                     */
                    int64_t GetDefaultDiskSize() const;

                    /**
                     * 设置Specified disk size.
                     * @param _defaultDiskSize Specified disk size.
                     * 
                     */
                    void SetDefaultDiskSize(const int64_t& _defaultDiskSize);

                    /**
                     * 判断参数 DefaultDiskSize 是否已赋值
                     * @return DefaultDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultDiskSizeHasBeenSet() const;

                private:

                    /**
                     * Quantity.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Disk type.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Specified disk size.
                     */
                    int64_t m_defaultDiskSize;
                    bool m_defaultDiskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECDISK_H_

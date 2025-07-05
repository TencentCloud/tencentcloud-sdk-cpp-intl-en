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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDISKPARTITIONINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDISKPARTITIONINFO_H_

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
                * Asset management disk partition information
                */
                class AssetDiskPartitionInfo : public AbstractModel
                {
                public:
                    AssetDiskPartitionInfo();
                    ~AssetDiskPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition name
                     * @return Name Partition name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Partition name
                     * @param _name Partition name
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
                     * 获取Partition size (unit: G)
                     * @return Size Partition size (unit: G)
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Partition size (unit: G)
                     * @param _size Partition size (unit: G)
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Partition utilization
                     * @return Percent Partition utilization
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置Partition utilization
                     * @param _percent Partition utilization
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取File system type
                     * @return Type File system type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置File system type
                     * @param _type File system type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Mounting directory
                     * @return Path Mounting directory
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Mounting directory
                     * @param _path Mounting directory
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Used space (unit: G)
                     * @return Used Used space (unit: G)
                     * 
                     */
                    uint64_t GetUsed() const;

                    /**
                     * 设置Used space (unit: G)
                     * @param _used Used space (unit: G)
                     * 
                     */
                    void SetUsed(const uint64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * Partition name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Partition size (unit: G)
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Partition utilization
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * File system type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Mounting directory
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Used space (unit: G)
                     */
                    uint64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDISKPARTITIONINFO_H_
